#pragma once
#ifndef initialization_h
#define initialization_h
#include "game_settings.h"

void set_init(Settings* set);
void character_init(IMAGE* character);
void status_init(Status* st);
void bullet_list_init(bullet_list *t);

#endif // initialization_h
