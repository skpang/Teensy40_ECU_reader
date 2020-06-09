/*
 * Teensy 4.0 ECU reader project. 
 * 
 * For use with
 * http://skpang.co.uk/catalog/teensy-40-triple-can-board-with-480x320-35-touch-lcd-p-1589.html
 * 
 * Ensure LVGL library is installed  
 * 
 * https://github.com/lvgl/lvgl
 * 
 *  * 
 */


#include <lvgl.h>
#include <Wire.h>
#include <SPI.h>
#include <ILI9488_t3.h>
#include <Adafruit_FT6206.h>

#include "ecu_reader.h"

int LED_R = 24;
int LED_B = 26;
int LED_G = 25;
int led = 13;

#define ON  LOW
#define OFF HIGH
#define TFT_CS 10
#define TFT_DC  9
int LCD_BL = 14;
int LCD_RST = 15;

ILI9488_t3 display = ILI9488_t3(&SPI, TFT_CS, TFT_DC);
Adafruit_FT6206 ts = Adafruit_FT6206();

ecu_t old_ecu;
LV_FONT_DECLARE(arial_100)

#define LVGL_TICK_PERIOD 60
int screenWidth = 480;
int screenHeight = 320;
int oldTouchX = 0;
int oldTouchY = 0;

static lv_style_t style_box;
static lv_obj_t * gauge1;
static lv_obj_t * label_coolant;
static lv_obj_t * label_mph;
static lv_disp_buf_t disp_buf;
static lv_color_t buf[LV_HOR_RES_MAX * 40];
char buff[20];

IntervalTimer tick;
uint8_t i=0;

static void lv_tick_handler(void)
{

  lv_tick_inc(LVGL_TICK_PERIOD);

}

/* Display flushing */
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p)
{ 
  uint16_t width = (area->x2 - area->x1 +1);
  uint16_t height = (area->y2 - area->y1+1);

  display.writeRect(area->x1, area->y1, width, height, (uint16_t *)color_p);
  lv_disp_flush_ready(disp); /* tell lvgl that flushing is done */
}

bool my_touchpad_read(lv_indev_drv_t * indev_driver, lv_indev_data_t * data)
{
  uint16_t touchX, touchY;

  if (ts.touched())
  {   
      // Retrieve a point  
      TS_Point p = ts.getPoint(); 
  
      touchX = p.y;         // Rotate the co-ordinates
      touchY = p.x;
      touchY = 320-touchY;

      if ((touchX != oldTouchX) || (touchY != oldTouchY))
      {
           oldTouchY = touchY;
           oldTouchX = touchX;
           data->state = LV_INDEV_STATE_PR; 
           data->point.x = touchX;
           data->point.y = touchY;
       
       }
  }else
  {
       data->point.x = oldTouchX;
       data->point.y = oldTouchY;
       data->state =LV_INDEV_STATE_REL;
  }
        
  return 0;
}

void draw_temperature(void)
{

  static lv_style_t style_coolant;
  lv_style_init(&style_coolant);
  lv_style_set_text_color(&style_coolant, LV_STATE_DEFAULT, LV_COLOR_WHITE);
  lv_style_set_text_font(&style_coolant, LV_STATE_DEFAULT, &lv_font_montserrat_32);

  label_coolant = lv_label_create(lv_disp_get_scr_act(NULL), NULL);
  lv_obj_set_pos(label_coolant, 370, 270);
  lv_obj_add_style(label_coolant, LV_OBJ_PART_MAIN,&style_coolant);

  lv_label_set_text(label_coolant, "20 °C");
 

  static lv_style_t style_coolant_text;
  lv_style_init(&style_coolant_text);
  lv_style_set_text_color(&style_coolant_text, LV_STATE_DEFAULT, LV_COLOR_WHITE);
  lv_style_set_text_font(&style_coolant_text, LV_STATE_DEFAULT, &lv_font_montserrat_16);
  
  lv_obj_t * label_coolant_lb = lv_label_create(lv_disp_get_scr_act(NULL), NULL);
  lv_obj_set_pos(label_coolant_lb, 372, 250);
  lv_obj_add_style(label_coolant_lb, LV_OBJ_PART_MAIN,&style_coolant_text);
  lv_label_set_text(label_coolant_lb, "Coolant");
 
}

