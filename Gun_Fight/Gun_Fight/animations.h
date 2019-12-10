#pragma once
#ifndef animations_h
#define animations_h
#include "game_settings.h"
#include <wingdi.h>
#pragma comment( lib, "Msimg32" )
void stand(int x, int y, IMAGE character, IMAGE character_anti, int dir);
void walk(int* x, int* y, IMAGE character, IMAGE character_anti, int dir);
void attack();
void fist();
void fall();
void fire_1();
void fire_2();
void big();
#endif 
