#include "menu.h"
#include "options.h"
#include "functions.h"
#include "animations.h"
#include "PictiureDispose.h"
#include "initialization.h"
#include <time.h>
#include <stdio.h>
#include <conio.h>
int main(void) {
	/*Settings set;
	set_init(&set);
	int choice;
	choice=menu();
	if (choice == 1)
	{

	}
	else if(choice==2)
	options(&set);
	else if (choice == 3)
	{dd'd'd

	}
	else
	closegraph();
	*/
	IMAGE character,character_anti;
	character_init(&character);
	character_init(&character_anti);
	int x = 0, y = 100 ,key;
	Status* st, a;
	st = &a;
	status_init(st);
	initgraph(window_width, window_height, SHOWCONSOLE);
	rlmirror(&character_anti);
	bullet_list t;
	bullet_list_init(&t);
	while (1) {
		
		key = key_dect();
		printf("%d\n", key);
		if(!st->fire&&!st->fire_2)
		update(st,key);
		BeginBatchDraw();
		if (st->fire) {
			fire_1(&x, &y, character, character_anti, &t,st);
		}
		if (st->fire_2) {
			fire_2(&x, &y, character, character_anti, &t, st);
		}
		else if (st->walk) {
			walk(&x, &y,character,character_anti,st->dir);
		}
		else if (st->attack_while_walk) {
			attack_while_walk(&x, &y, character, character_anti, st->dir,&t);
		}
		else if (st->fist) {
			fist(&x, &y, character, character_anti, st->dir);
		}
		else {
			stand(x,y,character,character_anti,st->dir);
		}
		bullet_display(character, character_anti, t);
		EndBatchDraw();
		Sleep(1000);
	}
	
	
}