void gauge_formatter_cb(lv_obj_t *gauge, char *buf, int bufsize, int32_t value)
{
  //Serial.println("******lv_gauge_set_formatter_cb*****\n");
  snprintf(buf, bufsize, "%d", value / 1000);

}

void draw_rpm_gauge(void)
{
    /*Describe the color for the needles*/
    static lv_color_t needle_colors[1];
    needle_colors[0] = LV_COLOR_RED;
    
    static lv_style_t style_font;

    /*Create a gauge*/
    gauge1 = lv_gauge_create(lv_scr_act(), NULL);
    static lv_style_t style;
    lv_style_init(&style);

    lv_style_set_text_font(&style, LV_STATE_DEFAULT, &lv_font_montserrat_30);
    lv_style_set_line_color(&style, LV_STATE_DEFAULT, LV_COLOR_WHITE);
    lv_obj_add_style(gauge1, LV_GAUGE_PART_MAJOR, &style);
    
    lv_style_set_bg_color(&style, LV_STATE_DEFAULT, LV_COLOR_BLACK);
    lv_style_set_line_color(&style, LV_STATE_DEFAULT, LV_COLOR_WHITE);
    lv_style_set_scale_grad_color(&style, LV_STATE_DEFAULT, LV_COLOR_WHITE);
    
    lv_style_set_text_color(&style, LV_STATE_DEFAULT, LV_COLOR_WHITE);
    lv_obj_add_style(gauge1, LV_GAUGE_PART_MAIN, &style);
       
    lv_gauge_set_range(gauge1,0,8000);
    lv_gauge_set_needle_count(gauge1, 1, needle_colors);
    
    lv_gauge_set_scale(gauge1,260,41,9);
    //lv_gauge_set_scale(gauge1,260,17,9);
    lv_gauge_set_critical_value(gauge1,7000);
    
    lv_gauge_ext_t gauge_format;
    gauge_format.format_cb = gauge_formatter_cb;
    lv_gauge_set_formatter_cb(gauge1,gauge_formatter_cb);
    
    lv_obj_set_size(gauge1, 300, 300);
    lv_obj_align(gauge1, NULL, LV_ALIGN_CENTER, -80, 0);

    /*Set the values*/
     lv_gauge_set_value(gauge1, 0, 0);
 
    static lv_style_t style1;
    lv_style_init(&style1);
    lv_style_set_text_color(&style1, LV_STATE_DEFAULT, LV_COLOR_WHITE);
    lv_style_set_text_font(&style1, LV_STATE_DEFAULT, &lv_font_montserrat_32);
 
    lv_obj_t * label1;
    label1 = lv_label_create(lv_disp_get_scr_act(NULL), NULL);
    lv_obj_set_pos(label1, 122, 220);
    lv_obj_add_style(label1, LV_OBJ_PART_MAIN,&style1);
    lv_label_set_text(label1, "RPM");

    static lv_style_t style2;
    lv_style_init(&style2);
    lv_style_set_text_color(&style2, LV_STATE_DEFAULT, LV_COLOR_WHITE);
    lv_style_set_text_font(&style2, LV_STATE_DEFAULT, &lv_font_montserrat_18);

    lv_obj_t * label2;
    label2 = lv_label_create(lv_disp_get_scr_act(NULL), NULL);
    lv_obj_set_pos(label2, 135, 255);
    lv_obj_add_style(label2, LV_OBJ_PART_MAIN,&style2);
    lv_label_set_text(label2, "x1000");

}
   
void draw_mph(void)
{
  static lv_style_t style_mph;
  lv_style_init(&style_mph);

  lv_style_set_text_color(&style_mph, LV_STATE_DEFAULT, LV_COLOR_WHITE);
  lv_style_set_text_font(&style_mph, LV_STATE_DEFAULT, &arial_100);
  
  label_mph = lv_label_create(lv_disp_get_scr_act(NULL), NULL);
  lv_label_set_long_mode(label_mph, LV_LABEL_LONG_BREAK);
  lv_obj_set_width(label_mph, 200);
  lv_label_set_align(label_mph, LV_LABEL_ALIGN_RIGHT); 
  lv_obj_add_style(label_mph, LV_OBJ_PART_MAIN,&style_mph);
   
  lv_obj_set_pos(label_mph, 280, 15);
  lv_label_set_text(label_mph, "0");

  static lv_style_t style_mph_text;
  lv_style_init(&style_mph_text);
  lv_style_set_text_color(&style_mph_text, LV_STATE_DEFAULT, LV_COLOR_WHITE);
  lv_style_set_text_font(&style_mph_text, LV_STATE_DEFAULT, &lv_font_montserrat_16);
  
  lv_obj_t * label_mph_lb = lv_label_create(lv_disp_get_scr_act(NULL), NULL);
  lv_obj_set_pos(label_mph_lb, 420, 100);
  lv_obj_add_style(label_mph_lb, LV_OBJ_PART_MAIN,&style_mph_text);

  lv_label_set_text(label_mph_lb, "mph");
}

