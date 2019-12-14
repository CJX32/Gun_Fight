#pragma once
#ifndef animations_h
#define animations_h
#include "functions.h"
#include <wingdi.h>
#pragma comment( lib, "Msimg32" )
void stand(int x, int y, IMAGE character, IMAGE character_anti, int dir);
void walk(int* x, int* y, IMAGE character, IMAGE character_anti, int dir);
void attack_while_walk(int* x, int* y, IMAGE character, IMAGE character_anti, int dir, bullet_list *t);
void fist(int* x, int* y, IMAGE character, IMAGE character_anti, int dir);
void fall(int* x, int* y, IMAGE character, IMAGE character_anti, int dir);
void fire_1(int* x, int* y, IMAGE character, IMAGE character_anti, bullet_list* t, Status* st);
void bullet_display(IMAGE character, IMAGE character_anti, bullet_list t);
void fire_2(int* x, int* y, IMAGE character, IMAGE character_anti, bullet_list* t, Status* st);
void big();
#endif 
