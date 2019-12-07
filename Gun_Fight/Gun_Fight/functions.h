#pragma once
#ifndef functions_h
#define functions_h
#include "game_settings.h"

void loadfont(LOGFONT* font, int height, int degree);
void draw_button(int left, int top, int right, int buttom, LPCTSTR string, int state, int flag);
void set_init(Settings* set);
#endif 

