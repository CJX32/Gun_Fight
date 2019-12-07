#include "animations.h"
void stand() {
	initgraph(window_width, window_height, SHOWCONSOLE);
	IMAGE character;
	loadimage(&character, character_pic_path,pic_w*times,pic_h*times,true);
	Dispose dis;
	dis.setImage(character, 0, 0);
	dis.setCutoutImage(RGB(173, 218, 165), 0);
	character = dis.Putimage();
	while (1) {
		cleardevice();
		putimage(0, 0, 32 * times, 52.5 * times, &character, 14.5 * times, 13.4 * times);
	
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 32 * times, 52.5 * times, &character, 48.5*times, 13.4*times);
	
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 32 * times, 52.5 * times, &character, 81.5*times, 13.4*times);

		Sleep(test_delay);
	}
	Sleep(40000);
}
void walk(int *x,int *y) {
	initgraph(window_width, window_height, SHOWCONSOLE);
	IMAGE character;
	loadimage(&character, character_pic_path, pic_w * times, pic_h * times, true);
	Dispose dis;
	dis.setImage(character, 0, 0);
	dis.setCutoutImage(RGB(173, 218, 165), 0);
	dis.setCutoutImage(RGB(255, 0, 0), 0);
	character = dis.Putimage();

	while (1) {
		cleardevice();
		putimage(*x+=pace, *y, 45 * times, 49 * times, &character, 16 * times, 298 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(*x += pace, *y, 45 * times, 49 * times, &character, 63 * times, 298 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(*x += pace, *y, 45 * times, 49 * times, &character, 105 * times, 298 * times);
		
		Sleep(test_delay);
		cleardevice();
		putimage(*x += pace, *y, 45 * times, 49 * times, &character, 149 * times, 298 * times);
	
		Sleep(test_delay);
		cleardevice();
		putimage(*x += pace, *y, 42 * times, 49 * times, &character, 196 * times, 298 * times);
	
		Sleep(test_delay);
		cleardevice();
		putimage(*x += pace, *y, 45 * times, 49 * times, &character, 237 * times, 298 * times);
	
		Sleep(test_delay);
		cleardevice();
		putimage(*x += pace, *y, 42 * times, 49 * times, &character, 280 * times, 298 * times);
		
		Sleep(test_delay);
		cleardevice();
		putimage(*x += pace, *y, 40 * times, 49 * times, &character, 318 * times, 298 * times);
	
		Sleep(test_delay);
		putimage(*x += pace, *y, 44 * times, 50 * times, &character, 357 * times, 298 * times);
	
		Sleep(test_delay);

	}
}
void attack() {
	initgraph(window_width, window_height, SHOWCONSOLE);
	IMAGE character;
	loadimage(&character, character_pic_path, pic_w * times, pic_h * times, true);
	Dispose dis;
	dis.setImage(character, 0, 0);
	dis.setCutoutImage(RGB(173, 218, 165), 0);
	dis.setCutoutImage(RGB(255, 0, 0), 0);
	character = dis.Putimage();
	while (1) {
		cleardevice();
		putimage(0, 0, 45 * times, 49 * times, &character, 16 * times, 359 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 45 * times, 49 * times, &character, 71 * times, 359 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 48 * times, 49 * times, &character, 119 * times, 359 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 48 * times, 48 * times, &character, 168 * times, 359 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 48 * times, 49 * times, &character, 219 * times, 359 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 48 * times, 49 * times, &character, 268 * times, 359 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 48 * times, 48 * times, &character, 316 * times, 359 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 48 * times, 50 * times, &character, 364 * times, 359 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 48 * times, 49 * times, &character, 413 * times, 359 * times);
		Sleep(test_delay);
	}

}
void fist() {
	initgraph(window_width, window_height, SHOWCONSOLE);
	IMAGE character;
	loadimage(&character, character_pic_path, pic_w * times, pic_h * times, true);
	Dispose dis;
	dis.setImage(character, 0, 0);
	//dis.setCutoutImage(RGB(173, 218, 165), 0);
	character = dis.Putimage();
	while (1) {
		cleardevice();
		putimage(0, 0, 38 * times, 54 * times, &character, 13 * times, 235 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 45 * times, 54 * times, &character, 53 * times, 235 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 45 * times, 54 * times, &character, 97 * times, 235 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 45 * times, 54 * times, &character, 146 * times, 235 * times);
		Sleep(test_delay);
	}
}
void fall() {
	initgraph(window_width, window_height, SHOWCONSOLE);
	IMAGE character;
	loadimage(&character, character_pic_path, pic_w * times, pic_h * times, true);
	Dispose dis;
	dis.setImage(character, 0, 0);
	dis.setCutoutImage(RGB(173, 218, 165), 0);

	character = dis.Putimage();
	while (1) {
		cleardevice();
		putimage(0, 0, 45 * times, 53 * times, &character, 9 * times, 68 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 62 * times, 51 * times, &character, 57 * times, 68 * times);
		Sleep(test_delay);
	}
}
void fire_1() {
	initgraph(window_width, window_height, SHOWCONSOLE);
	IMAGE character;
	loadimage(&character, character_pic_path, pic_w * times, pic_h * times, true);
	Dispose dis;
	dis.setImage(character, 0, 0);
	//dis.setCutoutImage(RGB(173, 218, 165), 0);
	
	character = dis.Putimage();
	while (1) {
		cleardevice();
		putimage(0, 0, 45 * times, 57 * times, &character, 7 * times, 123 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 50 * times, 57 * times, &character, 51 * times, 123 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 60 * times, 57 * times, &character, 99 * times, 123 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 60 * times, 49 * times, &character, 7 * times, 183 * times);
		Sleep(test_delay);
		for (int x = 100; x < window_width; x+=10) {
			putimage(x, 0, 60 * times, 30 * times, &character,  158* times, 123 * times);
			Sleep(30);
		}
	}
}
void fire_2() {
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
		putimage(0, 0, 47 * times, 48 * times, &character, 220 * times, 130 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 47 * times, 48 * times, &character, 265 * times, 130 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 47 * times, 48 * times, &character, 310 * times, 130 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 47 * times, 48 * times, &character, 355 * times, 130 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 47 * times, 48 * times, &character, 401 * times, 130 * times);
		Sleep(test_delay);



		cleardevice();
		putimage(0, 0, 35 * times, 45 * times, &character, 218 * times, 189 * times);
		Sleep(test_delay);
		while (1) {
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
		}
	}
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
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 30 * times, 128 * times, &character, 63 * times, 658 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 30 * times, 128 * times, &character, 89 * times, 658 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 30 * times, 128 * times, &character, 116 * times, 658 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 30 * times, 128 * times, &character, 144 * times, 658 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 30 * times, 128 * times, &character, 174 * times, 658 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 30 * times, 128 * times, &character, 205 * times, 658 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 37 * times, 130 * times, &character, 240 * times, 658 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 37 * times, 130 * times, &character, 282 * times, 658 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 45 * times, 130 * times, &character, 325 * times, 658 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 45 * times, 130 * times, &character, 370 * times, 658 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 45 * times, 130 * times, &character, 232 * times, 710 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 45 * times, 130 * times, &character, 275 * times, 710 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 48 * times, 128 * times, &character, 318 * times, 710 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 0, 48 * times, 128 * times, &character, 364 * times, 710 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 76*times, 48* times, 53 * times, &character, 93 * times, 860 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 76 * times, 48 * times, 52 * times, &character, 139 * times, 860 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 76 * times, 48 * times, 52 * times, &character, 186 * times, 860 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 76 * times, 48 * times, 52 * times, &character, 228 * times, 860 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 76 * times, 46 * times, 52 * times, &character, 271 * times, 860 * times);
		Sleep(test_delay);
		cleardevice();
		putimage(0, 76 * times, 48 * times, 52 * times, &character, 310 * times, 860 * times);
		Sleep(test_delay);
	}
}
