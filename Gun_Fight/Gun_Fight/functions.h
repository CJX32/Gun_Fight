#pragma once
#ifndef functions_h
#define functions_h
#include "game_settings.h"

void loadfont(LOGFONT* font, int height, int degree);
void draw_button(int left, int top, int right, int buttom, LPCTSTR string, int state, int flag);
int key_dect();
void update(Status* st, int key);
void rlmirror(IMAGE* ori);
void bullet_add(bullet_list *t, int x, int y,int dir,int type);
#endif 

