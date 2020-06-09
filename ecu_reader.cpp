


#include "ecu_reader.h"
#include <FlexCAN_T4.h>
FlexCAN_T4<CAN1, RX_SIZE_256, TX_SIZE_16> can1;
FlexCAN_T4FD<CAN3, RX_SIZE_256, TX_SIZE_16> FD;

/* C++ wrapper */
ecu_reader_class::ecu_reader_class() {

 
}

uint8_t ecu_reader_class::init(uint32_t baud) {

  FD.begin();
  CANFD_timings_t config;
  config.clock = CLK_24MHz;
  config.baudrate =   500000;
  config.baudrateFD = 2000000;
  config.propdelay = 190;
  config.bus_length = 1;
  config.sample = 75;
  FD.setRegions(64);
  FD.setBaudRate(config);

  FD.setMBFilter(ACCEPT_ALL);
  FD.setMBFilter(MB13, 0x1);
  FD.setMBFilter(MB12, 0x1, 0x3);
  FD.setMBFilterRange(MB8, 0x1, 0x04);
  FD.enableMBInterrupt(MB8);
  FD.enableMBInterrupt(MB12);
  FD.enableMBInterrupt(MB13);
  FD.enhanceFilter(MB8);
  FD.enhanceFilter(MB10);

  FD.distribute();
  FD.mailboxStatus();

  return 0;
}

uint8_t ecu_reader_class::request(uint8_t pid,  int *engine_data) 
{

  CANFD_message_t can_MsgTx,can_MsgRx;
 
  can_MsgTx.buf[0] = 0x02;  
  can_MsgTx.buf[1] = 0x01;
  can_MsgTx.buf[2] = pid;  
  can_MsgTx.buf[3] = 0;
  can_MsgTx.buf[4] = 0;  
  can_MsgTx.buf[5] = 0;
  can_MsgTx.buf[6] = 0;  
  can_MsgTx.buf[7] = 0;
  can_MsgTx.len = 8; 
  can_MsgTx.brs = 0;
  can_MsgTx.edl = 0;
  
  can_MsgTx.id = PID_REQUEST;
  FD.write(can_MsgTx);  
 
  elapsedMillis waiting;     // "waiting" starts at zero
  
  while (waiting < 300) {   //Check for timeout
   if(FD.read(can_MsgRx)) 
    { 
        if((can_MsgRx.id == PID_REPLY) && (can_MsgRx.buf[2] == pid))
        { 
            switch(can_MsgRx.buf[2])
            {   /* Details from http://en.wikipedia.org/wiki/OBD-II_PIDs */
                case ENGINE_RPM:              //   ((A*256)+B)/4    [RPM]
                    *engine_data =  ((can_MsgRx.buf[3]*256) + can_MsgRx.buf[4])/4;
                    //sprintf(buffer,"%d  ",(int) engine_data);
                    break;
                
                case ENGINE_COOLANT_TEMP:     //     A-40              [degree C]
                    *engine_data =  can_MsgRx.buf[3] - 40;
                    //sprintf(buffer,"%d degC ",(int) engine_data);
                
                break;
                
                case VEHICLE_SPEED:         // A                  [km]
                    *engine_data =  can_MsgRx.buf[3];
                    //sprintf(buffer,"%d km ",(int) engine_data);
                
                break;

                case MAF_SENSOR:               // ((256*A)+B) / 100  [g/s]
                    *engine_data =  ((can_MsgRx.buf[3]*256) + can_MsgRx.buf[4])/100;
                    //sprintf(buffer,"%d g/s",(int) engine_data);
                
                break;

                case O2_VOLTAGE:            // A * 0.005   (B-128) * 100/128 (if B==0xFF, sensor is not used in trim calc)
                    *engine_data = can_MsgRx.buf[3]*0.005;
                    //sprintf(buffer,"%d v ",(int) engine_data);

                case THROTTLE:            //
                    *engine_data = int((can_MsgRx.buf[3]*100)/255);
                    //sprintf(buffer,"%d %% ",(int) engine_data);
     
                break;
            }
            //Serial.println("return");
            return 1;
       }     
    }

 
  } // while
  Serial.println("No datat, timeout");
  
  return 0;

}

ecu_reader_class ecu_reader;
