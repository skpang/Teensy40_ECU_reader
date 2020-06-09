#include "lvgl.h"

/*******************************************************************************
 * Size: 100 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#ifndef ARIAL_100
#define ARIAL_100 1
#endif

#if ARIAL_100

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+30 "0" */
    0x0, 0xff, 0xe2, 0x8a, 0x45, 0x67, 0x73, 0xfd,
    0xdc, 0xca, 0x74, 0x0, 0xff, 0xea, 0xb, 0x67,
    0x5b, 0xa9, 0x88, 0x80, 0x2, 0x23, 0x58, 0xbf,
    0xb5, 0x0, 0xff, 0xe7, 0x8c, 0xf4, 0x98, 0x7,
    0xff, 0x11, 0x2b, 0x9c, 0x3, 0xff, 0x98, 0xfc,
    0xc0, 0x1f, 0xfc, 0x91, 0x8e, 0x50, 0xf, 0xfe,
    0x40, 0xe4, 0x0, 0x7f, 0xf3, 0x46, 0xa8, 0x1,
    0xff, 0xc6, 0x3f, 0x30, 0xf, 0xfe, 0x82, 0xe0,
    0x80, 0x7f, 0xf0, 0xcf, 0x4, 0x3, 0xff, 0xa4,
    0x78, 0x20, 0x1f, 0xfc, 0x12, 0xd0, 0xf, 0xfe,
    0xa9, 0x60, 0x80, 0x7f, 0xf0, 0x3c, 0x40, 0x3f,
    0xfa, 0xc5, 0x60, 0x1f, 0xf4, 0x90, 0x7, 0xff,
    0x61, 0x58, 0x3, 0xf9, 0x18, 0x3, 0xff, 0xb5,
    0x22, 0x1, 0xfa, 0x40, 0x3f, 0xfb, 0x96, 0x1,
    0xf2, 0x90, 0x7, 0xff, 0x18, 0x4c, 0x80, 0x3f,
    0xf8, 0xea, 0x60, 0x1e, 0x80, 0xf, 0xfe, 0x2b,
    0xef, 0x66, 0xfe, 0x28, 0x7, 0xff, 0x16, 0x40,
    0x39, 0x8, 0x3, 0xff, 0x86, 0x39, 0x4, 0x1,
    0x8e, 0xa4, 0x3, 0xff, 0x88, 0xa2, 0x1, 0xb8,
    0x3, 0xff, 0x89, 0x46, 0x1, 0xf9, 0xa0, 0x3,
    0xff, 0x88, 0xc0, 0x19, 0x40, 0x3f, 0xf8, 0x6c,
    0x80, 0x1f, 0xe7, 0x30, 0xf, 0xfe, 0x1d, 0x80,
    0x48, 0x1, 0xff, 0xc4, 0xb0, 0xf, 0xfe, 0x4,
    0x80, 0x7f, 0xf0, 0xcc, 0x80, 0x18, 0x1, 0xff,
    0xc3, 0x32, 0x0, 0xff, 0xe0, 0x28, 0x80, 0x7f,
    0xf0, 0xd0, 0x0, 0x80, 0x1f, 0xfc, 0x34, 0x0,
    0xff, 0xe1, 0x20, 0x7, 0xff, 0xf, 0x0, 0x6,
    0x1, 0xff, 0xc3, 0xc0, 0xf, 0xfe, 0x16, 0x0,
    0x7f, 0xf0, 0xdc, 0x8, 0x3, 0xff, 0x88, 0xa0,
    0x1f, 0xfc, 0x25, 0x0, 0xff, 0xe1, 0x90, 0x38,
    0x7, 0xff, 0x10, 0x40, 0x3f, 0xf8, 0x44, 0x1,
    0xff, 0xc4, 0x22, 0x0, 0x7f, 0xf0, 0xc8, 0x3,
    0xff, 0x86, 0x20, 0x1f, 0xfc, 0x47, 0xf0, 0xf,
    0xfe, 0x18, 0x80, 0x7f, 0xf1, 0x4, 0x3, 0xff,
    0x86, 0x64, 0x1, 0xff, 0xc3, 0x70, 0xf, 0xfe,
    0x21, 0x80, 0x7f, 0xf0, 0xf8, 0x40, 0x3f, 0xf8,
    0x62, 0x1, 0xff, 0xc4, 0x10, 0xf, 0xfe, 0x18,
    0xb8, 0x7, 0xff, 0x90, 0xc0, 0x3f, 0xfc, 0xc2,
    0x1, 0xff, 0xe4, 0x10, 0xf, 0xff, 0xf8, 0x7,
    0xff, 0xfc, 0x3, 0xff, 0xfe, 0x1, 0xff, 0xff,
    0x0, 0xff, 0xff, 0x80, 0x7f, 0xff, 0xc0, 0x3f,
    0xff, 0xe0, 0x1f, 0xff, 0xf0, 0xf, 0xff, 0xf8,
    0x7, 0xff, 0x34, 0x40, 0x3f, 0xfc, 0x82, 0x1,
    0xff, 0xe6, 0x70, 0xf, 0xff, 0x21, 0x88, 0x7,
    0xff, 0xc, 0x40, 0x3f, 0xfa, 0x82, 0x40, 0x1f,
    0xfc, 0x37, 0x0, 0xff, 0xe2, 0x8, 0x7, 0xff,
    0xf, 0xbc, 0x3, 0xff, 0x86, 0x20, 0x1f, 0xfc,
    0x42, 0x0, 0xff, 0xe1, 0x99, 0x0, 0x7f, 0xf0,
    0xc8, 0x3, 0xff, 0xa8, 0xce, 0x1, 0xff, 0xc4,
    0x10, 0xf, 0xfe, 0x11, 0x80, 0x7f, 0xf1, 0xc,
    0x80, 0x3f, 0xf8, 0x8a, 0x1, 0xff, 0xc2, 0x50,
    0xf, 0xfe, 0x19, 0x0, 0xc, 0x3, 0xff, 0x87,
    0x80, 0x1f, 0xfc, 0x2f, 0x0, 0xff, 0xe1, 0xb8,
    0x1, 0x0, 0x3f, 0xf8, 0x68, 0x1, 0xff, 0xc2,
    0x70, 0xf, 0xfe, 0x1e, 0x0, 0x30, 0x3, 0xff,
    0x86, 0x64, 0x1, 0xff, 0xc0, 0x41, 0x0, 0xff,
    0xe1, 0xa0, 0x1, 0x4, 0x3, 0xff, 0x87, 0x0,
    0x1f, 0xfc, 0xf, 0x0, 0xff, 0xe1, 0x91, 0x0,
    0x27, 0x0, 0xff, 0xe1, 0xaa, 0x0, 0x7f, 0x99,
    0x0, 0x3f, 0xf8, 0x74, 0x1, 0xa8, 0x3, 0xff,
    0x89, 0x48, 0x1, 0xf9, 0x64, 0x3, 0xff, 0x88,
    0xa0, 0x18, 0xcc, 0x1, 0xff, 0xc3, 0x1b, 0x92,
    0x0, 0xc5, 0x34, 0x1, 0xff, 0xc4, 0x42, 0x0,
    0xe9, 0x0, 0xff, 0xe2, 0xb6, 0xf6, 0x63, 0xb5,
    0x80, 0x3f, 0xf8, 0xb0, 0x1, 0xe5, 0x30, 0xf,
    0xfe, 0x30, 0x99, 0x84, 0x3, 0xff, 0x8c, 0x86,
    0x1, 0xf7, 0x80, 0x7f, 0xf7, 0x24, 0x3, 0xf1,
    0xb0, 0x7, 0xff, 0x6a, 0x8, 0x3, 0xfa, 0x4c,
    0x3, 0xff, 0xb0, 0x8e, 0x1, 0xff, 0x70, 0x80,
    0x7f, 0xf5, 0x8a, 0x80, 0x3f, 0xf8, 0x5, 0x82,
    0x1, 0xff, 0xd4, 0x1c, 0x10, 0xf, 0xfe, 0x9,
    0x60, 0x80, 0x7f, 0xf4, 0x8b, 0x4, 0x3, 0xff,
    0x86, 0x5e, 0x60, 0x1f, 0xfd, 0x4, 0xd2, 0x0,
    0xff, 0xe2, 0x8e, 0x48, 0x7, 0xff, 0x34, 0x66,
    0xc0, 0x3f, 0xf9, 0x2d, 0xce, 0x1, 0xff, 0xca,
    0x7f, 0x60, 0xf, 0xfe, 0x58, 0xc7, 0x49, 0x80,
    0x7f, 0xf1, 0xe, 0x7e, 0x4, 0x3, 0xff, 0x9c,
    0x2d, 0x9d, 0x6e, 0xa6, 0x20, 0x18, 0x4d, 0x5e,
    0xff, 0x18, 0x3, 0xff, 0x86,

    /* U+31 "1" */
    0x0, 0xff, 0xe9, 0xa, 0xa0, 0x7, 0xff, 0x41,
    0x6f, 0xaa, 0x40, 0x3f, 0xf9, 0xab, 0x5f, 0x48,
    0x1, 0xff, 0xcd, 0x4a, 0xfa, 0x50, 0xf, 0xfe,
    0x69, 0xcf, 0x5a, 0x80, 0x7f, 0xf3, 0x4e, 0x3b,
    0x18, 0x40, 0x3f, 0xf9, 0x85, 0x1b, 0x8e, 0x20,
    0x1f, 0xfc, 0xc1, 0x7d, 0xd3, 0x90, 0x7, 0xff,
    0x30, 0x5b, 0x3a, 0x8, 0x3, 0xff, 0x98, 0x2d,
    0x7d, 0x26, 0x1, 0xff, 0xcd, 0x5b, 0xe9, 0x40,
    0xf, 0xfe, 0x74, 0xfd, 0x20, 0x7, 0xff, 0x45,
    0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0, 0xf,
    0xff, 0xf8, 0x7, 0xff, 0x1c, 0x9c, 0xc0, 0x3f,
    0xf9, 0xe9, 0x3d, 0xb0, 0xe0, 0x1f, 0xfc, 0xb2,
    0x6b, 0xfb, 0x61, 0x0, 0xff, 0xe5, 0xa4, 0x6e,
    0xa5, 0x0, 0x3f, 0xf9, 0x64, 0xb5, 0xf6, 0xe4,
    0x1, 0xff, 0xce, 0xca, 0x50, 0xf, 0xff, 0xf8,
    0x7, 0xff, 0xfc, 0x3, 0xff, 0xfe, 0x1, 0xff,
    0xff, 0x0, 0xff, 0xff, 0x80, 0x7f, 0xff, 0xc0,
    0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0, 0xf, 0xff,
    0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff, 0xfe, 0x1,
    0xff, 0xff, 0x0, 0xff, 0xff, 0x80, 0x7f, 0xff,
    0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0, 0xf,
    0xff, 0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff, 0xfe,
    0x1, 0xff, 0xff, 0x0, 0xff, 0xff, 0x80, 0x78,

    /* U+32 "2" */
    0x0, 0xff, 0xe3, 0x9b, 0x4e, 0x6f, 0x7f, 0xdd,
    0xb9, 0x50, 0xa4, 0x1, 0xff, 0xd5, 0x5a, 0xec,
    0x96, 0x32, 0x10, 0x8, 0x48, 0xd5, 0xeb, 0x7a,
    0x90, 0x3, 0xff, 0xa0, 0xfd, 0x4a, 0x20, 0x1f,
    0xfc, 0x41, 0x5b, 0xe7, 0x10, 0xf, 0xfe, 0x5b,
    0x74, 0x8, 0x7, 0xff, 0x28, 0x63, 0xd8, 0x3,
    0xff, 0x90, 0x59, 0x22, 0x1, 0xff, 0xce, 0x19,
    0xc1, 0x0, 0xff, 0xe2, 0xae, 0x98, 0x7, 0xff,
    0x48, 0xfc, 0xc0, 0x3f, 0xf8, 0x71, 0x40, 0x1f,
    0xfd, 0x51, 0xc3, 0x0, 0xff, 0xe0, 0xc3, 0x80,
    0x7f, 0xf6, 0x34, 0x80, 0x3f, 0xe7, 0x70, 0x7,
    0xff, 0x64, 0x7c, 0x3, 0xfc, 0x90, 0x1, 0xff,
    0xdb, 0x27, 0x0, 0xfc, 0x34, 0x1, 0xff, 0xdd,
    0x81, 0x0, 0xfa, 0xc4, 0x3, 0xff, 0xbd, 0x20,
    0x1e, 0x35, 0x0, 0xff, 0xe3, 0x89, 0x98, 0x40,
    0x3f, 0xf9, 0xc, 0x1, 0xe8, 0x0, 0xff, 0xe3,
    0x3e, 0xf6, 0x63, 0xb5, 0xc0, 0x3f, 0xf8, 0xc2,
    0x60, 0x18, 0xd0, 0x3, 0xff, 0x88, 0x39, 0x4,
    0x1, 0x8a, 0x34, 0x40, 0x3f, 0xf8, 0xa8, 0x1,
    0xa8, 0x3, 0xff, 0x8b, 0x86, 0x1, 0xf8, 0xb0,
    0x3, 0xff, 0x8b, 0x80, 0x19, 0xc0, 0x3f, 0xf8,
    0x92, 0x40, 0x1f, 0xe2, 0x70, 0xf, 0xfe, 0x22,
    0x80, 0x48, 0x20, 0x1f, 0xfc, 0x33, 0x60, 0xf,
    0xfe, 0x4, 0x80, 0x7f, 0xf1, 0x4, 0x2, 0x30,
    0xf, 0xfe, 0x24, 0x80, 0x7f, 0xf0, 0x44, 0xc0,
    0x3f, 0xf8, 0x82, 0x0, 0xc0, 0xf, 0xfe, 0x22,
    0x80, 0x7f, 0xf0, 0x94, 0x3, 0xff, 0x88, 0x60,
    0x5, 0x0, 0xff, 0xe1, 0x98, 0x7, 0xff, 0xf,
    0x80, 0x3f, 0xf8, 0x82, 0x0, 0x10, 0xf, 0xfe,
    0x1a, 0x80, 0x7f, 0xf0, 0xc4, 0x3, 0xff, 0x88,
    0x20, 0x1f, 0xfc, 0x6e, 0x0, 0xff, 0xea, 0x18,
    0x8, 0xff, 0xf1, 0x48, 0x3, 0xff, 0x87, 0xc0,
    0x1f, 0xfc, 0x41, 0x1, 0xee, 0xff, 0xe2, 0x28,
    0x7, 0xff, 0xc, 0xc0, 0x3f, 0xf8, 0x64, 0x1,
    0xff, 0xd7, 0x40, 0xf, 0xfe, 0x1a, 0x0, 0x7f,
    0xf5, 0x98, 0x3, 0xff, 0x89, 0x80, 0x1f, 0xfd,
    0x6b, 0x0, 0xff, 0xe2, 0x20, 0x7, 0xff, 0x55,
    0x48, 0x3, 0xff, 0x86, 0x82, 0x1, 0xff, 0xd5,
    0xb0, 0xf, 0xfe, 0x27, 0x80, 0x7f, 0xf5, 0x60,
    0x40, 0x3f, 0xf8, 0x64, 0x80, 0x1f, 0xfd, 0x43,
    0x70, 0xf, 0xfe, 0x24, 0x0, 0x7f, 0xf5, 0x78,
    0x3, 0xff, 0x88, 0x6a, 0x1, 0xff, 0xd4, 0xa2,
    0x0, 0xff, 0xe2, 0x78, 0x7, 0xff, 0x51, 0xd4,
    0x3, 0xff, 0x88, 0xe6, 0x1, 0xff, 0xd3, 0x48,
    0x0, 0xff, 0xe2, 0x14, 0x0, 0x7f, 0xf4, 0xca,
    0xc0, 0x3f, 0xf8, 0xbe, 0x1, 0xff, 0xd3, 0x1c,
    0x0, 0xff, 0xe2, 0xc9, 0x0, 0x7f, 0xf4, 0x87,
    0x4, 0x3, 0xff, 0x88, 0xcc, 0x0, 0xff, 0xe9,
    0xe, 0x10, 0x7, 0xff, 0x10, 0xe4, 0x3, 0xff,
    0xa7, 0xa4, 0x1, 0xff, 0xc4, 0x2d, 0x0, 0xff,
    0xe9, 0xe1, 0x80, 0x7f, 0xf1, 0x7, 0x4, 0x3,
    0xff, 0xa5, 0x66, 0x1, 0xff, 0xc4, 0x1c, 0x10,
    0xf, 0xfe, 0x95, 0xa0, 0x7, 0xff, 0x17, 0x48,
    0x3, 0xff, 0xa5, 0x48, 0x1, 0xff, 0xc5, 0xb3,
    0x0, 0xff, 0xe9, 0x52, 0x80, 0x7f, 0xf1, 0x69,
    0x0, 0x3f, 0xfa, 0x52, 0xa0, 0x1f, 0xfc, 0x5a,
    0x50, 0xf, 0xfe, 0x94, 0x30, 0x7, 0xff, 0x16,
    0x94, 0x3, 0xff, 0xa5, 0xe, 0x1, 0xff, 0xc5,
    0xa5, 0x0, 0xff, 0xe9, 0x3b, 0x80, 0x3f, 0xf8,
    0xb0, 0xa0, 0x1f, 0xfd, 0x26, 0x80, 0xf, 0xfe,
    0x2b, 0x38, 0x7, 0xff, 0x49, 0xa4, 0x3, 0xff,
    0x8a, 0x92, 0x1, 0xff, 0xd2, 0x59, 0x0, 0xff,
    0xe2, 0x9d, 0x80, 0x7f, 0xf4, 0x92, 0x80, 0x3f,
    0xf8, 0xa3, 0xa0, 0x1f, 0xfd, 0x24, 0xb0, 0xf,
    0xfe, 0x36, 0x8, 0x7, 0xff, 0x44, 0xec, 0x3,
    0xff, 0x8d, 0x64, 0x1, 0xff, 0xd1, 0x3c, 0x0,
    0xff, 0xe3, 0x4a, 0x0, 0x7f, 0xf4, 0x4b, 0x40,
    0x3f, 0xf8, 0xce, 0xc0, 0x1f, 0xfd, 0x12, 0xc1,
    0x0, 0xff, 0xe2, 0xac, 0x0, 0x7f, 0xf4, 0x4b,
    0x4, 0x3, 0xff, 0x8c, 0xd7, 0x7f, 0xfc, 0xf0,
    0x0, 0xf8, 0x80, 0x7f, 0xf1, 0xcd, 0x13, 0xff,
    0x9e, 0x0, 0xb2, 0x0, 0xff, 0xff, 0x80, 0x7f,
    0xff, 0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0,
    0xf, 0xff, 0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff,
    0xfe, 0x1, 0xff, 0xdf,

    /* U+33 "3" */
    0x0, 0xff, 0xe3, 0x1b, 0xcd, 0xef, 0x7f, 0xdd,
    0xcc, 0xb9, 0x63, 0x0, 0xff, 0xea, 0xb5, 0xfe,
    0x43, 0x21, 0x8, 0x4, 0x22, 0x34, 0x69, 0xcf,
    0xc7, 0x20, 0xf, 0xfe, 0x71, 0x57, 0xca, 0x0,
    0x7f, 0xf1, 0x8e, 0x37, 0x14, 0x3, 0xff, 0x94,
    0x55, 0xaa, 0x1, 0xff, 0xcc, 0x3a, 0xd4, 0x0,
    0xff, 0xe3, 0xb6, 0xa8, 0x7, 0xff, 0x40, 0xae,
    0x84, 0x3, 0xff, 0x89, 0x72, 0x1, 0xff, 0xd4,
    0x5f, 0x30, 0xf, 0xfe, 0x8, 0xea, 0x0, 0x7f,
    0xf5, 0x87, 0x10, 0x3, 0xfe, 0x1c, 0x20, 0xf,
    0xfe, 0xcd, 0x98, 0x7, 0xfa, 0x88, 0x3, 0xff,
    0xb7, 0xa4, 0x1, 0xfa, 0x10, 0x3, 0xff, 0xb8,
    0x3c, 0x1, 0xf1, 0x38, 0x7, 0xff, 0x78, 0xd8,
    0x3, 0xd2, 0x1, 0xff, 0xe0, 0x80, 0xe, 0x24,
    0x0, 0xff, 0xe4, 0x9, 0x98, 0x80, 0x3f, 0xf9,
    0x2, 0xc0, 0x1a, 0xc0, 0x3f, 0xf8, 0xc5, 0x3d,
    0xcc, 0xc6, 0xfd, 0x18, 0x7, 0xff, 0x1a, 0x80,
    0x33, 0x80, 0x7f, 0xf1, 0x5f, 0x58, 0x40, 0x39,
    0x72, 0x40, 0x3f, 0xf8, 0xa6, 0x1, 0x10, 0x80,
    0x7f, 0xf1, 0x26, 0x0, 0x3f, 0xcd, 0x20, 0x1f,
    0xfc, 0x54, 0x0, 0x38, 0x7, 0xff, 0x11, 0x58,
    0x3, 0xff, 0x80, 0xc8, 0x1, 0xff, 0xc4, 0x30,
    0x1, 0x0, 0x7f, 0xf1, 0x24, 0x3, 0xff, 0x85,
    0x0, 0x1f, 0xfc, 0x4d, 0x0, 0x78, 0x7, 0xff,
    0x10, 0xc0, 0x3f, 0xf8, 0x46, 0x20, 0x1f, 0xfc,
    0x31, 0x0, 0x5c, 0xcf, 0xff, 0xe, 0x80, 0x3f,
    0xf8, 0x8a, 0x1, 0xff, 0xc3, 0x70, 0x1, 0xb3,
    0x7f, 0xf0, 0xd4, 0x3, 0xff, 0x88, 0x20, 0x1f,
    0xff, 0x77, 0x0, 0xff, 0xeb, 0xb0, 0x7, 0xff,
    0xc, 0x40, 0x3f, 0xfa, 0xe4, 0x1, 0xff, 0xc3,
    0xd0, 0xf, 0xfe, 0xb1, 0x88, 0x7, 0xff, 0xd,
    0x0, 0x3f, 0xfa, 0xd4, 0x1, 0xff, 0xc3, 0x23,
    0x0, 0xff, 0xea, 0x9b, 0x0, 0x7f, 0xf0, 0xec,
    0x3, 0xff, 0xaa, 0x5a, 0x1, 0xff, 0xc3, 0x16,
    0x0, 0xff, 0xea, 0x3e, 0x88, 0x7, 0xff, 0xe,
    0xc0, 0x3f, 0xf9, 0x4, 0x89, 0xf2, 0xb3, 0xdf,
    0xc0, 0x7, 0xff, 0x11, 0x94, 0x3, 0xff, 0x91,
    0x77, 0xfa, 0xa6, 0x10, 0x3, 0xff, 0x8a, 0x72,
    0x1, 0xff, 0xe5, 0x3d, 0x0, 0xff, 0xf2, 0xa6,
    0x8, 0x7, 0xff, 0x92, 0x2c, 0x3, 0xff, 0xc8,
    0x9a, 0xe0, 0x1f, 0xfe, 0x49, 0xb2, 0x0, 0xff,
    0xf2, 0xcd, 0x18, 0x7, 0xff, 0x99, 0x72, 0x84,
    0x3, 0xff, 0xcc, 0xbc, 0xa0, 0x1f, 0xfe, 0x7a,
    0x70, 0xf, 0xff, 0x3c, 0x40, 0x3, 0xff, 0xce,
    0xec, 0x1, 0xff, 0xc8, 0x9f, 0xff, 0xdd, 0xb4,
    0xe2, 0x1, 0xff, 0xc5, 0x92, 0x0, 0xff, 0xe8,
    0x9, 0x2c, 0x74, 0x88, 0x7, 0xff, 0x13, 0x80,
    0x3f, 0xfa, 0xad, 0xe4, 0x1, 0xff, 0xc3, 0x35,
    0x0, 0xff, 0xea, 0x8f, 0x80, 0x7f, 0xf1, 0x38,
    0x3, 0xff, 0xac, 0x4e, 0x1, 0xff, 0xc3, 0x42,
    0x0, 0xff, 0xeb, 0x48, 0x7, 0xff, 0x11, 0x0,
    0x3f, 0xfa, 0xc2, 0x40, 0x1f, 0xfc, 0x3f, 0x0,
    0xff, 0xeb, 0xb8, 0x7, 0xff, 0xd, 0x40, 0x3f,
    0xfa, 0xe6, 0x1, 0xff, 0xc3, 0x10, 0xf, 0xfe,
    0xb8, 0x80, 0x7f, 0xf0, 0xcd, 0xee, 0xff, 0xf8,
    0x74, 0x1, 0xff, 0xc6, 0x10, 0xf, 0xfe, 0x26,
    0xa2, 0x7f, 0xf0, 0xd4, 0x3, 0xff, 0x8c, 0x60,
    0x1f, 0xfc, 0x42, 0x0, 0xff, 0xe2, 0x18, 0x7,
    0xff, 0x15, 0x40, 0x3f, 0xf8, 0x67, 0xe0, 0x1f,
    0xfc, 0x49, 0x0, 0xff, 0xe2, 0x28, 0x7, 0xff,
    0x11, 0xd0, 0x3, 0xff, 0x88, 0xa8, 0x1, 0xff,
    0xc3, 0xb0, 0xf, 0xfe, 0x21, 0x18, 0x7, 0xff,
    0x16, 0x88, 0x3, 0xff, 0x83, 0x62, 0x1, 0xff,
    0xc4, 0xb0, 0x40, 0xf, 0xfe, 0x20, 0xea, 0x80,
    0x7f, 0x8b, 0x10, 0x3, 0xff, 0x8a, 0x61, 0xc0,
    0x1f, 0xfc, 0x6a, 0xc5, 0x10, 0xe, 0x4a, 0xd3,
    0x0, 0xff, 0xe2, 0xb0, 0x1, 0x44, 0x3, 0xff,
    0x8c, 0x75, 0xdb, 0x98, 0xdf, 0xb5, 0x0, 0xff,
    0xe3, 0xd8, 0x5, 0x20, 0x1f, 0xfc, 0x92, 0x33,
    0x10, 0x7, 0xff, 0x25, 0x48, 0x2, 0x72, 0x0,
    0xff, 0xf0, 0xd8, 0x7, 0x70, 0x7, 0xff, 0x82,
    0x84, 0x3, 0x8e, 0x0, 0x3f, 0xfb, 0xcc, 0xa0,
    0x1f, 0x3b, 0x0, 0x7f, 0xf7, 0x16, 0x40, 0x3f,
    0xa5, 0xc0, 0x3f, 0xfb, 0x4f, 0x40, 0x1f, 0xf4,
    0x48, 0x7, 0xff, 0x62, 0x60, 0x3, 0xff, 0x82,
    0xda, 0x60, 0x1f, 0xfd, 0x43, 0xd6, 0x0, 0xff,
    0xe1, 0x96, 0x51, 0x0, 0x7f, 0xf4, 0xa, 0xb0,
    0x80, 0x3f, 0xf8, 0xcb, 0xb4, 0x60, 0x1f, 0xfc,
    0xc3, 0xad, 0x50, 0xf, 0xfe, 0x52, 0xe6, 0xb9,
    0x80, 0x7f, 0xf1, 0x92, 0x3b, 0x14, 0x3, 0xff,
    0x9c, 0x51, 0x9f, 0x70, 0xc6, 0x42, 0x1, 0x84,
    0xd1, 0xa7, 0x3e, 0xdc, 0x40, 0x3f, 0xf8, 0x40,

    /* U+34 "4" */
    0x0, 0xff, 0xe8, 0x92, 0x27, 0xff, 0xc, 0xc0,
    0x3f, 0xfb, 0x5, 0xb7, 0x7f, 0xfc, 0x3f, 0x0,
    0xff, 0xec, 0x48, 0x7, 0xff, 0xa1, 0x50, 0x3,
    0xff, 0xce, 0x36, 0x1, 0xff, 0xe8, 0x81, 0x0,
    0xff, 0xf3, 0x9b, 0x0, 0x7f, 0xfa, 0x38, 0x3,
    0xff, 0xd0, 0xe4, 0x1, 0xff, 0xe7, 0x18, 0x0,
    0xff, 0xf4, 0x50, 0x7, 0xff, 0xa1, 0x50, 0x3,
    0xff, 0xd1, 0x60, 0x1f, 0xfe, 0x89, 0x10, 0xf,
    0xff, 0x39, 0xb0, 0x7, 0xff, 0xa3, 0xc0, 0x3f,
    0xfd, 0xc, 0x60, 0x1f, 0xfe, 0x71, 0x90, 0xf,
    0xff, 0x45, 0x80, 0x7f, 0xfa, 0x11, 0x40, 0x3f,
    0xfd, 0x12, 0x1, 0xff, 0xe8, 0x82, 0x0, 0xff,
    0xf3, 0x93, 0x80, 0x7f, 0xf0, 0xc, 0x3, 0xff,
    0xb7, 0xc0, 0x1f, 0xfc, 0x8, 0x60, 0xf, 0xfe,
    0xd3, 0x18, 0x7, 0xfc, 0x4e, 0x1, 0xff, 0xda,
    0x18, 0x0, 0xff, 0xe0, 0x40, 0x7, 0xff, 0x6e,
    0xc4, 0x3, 0xfe, 0x45, 0x0, 0xff, 0xed, 0x22,
    0x80, 0x7f, 0xf0, 0x24, 0x3, 0xff, 0xb7, 0x20,
    0x1f, 0xfc, 0x6, 0x20, 0xf, 0xfe, 0xd3, 0x90,
    0x7, 0xfc, 0x30, 0x1, 0xff, 0xda, 0x28, 0x0,
    0xff, 0xe0, 0x40, 0x80, 0x7f, 0xf6, 0xa4, 0x3,
    0xff, 0x80, 0x4c, 0x1, 0xff, 0xda, 0x54, 0x0,
    0xff, 0xe0, 0x48, 0x7, 0xff, 0x6e, 0xc0, 0x3f,
    0xf8, 0xa, 0x80, 0x1f, 0xfd, 0xa9, 0x10, 0xf,
    0xfe, 0x5, 0x80, 0x7f, 0xf6, 0x8d, 0x80, 0x3f,
    0xf8, 0xe, 0x20, 0x1f, 0xfd, 0xaf, 0x0, 0xff,
    0xe0, 0xc, 0x0, 0x7f, 0xf6, 0x9c, 0xc0, 0x3f,
    0xf8, 0x16, 0x1, 0xff, 0xda, 0x18, 0x0, 0xff,
    0xe0, 0x1a, 0x80, 0x7f, 0xf6, 0xa8, 0x3, 0xff,
    0x83, 0xe0, 0x1f, 0xfd, 0xa4, 0x40, 0x7, 0xff,
    0x1, 0x8c, 0x3, 0xff, 0xb5, 0x40, 0x1f, 0xfc,
    0x1, 0x80, 0xf, 0xfe, 0xd4, 0x8, 0x7, 0xff,
    0x2, 0x4, 0x3, 0xff, 0xb2, 0x4e, 0x1, 0xff,
    0xc0, 0x26, 0x0, 0xff, 0xed, 0x70, 0x7, 0xff,
    0x4, 0xbf, 0xff, 0xf8, 0xa, 0x1, 0xff, 0xc3,
    0x3f, 0xff, 0x80, 0xc, 0x60, 0x1f, 0xfe, 0x88,
    0x0, 0xff, 0xf4, 0x88, 0x7, 0xff, 0xfc, 0x3,
    0xff, 0xa8, 0x40, 0x1f, 0xfe, 0x91, 0x0, 0xff,
    0xf4, 0xb0, 0x7, 0xff, 0xa4, 0x80, 0x3f, 0xfd,
    0x3e, 0x1, 0xff, 0xe9, 0x20, 0xf, 0xff, 0x48,
    0x80, 0x7f, 0xfa, 0x59, 0x13, 0xff, 0x9e, 0x20,
    0x1f, 0xfc, 0x44, 0x4f, 0x80, 0x5, 0x77, 0xff,
    0xcf, 0x40, 0xf, 0xfe, 0x19, 0xdd, 0xfc, 0x1,
    0xff, 0xff, 0x0, 0xff, 0xff, 0x80, 0x7f, 0xff,
    0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0, 0xf,
    0xff, 0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff, 0xfe,
    0x1, 0xff, 0xff, 0x0, 0xff, 0xff, 0x80, 0x7c,

    /* U+35 "5" */
    0x0, 0xf3, 0x7f, 0xff, 0xf7, 0x4c, 0x3, 0xf7,
    0x0, 0x7f, 0xf9, 0x88, 0x3, 0xff, 0xcc, 0xc0,
    0x1f, 0xfe, 0x61, 0x0, 0xff, 0xf3, 0x10, 0x7,
    0xff, 0x94, 0x40, 0x3f, 0xfc, 0xc4, 0x1, 0xff,
    0xe6, 0x60, 0xf, 0xff, 0x31, 0x0, 0x7f, 0xf9,
    0xb8, 0x3, 0xff, 0xcc, 0x40, 0x1f, 0xfe, 0x66,
    0x0, 0xff, 0xe1, 0x11, 0x7f, 0xf4, 0x4, 0x3,
    0xe2, 0x0, 0xff, 0xe1, 0x6e, 0xff, 0xf4, 0x8,
    0x3, 0xc2, 0x1, 0xff, 0xc2, 0x20, 0xf, 0xfe,
    0xb9, 0x0, 0x7f, 0xf0, 0x98, 0x3, 0xff, 0xae,
    0xc0, 0x1f, 0xfc, 0x22, 0x0, 0xff, 0xeb, 0x98,
    0x7, 0xff, 0x8, 0x40, 0x3f, 0xfa, 0xfc, 0x1,
    0xff, 0xc2, 0xe0, 0xf, 0xfe, 0xb9, 0x0, 0x7f,
    0xf0, 0x88, 0x3, 0xff, 0xae, 0xc0, 0x1f, 0xfc,
    0x26, 0x0, 0xff, 0xeb, 0x90, 0x7, 0xff, 0x8,
    0x80, 0x3f, 0xfa, 0xe2, 0x1, 0xff, 0xc1, 0x10,
    0xf, 0xfe, 0xb9, 0x0, 0x7f, 0xf0, 0x88, 0x3,
    0xff, 0xae, 0xc0, 0x1f, 0xfc, 0x26, 0x0, 0x85,
    0x22, 0xf7, 0xbf, 0xdd, 0xb7, 0x2c, 0x60, 0x1f,
    0xfc, 0x62, 0x0, 0xff, 0xe1, 0x18, 0x35, 0xf5,
    0xba, 0x10, 0x80, 0x4, 0x91, 0xa7, 0x3a, 0x4c,
    0x3, 0xff, 0x87, 0xc0, 0x1f, 0xfc, 0x25, 0xe9,
    0x40, 0xf, 0xfe, 0x10, 0xb6, 0x59, 0x80, 0x7f,
    0xf0, 0x48, 0x3, 0xff, 0x84, 0x62, 0x1, 0xff,
    0xc7, 0x4c, 0x90, 0xf, 0xfe, 0x3, 0x0, 0x7f,
    0xf6, 0x5b, 0x48, 0x3, 0xfc, 0x40, 0x1f, 0xfd,
    0xa2, 0xc2, 0x0, 0xfe, 0x10, 0xf, 0xfe, 0xd8,
    0xe1, 0x0, 0x7c, 0x20, 0x1f, 0xfd, 0xd1, 0xf0,
    0xf, 0x88, 0x3, 0xff, 0xbc, 0x52, 0x1, 0xe6,
    0x0, 0xff, 0xef, 0xb1, 0x80, 0x71, 0x0, 0x7f,
    0xf8, 0x3c, 0x3, 0xb8, 0x3, 0xff, 0x8a, 0x2a,
    0xf1, 0x7, 0x51, 0x0, 0xff, 0xe3, 0x9a, 0x0,
    0x68, 0xa6, 0x20, 0xf, 0xfe, 0x3, 0x6f, 0x54,
    0x3b, 0xa2, 0xbb, 0x54, 0x3, 0xff, 0x8d, 0xc0,
    0x18, 0x56, 0x77, 0xad, 0xcc, 0x3, 0xc3, 0x92,
    0x40, 0x1f, 0x8a, 0xac, 0x3, 0xff, 0x8a, 0xa2,
    0x1, 0xf0, 0xa4, 0x67, 0xe4, 0x20, 0x8b, 0xc,
    0x3, 0xff, 0x80, 0x96, 0x1, 0xff, 0xc5, 0x40,
    0xf, 0xfe, 0x1, 0xbd, 0xf7, 0x8, 0x3, 0xff,
    0x84, 0x8e, 0x1, 0xff, 0xc4, 0xf0, 0xf, 0xfe,
    0xac, 0x80, 0x7f, 0xf1, 0x1c, 0x3, 0xff, 0xaa,
    0x2c, 0x1, 0xff, 0xc3, 0x20, 0xf, 0xfe, 0xb6,
    0x0, 0x7f, 0xf1, 0xc, 0x3, 0xff, 0xaa, 0xe0,
    0x1f, 0xfc, 0x46, 0x0, 0xff, 0xea, 0x90, 0x7,
    0xff, 0x10, 0x80, 0x3f, 0xfa, 0xc2, 0x1, 0xff,
    0xc3, 0xf0, 0xf, 0xfe, 0xb1, 0x80, 0x7f, 0xf9,
    0x8c, 0x3, 0xff, 0x86, 0x20, 0x1f, 0xff, 0xf0,
    0xf, 0xf0, 0x80, 0x7f, 0xf0, 0xc4, 0x11, 0x3f,
    0xf8, 0x84, 0x1, 0xff, 0xc3, 0x10, 0xf, 0xfe,
    0x27, 0x85, 0xdf, 0xff, 0x12, 0x80, 0x3f, 0xf8,
    0x64, 0x1, 0xff, 0xc4, 0x10, 0xf, 0xfe, 0x29,
    0x80, 0x7f, 0xf0, 0xd4, 0x3, 0xff, 0x88, 0xa0,
    0x40, 0x1f, 0xfc, 0x34, 0x0, 0xff, 0xe1, 0xe8,
    0x7, 0xff, 0x10, 0xc1, 0xc0, 0x3f, 0xf8, 0x8a,
    0x1, 0xff, 0xc1, 0x14, 0x0, 0xff, 0xe1, 0x90,
    0x3, 0x40, 0x3f, 0xf8, 0x90, 0x1, 0xff, 0xc1,
    0x80, 0xf, 0xfe, 0x22, 0x80, 0x10, 0x3, 0xff,
    0x88, 0x52, 0x1, 0xff, 0x1b, 0x0, 0x7f, 0xf1,
    0x2c, 0x0, 0x64, 0x1, 0xff, 0xc4, 0x69, 0x0,
    0xfe, 0x3d, 0x0, 0xff, 0xe2, 0x9, 0x80, 0x54,
    0x1, 0xff, 0xc5, 0x6d, 0x51, 0x0, 0xc5, 0x38,
    0x20, 0x1f, 0xfc, 0x49, 0x0, 0xcc, 0x20, 0x1f,
    0xfc, 0x52, 0xae, 0xdc, 0xc7, 0x6b, 0x0, 0x7f,
    0xf1, 0x9c, 0x3, 0xc, 0x80, 0x7f, 0xf2, 0x8,
    0xcc, 0x20, 0x1f, 0xfc, 0x77, 0x0, 0xf3, 0x90,
    0x7, 0xff, 0x74, 0xa0, 0x3, 0xef, 0x0, 0xff,
    0xee, 0xf0, 0x7, 0xe2, 0xb0, 0xf, 0xfe, 0xdc,
    0x18, 0x7, 0xf2, 0x50, 0x7, 0xff, 0x65, 0x5c,
    0x3, 0xfe, 0x5b, 0x0, 0xff, 0xeb, 0xad, 0x0,
    0x7f, 0xf0, 0x53, 0x8, 0x3, 0xff, 0xa8, 0xf4,
    0x1, 0xff, 0xc3, 0x3d, 0x60, 0xf, 0xfe, 0x88,
    0xcc, 0x0, 0x7f, 0xf1, 0xa7, 0x50, 0x3, 0xff,
    0x9c, 0xbe, 0xc0, 0x1f, 0xfc, 0x82, 0xbc, 0x50,
    0xf, 0xfe, 0x52, 0xe5, 0x8, 0x7, 0xff, 0x2c,
    0xeb, 0xa0, 0xc0, 0x3f, 0xf8, 0x87, 0x1b, 0x46,
    0x1, 0xff, 0xcf, 0x17, 0xcf, 0xb8, 0x53, 0x21,
    0x0, 0x9, 0x1a, 0xc5, 0x76, 0x39, 0x0, 0x7f,
    0xf0, 0x80,

    /* U+36 "6" */
    0x0, 0xff, 0xe8, 0x9b, 0x45, 0xe7, 0x73, 0xff,
    0x8, 0x7, 0xff, 0x60, 0x9f, 0x3f, 0x25, 0xd0,
    0xc4, 0x40, 0x1f, 0xfd, 0xa1, 0x7d, 0xd4, 0x18,
    0x7, 0xff, 0x80, 0xeb, 0xa0, 0x80, 0x3f, 0xfc,
    0x25, 0x78, 0xa0, 0x1f, 0xfe, 0x38, 0xd4, 0x0,
    0xff, 0xf1, 0x9e, 0xb8, 0x7, 0xff, 0x92, 0x30,
    0x80, 0x3f, 0xfc, 0x96, 0xe0, 0x1f, 0xfe, 0x41,
    0xd4, 0x0, 0xff, 0xf2, 0x17, 0x90, 0x7, 0xff,
    0x90, 0x70, 0x40, 0x3f, 0xfc, 0xb8, 0x20, 0x1f,
    0xfe, 0x5b, 0x20, 0xf, 0xfe, 0x48, 0xa3, 0xd6,
    0x77, 0xfc, 0x20, 0x1f, 0xfc, 0x68, 0x40, 0xf,
    0xfe, 0x38, 0xb6, 0x75, 0xc2, 0x98, 0x80, 0x7f,
    0xf2, 0x4d, 0xc0, 0x3f, 0xf8, 0xc3, 0x3d, 0x26,
    0x1, 0xff, 0xcf, 0xe0, 0xf, 0xfe, 0x34, 0x73,
    0x0, 0x7f, 0xf4, 0x5c, 0x80, 0x3f, 0xf8, 0x85,
    0xae, 0x1, 0xff, 0xd2, 0x28, 0x0, 0xff, 0xe2,
    0x26, 0x10, 0x7, 0xff, 0x4e, 0x0, 0x3f, 0xf8,
    0x89, 0x62, 0x1, 0xff, 0xd3, 0x25, 0x0, 0xff,
    0xe1, 0x95, 0x80, 0x7f, 0xf5, 0x6c, 0x3, 0xff,
    0x89, 0xe0, 0x1f, 0xfd, 0x66, 0x0, 0xff, 0xe1,
    0xc1, 0x0, 0x7f, 0xf5, 0x58, 0x3, 0xff, 0x86,
    0x2e, 0x1, 0xff, 0xd6, 0xd0, 0xf, 0xfe, 0x1c,
    0x0, 0x70, 0xac, 0xde, 0xff, 0xdd, 0xb7, 0x8,
    0x1, 0xff, 0xc4, 0x14, 0x0, 0xff, 0xe1, 0xb0,
    0x4, 0x97, 0xd4, 0xc8, 0x40, 0x10, 0x92, 0x3d,
    0xfc, 0x90, 0x7, 0xff, 0x5, 0x0, 0x3f, 0xf8,
    0x6a, 0x0, 0x4d, 0xb4, 0x0, 0xff, 0xe1, 0x36,
    0xd0, 0x80, 0x7f, 0xde, 0x1, 0xff, 0xc3, 0xf0,
    0xab, 0x20, 0xf, 0xfe, 0x32, 0xfa, 0x80, 0x7f,
    0x90, 0x3, 0xff, 0x86, 0x3a, 0xa0, 0x1f, 0xfc,
    0x91, 0xa7, 0x0, 0xfc, 0x22, 0x0, 0xff, 0xe1,
    0xd1, 0x0, 0x7f, 0xf3, 0x22, 0x0, 0x1f, 0x28,
    0x7, 0xff, 0x10, 0x40, 0x3f, 0xf9, 0xce, 0xc0,
    0x1e, 0x20, 0xf, 0xff, 0x4, 0x98, 0x7, 0x78,
    0x7, 0xff, 0x87, 0x80, 0x38, 0x80, 0x3f, 0xfc,
    0x25, 0x0, 0x19, 0xc0, 0x3f, 0xfc, 0x4e, 0x20,
    0x10, 0x80, 0x7f, 0xf8, 0xe0, 0x2, 0x30, 0xf,
    0xfe, 0x51, 0xa2, 0x98, 0x80, 0x7f, 0xf2, 0x18,
    0x3, 0xff, 0x96, 0x97, 0xf9, 0x75, 0x9d, 0x68,
    0x1, 0xff, 0xc7, 0x60, 0x0, 0x80, 0x7f, 0xf1,
    0xa6, 0xd0, 0x3, 0xc9, 0x72, 0x1, 0xff, 0xc6,
    0xd0, 0xf, 0xfe, 0x46, 0x30, 0x7, 0xf9, 0xa8,
    0x3, 0xff, 0x8a, 0x80, 0x1f, 0xfc, 0x7a, 0x30,
    0xf, 0xfe, 0x2, 0xb0, 0x7, 0xff, 0x15, 0x0,
    0x3f, 0xf8, 0xa8, 0xa0, 0x1f, 0xfc, 0x29, 0x10,
    0xf, 0xfe, 0x21, 0x80, 0x7f, 0xf1, 0x4c, 0x3,
    0xff, 0x89, 0x20, 0x1f, 0xfc, 0x4d, 0x0, 0xff,
    0xeb, 0x30, 0x7, 0xff, 0x11, 0x80, 0x3f, 0xfa,
    0xc2, 0x40, 0x1f, 0xfc, 0x32, 0x1, 0x0, 0xff,
    0xea, 0xb8, 0x7, 0xff, 0xc, 0x40, 0xc0, 0x3f,
    0xfa, 0xa4, 0x1, 0xff, 0xc5, 0x10, 0xf, 0xfe,
    0xaf, 0x80, 0x7f, 0xf1, 0x5, 0xc0, 0x3f, 0xf8,
    0x62, 0x1, 0xff, 0xc5, 0x10, 0xf, 0xfe, 0x29,
    0x0, 0x7f, 0xf0, 0xcc, 0x3, 0xff, 0x8a, 0x20,
    0x1f, 0xfc, 0x41, 0xe0, 0xf, 0xfe, 0x18, 0x80,
    0x7f, 0xf1, 0x7c, 0x3, 0xff, 0x8a, 0x60, 0x1f,
    0xfc, 0x35, 0x0, 0xff, 0xe2, 0x90, 0x7, 0xff,
    0xc, 0x41, 0x40, 0x3f, 0xf8, 0x62, 0x20, 0xf,
    0xfe, 0x22, 0x0, 0x7f, 0xf0, 0xc8, 0x4, 0x80,
    0x3f, 0xf8, 0x68, 0x1, 0xff, 0xc3, 0x21, 0x0,
    0xff, 0xe1, 0xa8, 0x1, 0x40, 0x3f, 0xf8, 0x7e,
    0x1, 0xff, 0xc3, 0xa0, 0xf, 0xfe, 0x27, 0x80,
    0x30, 0x3, 0xff, 0x86, 0xa2, 0x1, 0xff, 0xc1,
    0x17, 0x0, 0xff, 0xe2, 0x20, 0x1, 0x4, 0x3,
    0xff, 0x87, 0x60, 0x1f, 0xfc, 0x1b, 0x0, 0xff,
    0xe2, 0x11, 0x0, 0x26, 0x0, 0xff, 0xe1, 0xab,
    0x0, 0x7f, 0xce, 0xa0, 0x1f, 0xfc, 0x4a, 0x0,
    0xd2, 0x1, 0xff, 0xc4, 0x96, 0x0, 0xfe, 0x78,
    0x0, 0xff, 0xe2, 0xb0, 0x6, 0x15, 0x0, 0xff,
    0xe2, 0x4e, 0x28, 0x7, 0x25, 0xc0, 0x7, 0xff,
    0x15, 0x84, 0x3, 0xac, 0x3, 0xff, 0x8a, 0x75,
    0xfd, 0x9b, 0xf6, 0x80, 0x1f, 0xfc, 0x6b, 0x0,
    0xf0, 0xc0, 0x7, 0xff, 0x1c, 0x4c, 0x80, 0x3f,
    0xf9, 0xe, 0x40, 0x1f, 0x39, 0x0, 0x7f, 0xf7,
    0xa, 0x0, 0x3f, 0xbc, 0x40, 0x3f, 0xfb, 0x7c,
    0x1, 0xfe, 0x2a, 0x0, 0xff, 0xed, 0x49, 0x80,
    0x7f, 0xc9, 0x20, 0x1f, 0xfd, 0x87, 0x60, 0xf,
    0xfe, 0xb, 0x50, 0x7, 0xff, 0x5a, 0x20, 0x1,
    0xff, 0xc3, 0x5b, 0x10, 0xf, 0xfe, 0x9d, 0x38,
    0x7, 0xff, 0x15, 0x3d, 0x0, 0x3f, 0xfa, 0x7,
    0x8a, 0x1, 0xff, 0xc7, 0x1b, 0x91, 0x0, 0xff,
    0xe6, 0xc6, 0x18, 0x7, 0xff, 0x29, 0xba, 0x44,
    0x3, 0xff, 0x90, 0x2f, 0xce, 0x1, 0xff, 0xce,
    0x6e, 0xb6, 0x10, 0xf, 0xfe, 0x1a, 0x4f, 0x40,
    0x80, 0x7f, 0xf4, 0x52, 0x7b, 0x25, 0x8c, 0x84,
    0x0, 0x24, 0x6b, 0x17, 0xf6, 0xc0, 0x1f, 0xfc,
    0x40,

    /* U+37 "7" */
    0x5b, 0xbf, 0xff, 0x34, 0x12, 0x27, 0xff, 0x9c,
    0x3, 0xff, 0xfe, 0x1, 0xff, 0xff, 0x0, 0xff,
    0xff, 0x80, 0x7f, 0xff, 0xc0, 0x3f, 0xff, 0xe0,
    0x1f, 0xfd, 0xc5, 0x0, 0xff, 0xf3, 0xd8, 0x7,
    0xff, 0x99, 0x8, 0x3, 0xff, 0xcd, 0xe0, 0xff,
    0xff, 0xfd, 0x53, 0x0, 0xff, 0xe1, 0x12, 0x0,
    0x7f, 0xf5, 0x90, 0xc0, 0x3f, 0xf8, 0x54, 0x1,
    0xff, 0xd7, 0xf0, 0xf, 0xfe, 0x1b, 0x0, 0x7f,
    0xf5, 0x89, 0x0, 0x3f, 0xf8, 0x4c, 0x20, 0x1f,
    0xfd, 0x68, 0x0, 0xff, 0xe1, 0xd8, 0x7, 0xff,
    0x58, 0x54, 0x3, 0xff, 0x84, 0x64, 0x1, 0xff,
    0xd6, 0x90, 0xf, 0xfe, 0x1c, 0x80, 0x7f, 0xf5,
    0xdc, 0x3, 0xff, 0x84, 0x2a, 0x1, 0xff, 0xd6,
    0x70, 0xf, 0xfe, 0x1c, 0x80, 0x7f, 0xf5, 0xe4,
    0x3, 0xff, 0x86, 0xc0, 0x1f, 0xfd, 0x65, 0x10,
    0xf, 0xfe, 0x12, 0x88, 0x7, 0xff, 0x5a, 0x40,
    0x3f, 0xf8, 0x72, 0x1, 0xff, 0xd6, 0x43, 0x0,
    0xff, 0xe1, 0x19, 0x80, 0x3f, 0xfa, 0xde, 0x1,
    0xff, 0xc3, 0x90, 0xf, 0xfe, 0xb1, 0x20, 0x7,
    0xff, 0x8, 0x54, 0x3, 0xff, 0xad, 0x0, 0x1f,
    0xfc, 0x39, 0x0, 0xff, 0xeb, 0xa, 0x80, 0x7f,
    0xf0, 0xd8, 0x3, 0xff, 0xad, 0x20, 0x1f, 0xfc,
    0x35, 0x10, 0xf, 0xfe, 0xb3, 0x80, 0x7f, 0xf0,
    0xe4, 0x3, 0xff, 0xac, 0xe0, 0x1f, 0xfc, 0x33,
    0x30, 0x7, 0xff, 0x5a, 0x40, 0x3f, 0xf8, 0x72,
    0x1, 0xff, 0xd6, 0x51, 0x0, 0xff, 0xe1, 0xa,
    0x80, 0x7f, 0xf5, 0xa4, 0x3, 0xff, 0x86, 0xc0,
    0x1f, 0xfd, 0x64, 0x30, 0xf, 0xfe, 0x1c, 0x80,
    0x7f, 0xf5, 0xbc, 0x3, 0xff, 0x86, 0xa2, 0x1,
    0xff, 0xd5, 0x24, 0x0, 0xff, 0xe1, 0xc8, 0x7,
    0xff, 0x5a, 0x0, 0x3f, 0xf8, 0x64, 0x60, 0x1f,
    0xfd, 0x51, 0x50, 0xf, 0xfe, 0x1d, 0x80, 0x7f,
    0xf5, 0xa4, 0x3, 0xff, 0x86, 0x2c, 0x1, 0xff,
    0xd6, 0x70, 0xf, 0xfe, 0x1b, 0x0, 0x7f, 0xf5,
    0x9c, 0x3, 0xff, 0x89, 0x40, 0x1f, 0xfd, 0x69,
    0x0, 0xff, 0xe1, 0xa1, 0x0, 0x7f, 0xf5, 0x54,
    0x40, 0x3f, 0xf8, 0x7e, 0x1, 0xff, 0xd6, 0x80,
    0xf, 0xfe, 0x19, 0x20, 0x7, 0xff, 0x55, 0x8,
    0x3, 0xff, 0x87, 0x60, 0x1f, 0xfd, 0x6f, 0x0,
    0xff, 0xe2, 0x30, 0x7, 0xff, 0x54, 0x90, 0x3,
    0xff, 0x86, 0xc0, 0x1f, 0xfd, 0x68, 0x0, 0xff,
    0xe2, 0x58, 0x7, 0xff, 0x54, 0x54, 0x3, 0xff,
    0x86, 0x84, 0x1, 0xff, 0xd5, 0x90, 0xf, 0xfe,
    0x27, 0x80, 0x7f, 0xf5, 0x9c, 0x3, 0xff, 0x86,
    0x48, 0x1, 0xff, 0xd5, 0x70, 0xf, 0xfe, 0x25,
    0x80, 0x7f, 0xf5, 0xa4, 0x3, 0xff, 0x88, 0xc0,
    0x1f, 0xfd, 0x55, 0x10, 0xf, 0xfe, 0x1b, 0x0,
    0x7f, 0xf5, 0xa0, 0x3, 0xff, 0x89, 0x60, 0x1f,
    0xfd, 0x54, 0x20, 0xf, 0xfe, 0x1a, 0x10, 0x7,
    0xff, 0x57, 0xc0, 0x3f, 0xf8, 0x9e, 0x1, 0xff,
    0xd5, 0x24, 0x0, 0xff, 0xe1, 0x92, 0x0, 0x7f,
    0xf5, 0x60, 0x3, 0xff, 0x89, 0x40, 0x1f, 0xfd,
    0x51, 0x50, 0xf, 0xfe, 0x23, 0x0, 0x7f, 0xf5,
    0x64, 0x3, 0xff, 0x88, 0xc2, 0x1, 0xff, 0xd5,
    0x70, 0xf, 0xfe, 0x25, 0x80, 0x7f, 0xf5, 0x5c,
    0x3, 0xff, 0x88, 0x64, 0x1, 0xff, 0xd5, 0x90,
    0xf, 0xfe, 0x24, 0x80, 0x7f, 0xf5, 0x54, 0x40,
    0x3f, 0xf8, 0x62, 0xa0, 0x1f, 0xfd, 0x58, 0x0,
    0xff, 0xe2, 0x48, 0x7, 0xff, 0x55, 0x8, 0x3,
    0xff, 0x88, 0xc0, 0x1f, 0xfd, 0x5f, 0x0, 0xff,
    0xe2, 0x28, 0x80, 0x7f, 0xf5, 0x71, 0xdf, 0xff,
    0x89, 0x0, 0x1f, 0xfc, 0xe0,

    /* U+38 "8" */
    0x0, 0xff, 0xe2, 0x9b, 0x4d, 0xef, 0x7f, 0xee,
    0xdb, 0x96, 0x30, 0xf, 0xfe, 0x9a, 0xdf, 0xe4,
    0xb2, 0x10, 0x80, 0x61, 0x24, 0x69, 0xce, 0xa5,
    0x0, 0xff, 0xe6, 0x8c, 0x7d, 0x20, 0x7, 0xff,
    0x14, 0x56, 0xb9, 0xc4, 0x3, 0xff, 0x92, 0xfc,
    0xe0, 0x1f, 0xfc, 0xb1, 0x8f, 0x60, 0xf, 0xfe,
    0x31, 0x6c, 0x0, 0x7f, 0xf3, 0xc6, 0x70, 0x40,
    0x3f, 0xf8, 0x69, 0xa4, 0x1, 0xff, 0xd2, 0x3f,
    0x30, 0xf, 0xfe, 0xa, 0xd8, 0x7, 0xff, 0x54,
    0x70, 0xc0, 0x3f, 0xe3, 0xa0, 0xf, 0xfe, 0xc6,
    0x90, 0x7, 0xf0, 0xe8, 0x7, 0xff, 0x64, 0x7c,
    0x3, 0xfa, 0xc4, 0x3, 0xff, 0xb4, 0x50, 0x1,
    0xf1, 0xa8, 0x7, 0xff, 0x71, 0xc8, 0x3, 0xd0,
    0x1, 0xff, 0xde, 0xb0, 0xe, 0x14, 0x0, 0xff,
    0xe3, 0x89, 0x98, 0x40, 0x3f, 0xf8, 0xec, 0x1,
    0xcc, 0x1, 0xff, 0xc6, 0x6d, 0xec, 0xc7, 0x6a,
    0x80, 0x7f, 0xf1, 0x94, 0x3, 0x60, 0x7, 0xff,
    0x16, 0xe4, 0x80, 0x31, 0x54, 0x80, 0x7f, 0xf1,
    0x7c, 0x3, 0x20, 0x7, 0xff, 0x12, 0x10, 0x3,
    0xf3, 0x30, 0x3, 0xff, 0x88, 0xe0, 0x11, 0x0,
    0x7f, 0xf1, 0x5, 0xc0, 0x3f, 0xd0, 0x1, 0xff,
    0xc4, 0x20, 0x9, 0x80, 0x3f, 0xf8, 0x8e, 0x1,
    0xff, 0xa, 0x80, 0x7f, 0xf1, 0x8, 0x0, 0x20,
    0x1f, 0xfc, 0x4c, 0x0, 0xff, 0xe0, 0x60, 0x7,
    0xff, 0x10, 0x40, 0x3f, 0xf8, 0xec, 0x1, 0xff,
    0xc0, 0x20, 0xf, 0xfe, 0x23, 0x80, 0x7f, 0xf1,
    0xc4, 0x3, 0xff, 0x80, 0xe0, 0x1f, 0xfc, 0x71,
    0x0, 0xff, 0xf1, 0x38, 0x1, 0xc0, 0x3f, 0xf8,
    0x82, 0x1, 0xff, 0xc0, 0x70, 0xf, 0xfe, 0x21,
    0x0, 0xc, 0x3, 0xff, 0x88, 0xa0, 0x1f, 0xfc,
    0x3, 0x0, 0xff, 0xe1, 0x88, 0x80, 0x23, 0x0,
    0xff, 0xe1, 0xe0, 0x7, 0xff, 0x3, 0x0, 0x3f,
    0xf8, 0x6a, 0x1, 0xac, 0x3, 0xff, 0x86, 0xa2,
    0x1, 0xfe, 0x14, 0x0, 0xff, 0xe1, 0xe8, 0x6,
    0x50, 0xf, 0xfe, 0x24, 0x0, 0x7f, 0xac, 0x3,
    0xff, 0x88, 0xe0, 0x18, 0x94, 0x3, 0xff, 0x86,
    0xcc, 0x0, 0xfc, 0xca, 0x1, 0xff, 0xc3, 0x61,
    0x0, 0xe8, 0x0, 0xff, 0xe2, 0x4d, 0x10, 0x6,
    0x29, 0x90, 0x7, 0xff, 0x12, 0x0, 0x3c, 0x50,
    0x1, 0xff, 0xc4, 0x5d, 0xec, 0xc7, 0x6b, 0x0,
    0x7f, 0xf1, 0x24, 0x40, 0x3e, 0x74, 0x0, 0xff,
    0xe2, 0x89, 0x98, 0x40, 0x3f, 0xf8, 0xaa, 0xc0,
    0x1f, 0xd6, 0x60, 0x1f, 0xfd, 0x84, 0xa0, 0xf,
    0xfb, 0xc, 0x3, 0xff, 0xac, 0x96, 0x1, 0xff,
    0xc1, 0xc6, 0x0, 0xff, 0xea, 0x3d, 0x80, 0x7f,
    0xf0, 0xe6, 0xc8, 0x3, 0xff, 0xa0, 0x57, 0x0,
    0x1f, 0xfc, 0x54, 0xe0, 0xf, 0xfe, 0x78, 0xf2,
    0x0, 0x7f, 0xf1, 0x46, 0x70, 0x3, 0xff, 0x9e,
    0x39, 0x22, 0x1, 0xff, 0xc3, 0x4f, 0x60, 0xf,
    0xfe, 0x93, 0x61, 0x80, 0x7f, 0xf0, 0x62, 0xc4,
    0x3, 0xff, 0xa8, 0x58, 0xc0, 0x1f, 0xf4, 0xb8,
    0x7, 0xff, 0x62, 0x58, 0x3, 0xfa, 0x18, 0x3,
    0xff, 0xb5, 0x2c, 0x1, 0xf2, 0xb8, 0x7, 0xff,
    0x72, 0x4c, 0x3, 0x86, 0x80, 0x3f, 0xf8, 0xab,
    0x5b, 0xfe, 0xda, 0x40, 0xf, 0xfe, 0x2f, 0x0,
    0x75, 0x80, 0x7f, 0xf1, 0xb, 0x69, 0x48, 0x0,
    0x4b, 0x78, 0x20, 0x1f, 0xfc, 0x32, 0x70, 0x8,
    0x94, 0x3, 0xff, 0x86, 0x58, 0x40, 0x1f, 0x8f,
    0xc4, 0x3, 0xff, 0x87, 0x2, 0x0, 0xb0, 0xf,
    0xfe, 0x27, 0x88, 0x7, 0xf8, 0x74, 0x3, 0xff,
    0x88, 0xe0, 0x7, 0x0, 0xff, 0xe1, 0xb1, 0x0,
    0x7f, 0xf0, 0xd, 0x0, 0x3f, 0xf8, 0x74, 0x8,
    0x20, 0x1f, 0xfc, 0x3b, 0x0, 0xff, 0xe1, 0x78,
    0x7, 0xff, 0xc, 0xc4, 0xc0, 0x3f, 0xf8, 0x62,
    0x40, 0x1f, 0xfc, 0x25, 0x0, 0xff, 0xe2, 0x2e,
    0x80, 0x7f, 0xf0, 0xc8, 0x3, 0xff, 0x86, 0x22,
    0x0, 0xff, 0xe1, 0x9b, 0x0, 0x7f, 0xf0, 0xdc,
    0x3, 0xff, 0x88, 0x60, 0x1f, 0xfc, 0x3e, 0x10,
    0xf, 0xfe, 0x18, 0x80, 0x7f, 0xf5, 0xc, 0xc0,
    0x1f, 0xfc, 0x36, 0x0, 0xff, 0xe2, 0x18, 0x7,
    0xff, 0xc, 0x4c, 0x3, 0xff, 0x86, 0x40, 0x1f,
    0xfc, 0x41, 0x0, 0xff, 0xe1, 0x88, 0x80, 0x3f,
    0xf8, 0x62, 0x40, 0x1f, 0xfc, 0x24, 0x0, 0xff,
    0xe2, 0x1b, 0x0, 0x7f, 0xf1, 0x28, 0x3, 0xff,
    0x85, 0xa0, 0x1f, 0xfc, 0x41, 0x20, 0xf, 0xfe,
    0x23, 0x8, 0x7, 0xff, 0x0, 0x98, 0x3, 0xff,
    0x89, 0xba, 0x0, 0xff, 0xe2, 0xd, 0x0, 0x7f,
    0xf0, 0x38, 0x3, 0xff, 0x8a, 0xe8, 0x1, 0xff,
    0xc5, 0x4b, 0x10, 0xf, 0xc3, 0x66, 0x1, 0xff,
    0xc4, 0x12, 0x13, 0x0, 0xff, 0xe2, 0xa7, 0xb8,
    0x80, 0x61, 0x7f, 0x40, 0xf, 0xfe, 0x2b, 0x80,
    0x28, 0x3, 0xff, 0x8c, 0x31, 0xdc, 0xcc, 0x77,
    0x20, 0x40, 0x3f, 0xf8, 0xd4, 0x0, 0x61, 0x0,
    0xff, 0xe4, 0x9, 0x98, 0x40, 0x3f, 0xf9, 0x6,
    0x60, 0xa, 0x0, 0x3f, 0xfc, 0x10, 0x1, 0x98,
    0xc0, 0x3f, 0xfb, 0xca, 0x80, 0x1d, 0xc2, 0x1,
    0xff, 0xdc, 0x1b, 0x0, 0xf1, 0x68, 0x7, 0xff,
    0x73, 0x44, 0x3, 0xe3, 0xb0, 0xf, 0xfe, 0xd6,
    0x18, 0x7, 0xf2, 0x60, 0x80, 0x7f, 0xf5, 0x87,
    0xc, 0x3, 0xfe, 0x3f, 0x40, 0xf, 0xfe, 0xa2,
    0x79, 0x80, 0x7f, 0xf0, 0x46, 0xe8, 0x80, 0x3f,
    0xfa, 0x3, 0x56, 0x20, 0x1f, 0xfc, 0x45, 0xd9,
    0x20, 0xf, 0xfe, 0x61, 0x4f, 0x28, 0x7, 0xff,
    0x21, 0xb7, 0x1c, 0x80, 0x3f, 0xf8, 0xc4, 0xf9,
    0xac, 0x1, 0xff, 0xcc, 0x38, 0xde, 0xb8, 0x54,
    0x21, 0x0, 0xc2, 0x46, 0xb1, 0x7d, 0xb0, 0x60,
    0x1f, 0xfc, 0x10,

    /* U+39 "9" */
    0x0, 0xff, 0xe3, 0xa3, 0xd6, 0x6f, 0x7f, 0xbb,
    0x29, 0xd0, 0x3, 0xff, 0xae, 0x95, 0xf7, 0xa,
    0x64, 0x20, 0x1, 0x35, 0x8b, 0xfa, 0x50, 0xf,
    0xfe, 0x93, 0x75, 0xa8, 0x7, 0xff, 0xd, 0x6b,
    0x98, 0x3, 0xff, 0x9c, 0x9b, 0x22, 0x1, 0xff,
    0xc7, 0x19, 0xd5, 0x0, 0xff, 0xe5, 0xd5, 0x90,
    0x7, 0xff, 0x2c, 0xaa, 0x40, 0x3f, 0xf9, 0x5,
    0xca, 0x1, 0xff, 0xcf, 0x6d, 0x20, 0xf, 0xfe,
    0x29, 0xe0, 0x80, 0x7f, 0xf4, 0x4b, 0x8, 0x3,
    0xff, 0x86, 0x98, 0x20, 0x1f, 0xfd, 0x31, 0xc2,
    0x0, 0xff, 0xe0, 0x95, 0x0, 0x7f, 0xf5, 0x87,
    0xc0, 0x3f, 0xf8, 0x3, 0xe2, 0x1, 0xff, 0xd7,
    0x2a, 0x0, 0xff, 0xac, 0x80, 0x3f, 0xfb, 0x2a,
    0xc0, 0x1f, 0xc8, 0xa0, 0x1f, 0xfd, 0xb8, 0x10,
    0xf, 0xd2, 0x1, 0xff, 0xc7, 0x13, 0x20, 0xf,
    0xfe, 0x30, 0xc0, 0x7, 0xcc, 0x40, 0x1f, 0xfc,
    0x56, 0xde, 0xcd, 0xfa, 0x20, 0xf, 0xfe, 0x23,
    0x10, 0x7, 0xac, 0x3, 0xff, 0x8b, 0x52, 0x40,
    0x19, 0x75, 0x40, 0x3f, 0xf8, 0x96, 0x1, 0xca,
    0x40, 0x1f, 0xfc, 0x49, 0x50, 0xf, 0xd4, 0xa0,
    0x1f, 0xfc, 0x36, 0x0, 0xef, 0x0, 0xff, 0xe2,
    0x2b, 0x0, 0x7f, 0xa8, 0x40, 0x3f, 0xf8, 0x6c,
    0x1, 0x94, 0x3, 0xff, 0x89, 0x0, 0x1f, 0xfc,
    0x8, 0x0, 0xff, 0xe1, 0xd0, 0x4, 0x80, 0x1f,
    0xfc, 0x46, 0x20, 0xf, 0xfe, 0x3, 0x80, 0x7f,
    0xf0, 0xcc, 0x2, 0xc0, 0xf, 0xfe, 0x26, 0x80,
    0x7f, 0xf0, 0x45, 0x0, 0x3f, 0xf8, 0x6a, 0x0,
    0x30, 0xf, 0xfe, 0x18, 0xa0, 0x7, 0xff, 0xb,
    0x0, 0x3f, 0xf8, 0x78, 0x0, 0x50, 0xf, 0xfe,
    0x1a, 0x80, 0x7f, 0xf0, 0xc8, 0x3, 0xff, 0x86,
    0xa0, 0x1, 0x0, 0xff, 0xe1, 0x98, 0x7, 0xff,
    0xd, 0xc0, 0x3f, 0xf8, 0x64, 0x1, 0xff, 0xc6,
    0xf0, 0xf, 0xfe, 0x19, 0x80, 0x7f, 0xf0, 0xc4,
    0x60, 0xf, 0xfe, 0x20, 0x80, 0x7f, 0xf0, 0xc4,
    0x3, 0xff, 0x88, 0x46, 0x1, 0xff, 0xe5, 0x73,
    0x0, 0xff, 0xf2, 0x88, 0x7, 0xff, 0x14, 0x40,
    0x3f, 0xfa, 0x86, 0x20, 0x1f, 0xfc, 0x4d, 0x0,
    0xff, 0xea, 0x8, 0x8, 0x7, 0xff, 0xd, 0xc0,
    0x3f, 0xfa, 0xc4, 0x1, 0xff, 0xc3, 0x21, 0x0,
    0xff, 0xea, 0xa8, 0x7, 0xff, 0x11, 0x80, 0x3f,
    0xfa, 0xbe, 0x1, 0xff, 0xc4, 0x90, 0xf, 0xfe,
    0xaa, 0x0, 0x7f, 0xf1, 0x6, 0x0, 0x3f, 0xf8,
    0x32, 0x1, 0xff, 0xc6, 0x22, 0x0, 0x7f, 0xf1,
    0x1d, 0x40, 0x3f, 0xe5, 0x60, 0xf, 0xfe, 0x3a,
    0x80, 0x7f, 0xf1, 0x69, 0x80, 0x3f, 0x9e, 0x80,
    0x3f, 0xf9, 0x14, 0x1, 0xff, 0xc6, 0x9c, 0x61,
    0x0, 0x89, 0xb6, 0x0, 0x3f, 0xf8, 0xc2, 0x0,
    0x24, 0x0, 0xff, 0xe3, 0x1c, 0xf7, 0xf7, 0xec,
    0x90, 0x7, 0xff, 0x2e, 0x0, 0x3f, 0xf9, 0x42,
    0x1, 0xff, 0xcb, 0x30, 0x8, 0xd4, 0x3, 0xff,
    0xc2, 0xc0, 0x1a, 0xc4, 0x3, 0xff, 0xc0, 0x20,
    0x18, 0x68, 0x3, 0xff, 0xc0, 0x40, 0x1c, 0x90,
    0x1, 0xff, 0xde, 0x10, 0xf, 0x9d, 0xc0, 0x1f,
    0xfd, 0xd5, 0x0, 0xfd, 0x10, 0x0, 0xff, 0xe6,
    0x20, 0x7, 0xff, 0xc, 0xc0, 0x3f, 0x9e, 0xc4,
    0x3, 0xff, 0x90, 0x36, 0x60, 0x1f, 0xfc, 0x3d,
    0x0, 0xff, 0x27, 0x38, 0x7, 0xff, 0x19, 0xbd,
    0xc, 0x3, 0xff, 0x86, 0x80, 0x1f, 0xfc, 0x8,
    0xe8, 0x20, 0xf, 0xfe, 0xa, 0xec, 0x88, 0x28,
    0x7, 0xff, 0x8, 0x84, 0x3, 0xff, 0x82, 0x2f,
    0xba, 0x95, 0x31, 0x0, 0x84, 0xda, 0xbe, 0x88,
    0x0, 0x62, 0x1, 0xff, 0xc2, 0x50, 0xf, 0xfe,
    0x29, 0x35, 0x67, 0x7f, 0xdd, 0x92, 0xa0, 0x1d,
    0x20, 0x1f, 0xfc, 0x3b, 0x0, 0xff, 0xeb, 0x28,
    0x7, 0xff, 0x8, 0x4c, 0x3, 0xff, 0xab, 0x20,
    0x1f, 0xfc, 0x39, 0x0, 0xff, 0xea, 0x9b, 0x0,
    0x7f, 0xf0, 0xd8, 0x3, 0xff, 0xa8, 0x3c, 0x1,
    0xff, 0xc3, 0x51, 0x0, 0xff, 0xe9, 0x8e, 0x90,
    0x7, 0xff, 0xe, 0x0, 0x3f, 0xfa, 0x65, 0xa6,
    0x1, 0xff, 0xc3, 0x62, 0x0, 0xff, 0xe9, 0x3e,
    0x98, 0x7, 0xff, 0xc, 0x60, 0x3, 0xff, 0xa0,
    0x2d, 0xb0, 0x1, 0xff, 0xc5, 0xb1, 0x0, 0xff,
    0xe6, 0x9b, 0x57, 0x49, 0x0, 0x7f, 0xf1, 0x51,
    0x40, 0x3f, 0xf8, 0xa5, 0x55, 0x5e, 0x6f, 0x7e,
    0x4a, 0x80, 0x7f, 0xf1, 0xc6, 0x80, 0x3f, 0xf8,
    0xcc, 0xab, 0x21, 0x90, 0x80, 0x7f, 0xf2, 0xf4,
    0x40, 0x3f, 0xfc, 0x94, 0x60, 0x1f, 0xfe, 0x48,
    0x50, 0xf, 0xff, 0x24, 0xb8, 0x7, 0xff, 0x92,
    0xd8, 0x3, 0xff, 0xc6, 0x3a, 0x80, 0x1f, 0xfe,
    0x36, 0xe2, 0x0, 0xff, 0xf1, 0x16, 0x48, 0x7,
    0xff, 0x88, 0x63, 0x4c, 0x3, 0xff, 0xc2, 0x51,
    0xce, 0x1, 0xff, 0xe1, 0x5b, 0xd7, 0x0, 0xff,
    0xef, 0x93, 0x5f, 0xd2, 0x0, 0x7f, 0xf6, 0x44,
    0x8d, 0x5e, 0x73, 0xf6, 0x50, 0x3, 0xff, 0x9a
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 927, .box_w = 50, .box_h = 73, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 629, .adv_w = 927, .box_w = 33, .box_h = 72, .ofs_x = 8, .ofs_y = 0},
    {.bitmap_index = 813, .adv_w = 927, .box_w = 52, .box_h = 72, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1409, .adv_w = 927, .box_w = 52, .box_h = 73, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 2065, .adv_w = 927, .box_w = 54, .box_h = 72, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2441, .adv_w = 927, .box_w = 51, .box_h = 72, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 3059, .adv_w = 927, .box_w = 52, .box_h = 73, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 3748, .adv_w = 927, .box_w = 52, .box_h = 72, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 4241, .adv_w = 927, .box_w = 50, .box_h = 73, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 5012, .adv_w = 927, .box_w = 51, .box_h = 73, .ofs_x = 3, .ofs_y = -1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 48, .range_length = 10, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 1
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t arial_100 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 73,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if ARIAL_100*/
