#include "menu.h"
int menu(void){
	int option=0;
	clock_t start, end;
	LOGFONT font;
	IMAGE background;
	MOUSEMSG m;
	char start_str[20] = "Start Game";
	char options_str[20] = "Options";
	char producer_str[20] = "Producer";
	char exit_str[20] = "exit";
	POINT pts[4][4] = { { {0, 210}, {0, 280}, {1100, 180},{1100,110 } },
						{ {0, 295}, {0, 365}, {1100, 265},{1100,195 } },
						{ {0, 370}, {0, 440}, {1100, 340},{1100,270 } },
						{ {0, 450}, {0, 520}, {1100, 420},{1100,350 } } };

	initgraph(window_width, window_height, SHOWCONSOLE);
	loadimage(&background, menu_back_path,window_width,window_height,1);
	setbkmode(TRANSPARENT);
	
	putimage(0, 0, &background);
	COLORREF color = RGB(menu_bar_r, menu_bar_g, menu_bar_b);
	setfillcolor(color);
	setlinecolor(color);
	while (!option) {
		start = clock();
		m = GetMouseMsg();
		BeginBatchDraw();
		cleardevice();
		putimage(0, 0, &background);
		display_bar(m, pts);
		display_title(&font);
		display_button(m, font, start_str, options_str, producer_str, exit_str);
		EndBatchDraw();
		option = menu_choice(m);
		end = clock();
		/*if((end-start)< 1000 / frame_rate)
		Sleep(1000 / frame_rate - (end - start));*/
	}
	return option;
}

void display_button(MOUSEMSG m, LOGFONT font,char* start_str, char* options_str, char* producer_str, char* exit_str) {
	if (m.x >= 730 && m.x < 1050) {
		if (m.y >= 130 && m.y <= 220) {
			loadfont(&font,50,7);
			outtextxy(800, 150, start_str);
			loadfont(&font, 40, 7);
			outtextxy(750, 240, options_str);
			outtextxy(830, 310, producer_str);
			outtextxy(800, 390, exit_str);
		}
		else if (m.y > 220 && m.y <= 290) {
			loadfont(&font, 40, 7);
			outtextxy(800, 150, start_str);
			loadfont(&font, 50, 7);
			outtextxy(750, 240, options_str);
			loadfont(&font, 40, 7);
			outtextxy(830, 310, producer_str);
			outtextxy(800, 390, exit_str);
		}
		else if (m.y >= 290 && m.y <= 370) {
			loadfont(&font, 40, 7);
			outtextxy(800, 150, start_str);
			outtextxy(750, 240, options_str);
			loadfont(&font, 50, 7);
			outtextxy(830, 310, producer_str);
			loadfont(&font, 40, 7);
			outtextxy(800, 390, exit_str);
		}
		else if (m.y >= 370 && m.y <= 440) {
			loadfont(&font, 40, 7);
			outtextxy(800, 150, start_str);
			outtextxy(750, 240, options_str);
			outtextxy(830, 310, producer_str);
			loadfont(&font, 50, 7);
			outtextxy(800, 390, exit_str);
		}
		else {
			loadfont(&font, 40, 7);
			outtextxy(800, 150, start_str);
			outtextxy(750, 240, options_str);
			outtextxy(830, 310, producer_str);
			outtextxy(800, 390, exit_str);
		}
	}
	else {
		loadfont(&font, 40, 7);
		outtextxy(800, 150, start_str);
		outtextxy(750, 240, options_str);
		outtextxy(830, 310, producer_str);
		outtextxy(800, 390, exit_str);
	}
}
void display_bar(MOUSEMSG m, POINT pts[4][4]) {
	if (m.x >= 730 && m.x < 1050) {
		if (m.y >= 130 && m.y <= 220) {
			fillpolygon(pts[0], 4);
		}
		else if (m.y > 220 && m.y <= 290) {
			fillpolygon(pts[1], 4);
		}
		else if (m.y >= 290 && m.y <= 370) {
			fillpolygon(pts[2], 4);
		}
		else if (m.y >= 370 && m.y <= 440) {
			fillpolygon(pts[3], 4);
		}
	
	}
}
void display_title(LOGFONT *font){
	loadfont(font, 100, 0);
	outtextxy(100, 500, "Gun Fight");
}
int menu_choice(MOUSEMSG m) {
	if (m.mkLButton== LM_Down) {
		if (m.x >= 730 && m.x < 1050) {
			if (m.y >= 130 && m.y <= 220) {
				return 1;
			}
			else if (m.y > 220 && m.y <= 290) {
				return 2;
			}
			else if (m.y >= 290 && m.y <= 370) {
				return 3;
			}
			else if (m.y >= 370 && m.y <= 440) {
				return 4;
			}
		}
	}
	return 0;
}