void setup() {
    pinMode(LED_R,OUTPUT);
    pinMode(LED_G,OUTPUT);
    pinMode(LED_B,OUTPUT);
    pinMode(LCD_BL,OUTPUT);
    digitalWrite(LCD_BL, HIGH); 
    
    digitalWrite(LED_B, OFF);
    digitalWrite(LED_G, OFF);
    digitalWrite(LED_R, OFF);   
    digitalWrite(LED_R, ON);
    delay(200); 
    digitalWrite(LED_R, OFF);
    
    digitalWrite(LED_G, ON);
    delay(200); 
    digitalWrite(LED_G, OFF);
    
    digitalWrite(LED_B, ON);
    delay(200); 
    digitalWrite(LED_B, OFF);

    Serial.println("Teensy 4.0 ECU Reader LVGL library www.skpang.co.uk June 2020");
    
    if (!ts.begin(40)) { 
        Serial.println("Unable to start touchscreen.");
    } 
    else { 
        Serial.println("Touchscreen started."); 
    }
  
    display.begin();
    display.fillScreen(ILI9488_BLUE);
    display.setRotation(1); 
    lv_init();
    lv_disp_buf_init(&disp_buf, buf, NULL, LV_HOR_RES_MAX * 40);
  
    /*Initialize the display*/
    lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.buffer = &disp_buf;
    lv_disp_drv_register(&disp_drv);
  
    lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);             /*Descriptor of a input device driver*/
    indev_drv.type = LV_INDEV_TYPE_POINTER;    /*Touch pad is a pointer-like device*/
    indev_drv.read_cb = my_touchpad_read;      /*Set your driver function*/
    lv_indev_drv_register(&indev_drv);         /*Finally register the driver*/
    
    static lv_style_t style_screen;
    lv_style_init(&style_screen);
    lv_style_set_bg_color(&style_screen, LV_STATE_DEFAULT, LV_COLOR_BLACK);
    lv_obj_add_style(lv_scr_act(), LV_OBJ_PART_MAIN,&style_screen);
   
    draw_rpm_gauge();
    draw_mph();
    draw_temperature();
    
    ecu_reader.init(500000);
    Serial.println("tick.begin");
    tick.begin(lv_tick_handler, LVGL_TICK_PERIOD * 1000);  // blinkLED to run every 0.15 seconds
}

void loop() 
{
  int engine_data;

  lv_task_handler(); /* let the GUI do its work */
  delay(5);

  // Read engine RPM
  if(ecu_reader.request(ENGINE_RPM,&engine_data) == 1)   // Get engine rpm and display on LCD
  {
      if(engine_data != old_ecu.engine_rpm)
      {

          lv_gauge_set_value(gauge1, 0, engine_data);
          old_ecu.engine_rpm = engine_data;
              
      }
  }
     
  delay(5);

  // Read vechicle speed
  if(ecu_reader.request(VEHICLE_SPEED,&engine_data) == 1)
  {
    if(engine_data != old_ecu.vehicle_speed)
     {  
        sprintf(buff,"%d",engine_data);
        lv_label_set_text(label_mph,buff);       
        old_ecu.vehicle_speed = engine_data;
     }
  }

  delay(5);

  // Read coolant temperature
  if(ecu_reader.request(ENGINE_COOLANT_TEMP,&engine_data) == 1)
  {
     if(engine_data != old_ecu.coolant_temp)
     {
        sprintf(buff,"%d °C",engine_data);
        lv_label_set_text(label_coolant,buff); 
        old_ecu.coolant_temp = engine_data;
     }
  }
  
  delay(5);

}
