#ifndef _OLED_SSD1309_SETTINGS_H
#define _OLED_SSD1309_SETTINGS_H


#define SSD1309_128_64
	//#define SSD1309_128_32

#define _SSD1309_BACKGROUND BLACK
#define _SSD1309_FOREGROUND WHITE


#if defined SSD1309_128_64 && defined SSD1309_128_32
  #error "Only one SSD1309 display can be specified at once in OLED_SSD1309_settings.h"
#endif
#if !defined SSD1309_128_64 && !defined SSD1309_128_32
  #error "At least one SSD1309 display must be specified in OLED_SSD1309_settings.h"
#endif


#if defined SSD1309_128_64
  #define OLED_WIDTH                  128
  #define OLED_HEIGHT                 64
#endif
#if defined SSD1309_128_32
  #define OLED_WIDTH                  128
  #define OLED_HEIGHT                 32
#endif

//this chip uses fixed resolution but in case...
#define OLED_MW						OLED_WIDTH -1
#define OLED_MH						OLED_HEIGHT -1
#define OLED_BUFFERLEN				(OLED_WIDTH * OLED_HEIGHT) / 8

#if OLED_HEIGHT == 64
	#define OLED_PGADRSVAL				0x07
#else
	#define OLED_PGADRSVAL				0x03
#endif

#endif
