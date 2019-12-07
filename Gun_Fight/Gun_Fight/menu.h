#pragma once
#ifndef menu_h
#define menu_h
#include "functions.h"

int menu(void);
void display_button(MOUSEMSG m, LOGFONT font, char* start_str, char* options_str, char* producer_str, char* exit_str);
void display_bar(MOUSEMSG m, POINT pts[4][4]);
void display_title(LOGFONT* font);
int menu_choice(MOUSEMSG m);
#endif