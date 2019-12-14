#include "animations.h"
void stand(int x,int y,IMAGE character,IMAGE character_anti,int dir) {
	static int frame;
	if (dir == Right) {
		if (frame == 0) {
			cleardevice();
			putimage(x, (y- 52.5) * times, 32 * times, 52.5 * times, &character, 14.5 * times, 13.4 * times);

			//Sleep(test_delay);
			frame++;
		}
		else  if (frame == 1) {
			cleardevice();
			putimage(x, (y- 52.5) * times, 32 * times, 52.5 * times, &character, 48.5 * times, 13.4 * times);

			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 2) {
			cleardevice();
			putimage(x, (y- 52.5) * times, 32 * times, 52.5 * times, &character, 81.5 * times, 13.4 * times);

			//Sleep(test_delay);
			frame = 0;
		}
	}
	else {
		if (frame == 0) {
			cleardevice();
			putimage(x, (y- 52.5) * times, 32 * times, 52.5 * times, &character_anti, (480- 14.5 -32)*times, 13.4 * times);

			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 1) {
			cleardevice();
			putimage(x, (y- 52.5) * times, 32 * times, 52.5 * times, &character_anti, (480 - 48.5-32)*times, 13.4 * times);

			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 2) {
			cleardevice();
			putimage(x, (y- 52.5) * times, 32 * times, 52.5 * times, &character_anti, (480 - 81.5 -32)*times, 13.4 * times);

			//Sleep(test_delay);
			frame = 0;
		}
	}
}
void walk(int *x,int *y,IMAGE character,IMAGE character_anti,int dir) {
	static int frame;
	if (dir == Right) {
		if (*x + pace + 40 * times > window_width)
			*x -= pace;
		if (frame == 0) {
			cleardevice();
			putimage(*x += pace, (*y- 49) * times, 45 * times, 49 * times, &character, 16 * times, 298 * times);
			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 1) {
			cleardevice();
			putimage(*x += pace, (*y- 49) * times, 45 * times, 49 * times, &character, 63 * times, 298 * times);
			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 2) {
			cleardevice();
			putimage(*x += pace, (*y- 49 )* times, 45 * times, 49 * times, &character, 105 * times, 298 * times);

			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 3) {
			cleardevice();
			putimage(*x += pace, (*y- 49) * times, 45 * times, 49 * times, &character, 149 * times, 298 * times);

			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 4) {
			cleardevice();
			putimage(*x += pace, (*y- 49 )* times, 42 * times, 49 * times, &character, 196 * times, 298 * times);

			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 5) {
			cleardevice();
			putimage(*x += pace, (*y- 49 )* times, 45 * times, 49 * times, &character, 237 * times, 298 * times);

			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 6) {
			cleardevice();
			putimage(*x += pace, (*y- 49) * times, 42 * times, 49 * times, &character, 280 * times, 298 * times);

			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 7) {
			cleardevice();
			putimage(*x += pace, (*y- 49) * times, 40 * times, 49 * times, &character, 318 * times, 298 * times);

			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 8) {
			cleardevice();
			putimage(*x += pace, (*y- 50) * times, 44 * times, 50 * times, &character, 357 * times, 298 * times);

			//Sleep(test_delay);
			frame = 0;
		}
	}
	else {
		if (*x - pace + 10 < 0)
			*x += pace;
		if (frame == 0) {
			cleardevice();
			putimage(*x -= pace, (*y- 49) * times, 45 * times, 49 * times, &character_anti, (480-45-16) * times, 298 * times);
			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 1) {
			cleardevice();
			putimage(*x -= pace, (*y- 49) * times, 45 * times, 49 * times, &character_anti, (480-45-63) * times, 298 * times);
			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 2) {
			cleardevice();
			putimage(*x -= pace, (*y- 49 )* times, 45 * times, 49 * times, &character_anti, (480-45-105) * times, 298 * times);

			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 3) {
			cleardevice();
			putimage(*x -= pace, (*y- 49) * times, 45 * times, 49 * times, &character_anti, (480-45-149) * times, 298 * times);

			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 4) {
			cleardevice();
			putimage(*x -= pace, (*y- 49 )* times, 42 * times, 49 * times, &character_anti, (480-42-196) * times, 298 * times);

			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 5) {
			cleardevice();
			putimage(*x -= pace, (*y- 49) * times, 45 * times, 49 * times, &character_anti, (480-45-237) * times, 298 * times);

			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 6) {
			cleardevice();
			putimage(*x -= pace, (*y- 49) * times, 42 * times, 49 * times, &character_anti, (480-42-280) * times, 298 * times);

			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 7) {
			cleardevice();
			putimage(*x -= pace, (*y- 49) * times, 40 * times, 49 * times, &character_anti, (480-40-318) * times, 298 * times);

			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 8) {
			cleardevice();
			putimage(*x -= pace, (*y - 50) * times, 44 * times, 50 * times, &character_anti, (480-44-357) * times, 298 * times);

			//Sleep(test_delay);
			frame = 0;
		}
	}
	
}
void attack_while_walk(int* x, int* y, IMAGE character, IMAGE character_anti, int dir, bullet_list *t) {
	static int frame;
	
	if (dir == Right) {
		if (*x + pace + 45 * times > window_width)
			*x -= pace;
		if (frame == 0) {
			cleardevice();
			putimage(*x += pace, (*y - 49) * times, 45 * times, 49 * times, &character, 16 * times, 359 * times);
			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 1) {
			cleardevice();
			putimage(*x += pace, (*y - 49) * times, 45 * times, 49 * times, &character, 71 * times, 359 * times);
			//Sleep(test_delay);
			frame++;
		}
		else	if (frame == 2) {
				cleardevice();
				putimage(*x += pace, (*y - 49) * times, 48 * times, 49 * times, &character, 119 * times, 359 * times);
				//Sleep(test_delay);
				frame++;
			}
		else	if (frame == 3) {
				cleardevice();
				putimage(*x += pace, (*y - 48) * times, 48 * times, 48 * times, &character, 168 * times, 359 * times);
				//Sleep(test_delay);
				frame++;

			}
		else	if (frame == 4) {
				cleardevice();
				putimage(*x += pace, (*y - 49) * times, 48 * times, 49 * times, &character, 219 * times, 359 * times);
				//Sleep(test_delay);
				frame++;
				bullet_add(t, *x + 48 * times, *y, dir,1);
			}
		else	if (frame == 5) {
				cleardevice();
				putimage(*x += pace, (*y - 49) * times, 48 * times, 49 * times, &character, 268 * times, 359 * times);
				//Sleep(test_delay);
				frame++;
				
			}
		else	if (frame == 6) {
				cleardevice();
				putimage(*x += pace, (*y - 48) * times, 48 * times, 48 * times, &character, 316 * times, 359 * times);
				//Sleep(test_delay);
				frame++;

			}
		else	if (frame == 7) {
				cleardevice();
				putimage(*x += pace, (*y - 50) * times, 48 * times, 50 * times, &character, 364 * times, 359 * times);
				//Sleep(test_delay);
				frame++;

			}
		else	if (frame == 8) {
				cleardevice();
				putimage(*x += pace, (*y - 49) * times, 48 * times, 49 * times, &character, 413 * times, 359 * times);
				//Sleep(test_delay);
				frame = 0;
				
			}
		}
		else {
			if (*x - pace +3 < 0)
				*x += pace;
			if (frame == 0) {
				cleardevice();
				putimage(*x -= pace, (*y - 49) * times, 45 * times, 49 * times, &character_anti, (480 - 45 - 16) * times, 359 * times);
				//Sleep(test_delay);
				frame++;
			}
			else if (frame == 1) {
				cleardevice();
				putimage(*x -= pace, (*y - 49) * times, 45 * times, 49 * times, &character_anti, (480 - 45 - 71) * times, 359 * times);
				//Sleep(test_delay);
				frame++;
			}
			else if (frame == 2) {
				cleardevice();
				putimage(*x -= pace, (*y - 49) * times, 48 * times, 49 * times, &character_anti, (480 - 48 - 119) * times, 359 * times);
				//Sleep(test_delay);
				frame++;
			}
			else if (frame == 3) {
				cleardevice();
				putimage(*x -= pace, (*y - 48) * times, 48 * times, 48 * times, &character_anti, (480 - 48 - 168) * times, 359 * times);
				//Sleep(test_delay);
				frame++;

			}
			else  if (frame == 4) {
				cleardevice();
				putimage(*x -= pace, (*y - 49) * times, 48 * times, 49 * times, &character_anti, (480 - 48 - 219) * times, 359 * times);
				//Sleep(test_delay);
				frame++;
				bullet_add(t, *x - 48 * times, *y, dir,1);
			}
			else if (frame == 5) {
				cleardevice();
				putimage(*x -= pace, (*y - 49) * times, 48 * times, 49 * times, &character_anti, (480 - 48 - 268) * times, 359 * times);
				//Sleep(test_delay);
				frame++;

			}
			else if (frame == 6) {
				cleardevice();
				putimage(*x -= pace, (*y - 48) * times, 48 * times, 48 * times, &character_anti, (480 - 48 - 316) * times, 359 * times);
				//Sleep(test_delay);
				frame++;

			}
			else if (frame == 7) {
				cleardevice();
				putimage(*x -= pace, (*y - 50) * times, 48 * times, 50 * times, &character_anti, (480 - 48 - 364) * times, 359 * times);
				//Sleep(test_delay);
				frame++;

			}
			else if (frame == 8) {
				cleardevice();
				putimage(*x -= pace, (*y - 49) * times, 48 * times, 49 * times, &character_anti, (480 - 48 - 413) * times, 359 * times);
				//Sleep(test_delay);
				frame = 0;
			}
		}

}

