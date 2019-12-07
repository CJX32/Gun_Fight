#pragma once
#ifndef game_settings_h
#define game_settings_h
#include <time.h>
#include <stdio.h>
#include "graphics.h"
#include "PictiureDispose.h"

typedef struct setting {
	int voice;
	int music;
	int emery_num;
}Settings;

#define menu_back_path "C:\\Users\\CJX32\\Desktop\\My_Game\\Pictures\\menu_background.jpg"
#define options_back_path "C:\\Users\\CJX32\\Desktop\\My_Game\\Pictures\\options_background.jpg"
#define character_pic_path "C:\\Users\\CJX32\\Desktop\\My_Game\\Pictures\\character.bmp"

#define test_delay 60

#define pic_h 1067
#define pic_w 480
#define times 2

#define frame_rate 60

#define window_width 1100
#define window_height 700

#define menu_bar_r 45
#define menu_bar_g 45
#define menu_bar_b 48

#define button_front_r 45
#define button_front_g 45
#define button_front_b 48

#define button_back_r 30
#define button_back_g 30
#define button_back_b 30

#define button_chfront_r 0
#define button_chfront_g 159
#define button_chfront_b 236

#define button_chback_r 0
#define button_chback_g 120
#define button_chback_b 186

#define LM_Down 1

#define open 1
#define shut_off 0

#define save 1
#define cancle 2

#define  pace 10
#endif