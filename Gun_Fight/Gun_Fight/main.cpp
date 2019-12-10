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
	while (1) {
		
		key = key_dect();
		update(st,key);
		if (st->walk) {
			walk(&x, &y,character,character_anti,st->dir);
		}
		else {
			stand(x,y,character,character_anti,st->dir);
		}
		printf("%d\n", y);
	
	}
	
	
}