void fist(int* x, int* y, IMAGE character, IMAGE character_anti, int dir) {
	static int frame;
		if (dir == Right) {
			if (frame == 0) {
				cleardevice();
				putimage(*x, (*y - 54) * times, 38 * times, 54 * times, &character, 13 * times, 235 * times);
				//Sleep(test_delay);
				frame++;
			}
			else if (frame == 1) {
				cleardevice();
				putimage(*x, (*y - 54) * times, 45 * times, 54 * times, &character, 53 * times, 235 * times);
				//Sleep(test_delay);
				frame++;
			}
			else if (frame == 2) {
				cleardevice();
				putimage(*x, (*y - 54) * times, 45 * times, 54 * times, &character, 97 * times, 235 * times);
				//Sleep(test_delay);
				frame++;
			}
			else if (frame == 3) {
				cleardevice();
				putimage(*x, (*y - 54) * times, 45 * times, 54 * times, &character, 146 * times, 235 * times);
				//Sleep(test_delay);
				frame = 0;
			}
		}
		else {
			if (frame == 0) {
				cleardevice();
				putimage(*x, (*y - 54) * times, 38 * times, 54 * times, &character_anti, (480-38-13) * times, 235 * times);
				//Sleep(test_delay);
				frame++;
			}
			else if (frame == 1) {
				cleardevice();
				putimage(*x, (*y - 54) * times, 45 * times, 54 * times, &character_anti, (480-45-53) * times, 235 * times);
				//Sleep(test_delay);
				frame++;
			}
			else if (frame == 2) {
				cleardevice();
				putimage(*x, (*y - 54) * times, 45 * times, 54 * times, &character_anti, (480-45-97) * times, 235 * times);
				//Sleep(test_delay);
				frame++;
			}
			else if (frame == 3) {
				cleardevice();
				putimage(*x, (*y - 54) * times, 45 * times, 54 * times, &character_anti, (480-45-146) * times, 235 * times);
				//Sleep(test_delay);
				frame = 0;
			}
		}
	
}
void fall(int* x, int* y, IMAGE character, IMAGE character_anti, int dir) {
	static int frame;
	if (dir == Right) {
		if (frame == 0) {
			cleardevice();
			putimage(*x, (*y-51)*times, 45 * times, 53 * times, &character, 9 * times, 68 * times);
			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 1) {
			cleardevice();
			putimage(*x, (*y-51)*times, 62 * times, 51 * times, &character, 57 * times, 68 * times);
			//Sleep(test_delay);
			frame = 0;
		}
	}
	else {
		if (frame == 0) {
			cleardevice();
			putimage(*x, (*y - 51) * times, 45 * times, 53 * times, &character_anti, (480-45-9) * times, 68 * times);
			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 1) {
			cleardevice();
			putimage(*x, (*y - 51) * times, 62 * times, 51 * times, &character_anti, (480-62-57) * times, 68 * times);
			//Sleep(test_delay);
			frame = 0;
		}
	}
}
void fire_1(int* x, int* y, IMAGE character, IMAGE character_anti, bullet_list *t,Status *st) {
	static int frame;
	if (st->dir == Right) {
		if (frame == 0) {
			cleardevice();
			putimage(*x, (*y - 57) * times, 45 * times, 57 * times, &character, 7 * times, 123 * times);
			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 1) {
			cleardevice();
			putimage(*x, (*y - 57) * times, 50 * times, 57 * times, &character, 51 * times, 123 * times);
			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 2) {
			cleardevice();
			putimage(*x, (*y - 57) * times, 60 * times, 57 * times, &character, 99 * times, 123 * times);
			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 3) {
			cleardevice();
			putimage(*x, (*y - 49) * times, 60 * times, 49 * times, &character, 7 * times, 183 * times);
			//Sleep(test_delay);
			bullet_add(t, *x+60*times, *y, st->dir,1);
			st->fire = 0;
			frame = 0;
		}
	}
	else if (st->dir == Left) {
		if (frame == 0) {
			cleardevice();
			putimage(*x, (*y - 57) * times, 45 * times, 57 * times, &character_anti, (480-45-7) * times, 123 * times);
			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 1) {
			cleardevice();
			putimage(*x, (*y - 57) * times, 50 * times, 57 * times, &character_anti, (480-50-51) * times, 123 * times);
			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 2) {
			cleardevice();
			putimage(*x, (*y - 57) * times, 60 * times, 57 * times, &character_anti, (480-60-99) * times, 123 * times);
			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 3) {
			cleardevice();
			putimage(*x, (*y - 49) * times, 60 * times, 49 * times, &character_anti, (480-60-7) * times, 183 * times);
			//Sleep(test_delay);
			bullet_add(t, *x-60*times, *y, st->dir,1);
			st->fire = 0;
			frame = 0;
		}
	}
	
}
void bullet_display(IMAGE character, IMAGE character_anti,bullet_list t) {
	//cleardevice();
	static int frame;
	for (int a = 0; a < t.num; a++) {
		if (t.list[a].dir == Right) {
			if (t.list[a].x < window_width) {
				if(t.list[a].type==1)
				putimage(t.list[a].x, t.list[a].y, 60 * times, 30 * times, &character, 160 * times, 123 * times);
				else {
					if (t.list[a].flag) {
						putimage(t.list[a].x, t.list[a].y, 35 * times, 45 * times, &character, 218 * times, 189 * times);
						t.list[a].flag = 0;
					}
					else {
						if (frame == 0) {
							putimage(t.list[a].x, t.list[a].y, 48 * times, 46 * times, &character, 252 * times, 189 * times);
							frame++;
						}
						else if (frame == 1) {
							putimage(t.list[a].x, t.list[a].y, 48 * times, 46 * times, &character, 298 * times, 189 * times);
							frame++;
						}
						else if (frame == 2) {

							putimage(t.list[a].x, t.list[a].y, 48 * times, 46 * times, &character, 346 * times, 189 * times);

							frame++;
						}
						else if (frame == 3) {

							putimage(t.list[a].x, t.list[a].y, 55 * times, 46 * times, &character, 397 * times, 189 * times);

							frame = 0;
						}
					}
				}
				t.list[a].x += bullet_speed;
			}
			else {
				t.list[a].dir = Del;
			}
		}
		else if(t.list[a].dir == Left)
		{
			if (t.list[a].x + 60*times > 0) {
				if (t.list[a].type == 1)
				putimage(t.list[a].x, t.list[a].y, 60 * times, 30 * times, &character_anti, (480 - 60 - 160) * times, 123 * times);
				else {
					if (t.list[a].flag) {
						putimage(t.list[a].x, t.list[a].y, 35 * times, 45 * times, &character_anti, (480-35-218) * times, 189 * times);
						t.list[a].flag = 0;
					}
					else {
						if (frame == 0) {

							putimage(t.list[a].x, t.list[a].y, 48 * times, 46 * times, &character_anti, (480 - 48 - 252) * times, 189 * times);

							frame++;
						}
						else if (frame == 1) {

							putimage(t.list[a].x, t.list[a].y, 48 * times, 46 * times, &character_anti, (480 - 48 - 298) * times, 189 * times);

							frame++;
						}
						else if (frame == 2) {

							putimage(t.list[a].x, t.list[a].y, 48 * times, 46 * times, &character_anti, (480 - 48 - 346) * times, 189 * times);

							frame++;
						}
						else if (frame == 3) {

							putimage(t.list[a].x, t.list[a].y, 55 * times, 46 * times, &character_anti, (480 - 55 - 397) * times, 189 * times);

							frame = 0;
						}
					}
				}
				t.list[a].x -= bullet_speed;
			}
		    else {
			t.list[a].dir = Del;
		    }
		}
	}

}
void fire_2(int* x, int* y, IMAGE character, IMAGE character_anti, bullet_list* t, Status* st) {
	static int frame;
	if (st->dir == Right) {
		if (frame == 0) {
			cleardevice();
			putimage(*x, (*y - 48) * times, 47 * times, 48 * times, &character, 220 * times, 130 * times);
			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 1) {
			cleardevice();
			putimage(*x, (*y - 48) * times, 47 * times, 48 * times, &character, 265 * times, 130 * times);
			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 2) {
			cleardevice();

			putimage(*x, (*y - 48) * times, 47 * times, 48 * times, &character, 310 * times, 130 * times);
			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 3) {
			cleardevice();
			putimage(*x, (*y - 48) * times, 47 * times, 48 * times, &character, 355 * times, 130 * times);
			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 4) {
			cleardevice();
			putimage(*x, (*y - 48) * times, 47 * times, 48 * times, &character, 401 * times, 130 * times);
			//Sleep(test_delay);
			frame=0;
			bullet_add(t, *x + 47 * times, *y, st->dir, 2);
			st->fire_2 = 0;
		}

		/*else if (frame == 5) {
			cleardevice();
			putimage(*x , (*y-45)*times,  35 * times, 45 * times, &character, 218 * times, 189 * times);
			//Sleep(test_delay);
			frame = 0;
		}*/
	}
	else {
		if (frame == 0) {
			cleardevice();
			putimage(*x, (*y - 48) * times, 47 * times, 48 * times, &character_anti, (480-220-47) * times, 130 * times);
			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 1) {
			cleardevice();
			putimage(*x, (*y - 48) * times, 47 * times, 48 * times, &character_anti, (480-265-47) * times, 130 * times);
			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 2) {
			cleardevice();

			putimage(*x, (*y - 48) * times, 47 * times, 48 * times, &character_anti, (480-310-47) * times, 130 * times);
			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 3) {
			cleardevice();
			putimage(*x, (*y - 48) * times, 47 * times, 48 * times, &character_anti, (480-355-47) * times, 130 * times);
			//Sleep(test_delay);
			frame++;
		}
		else if (frame == 4) {
			cleardevice();
			putimage(*x, (*y - 48) * times, 47 * times, 48 * times, &character_anti, (480-48-401) * times, 130 * times);
			//Sleep(test_delay);
			frame=0;
			bullet_add(t, *x - 47 * times, *y, st->dir, 2);
			st->fire_2 = 0;
		}

		/*else if (frame == 5) {
			cleardevice();
			putimage(*x, (*y-45)*times, 35 * times, 45 * times, &character_anti, (480-35-218) * times, 189 * times);
			//Sleep(test_delay);
			frame = 0;
		}*/
	}
	/*while (1) {
			cleardevice();
			putimage(0, 0, 48 * times, 46 * times, &character, 252 * times, 189 * times);
			Sleep(100);
			cleardevice();
			putimage(0, 0, 48 * times, 46 * times, &character, 298 * times, 189 * times);
			Sleep(100);
			cleardevice();
			putimage(0, 0, 48 * times, 46 * times, &character, 346 * times, 189 * times);
			Sleep(100);
			cleardevice();
			putimage(0, 0, 55 * times, 46 * times, &character, 397 * times, 189 * times);
			Sleep(100);
		}*/
	
}
void big() {
	initgraph(window_width, window_height, SHOWCONSOLE);
	IMAGE character;
	loadimage(&character, character_pic_path, pic_w * times, pic_h * times, true);
	Dispose dis;
	dis.setImage(character, 0, 0);
	dis.setCutoutImage(RGB(173, 218, 165), 0);
	dis.setCutoutImage(RGB(156, 181, 182), 0);
	
	character = dis.Putimage();
	while (1) {
		cleardevice();
		putimage(0, 0, 30 * times, 128 * times, &character, 40 * times, 658 * times);
		//Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 30 * times, 128 * times, &character, 63 * times, 658 * times);
		//Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 30 * times, 128 * times, &character, 89 * times, 658 * times);
		//Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 30 * times, 128 * times, &character, 116 * times, 658 * times);
		//Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 30 * times, 128 * times, &character, 144 * times, 658 * times);
		//Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 30 * times, 128 * times, &character, 174 * times, 658 * times);
		//Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 30 * times, 128 * times, &character, 205 * times, 658 * times);
		//Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 37 * times, 130 * times, &character, 240 * times, 658 * times);
		//Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 37 * times, 130 * times, &character, 282 * times, 658 * times);
		//Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 45 * times, 130 * times, &character, 325 * times, 658 * times);
		//Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 45 * times, 130 * times, &character, 370 * times, 658 * times);
		//Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 45 * times, 130 * times, &character, 232 * times, 710 * times);
		//Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 45 * times, 130 * times, &character, 275 * times, 710 * times);
		//Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 48 * times, 128 * times, &character, 318 * times, 710 * times);
		//Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 48 * times, 128 * times, &character, 364 * times, 710 * times);
		//Sleep(test_delay);
		cleardevice();
		putimage(0, 76*times, 48* times, 53 * times, &character, 93 * times, 860 * times);
		//Sleep(test_delay);
		cleardevice();
		putimage(0, 76 * times, 48 * times, 52 * times, &character, 139 * times, 860 * times);
		//Sleep(test_delay);
		cleardevice();
		putimage(0, 76 * times, 48 * times, 52 * times, &character, 186 * times, 860 * times);
		//Sleep(test_delay);
		cleardevice();
		putimage(0, 76 * times, 48 * times, 52 * times, &character, 228 * times, 860 * times);
		//Sleep(test_delay);
		cleardevice();
		putimage(0, 76 * times, 46 * times, 52 * times, &character, 271 * times, 860 * times);
		//Sleep(test_delay);
		cleardevice();
		putimage(0, 76 * times, 48 * times, 52 * times, &character, 310 * times, 860 * times);
		//Sleep(test_delay);
	}
}
