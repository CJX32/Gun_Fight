#include "functions.h"
void loadfont(LOGFONT* font,int height,int degree) {
	gettextstyle(font);
	font->lfHeight = height;
	font->lfEscapement = degree*10;
	font->lfQuality = ANTIALIASED_QUALITY;
	_tcscpy_s(font->lfFaceName, _T("ºÚÌå"));
	settextstyle(font);
}
void draw_button(int left,int top,int right,int buttom,LPCTSTR string,int state,int flag) {
	COLORREF button_back_color;
	if (flag != state)
		button_back_color = RGB(button_back_r, button_back_g, button_back_b);
	else
		button_back_color = RGB(button_chback_r,button_chback_g,button_chback_b);
	setfillcolor(button_back_color);
	setlinecolor(button_back_color);
	fillrectangle(left+7, top+7, right+7, buttom+7);

	COLORREF button_front_color;
	if (flag != state)
		button_front_color = RGB(button_front_r, button_front_g, button_front_b);
	else
		button_front_color = RGB(button_chfront_r, button_chfront_g, button_chfront_b);
	setfillcolor(button_front_color);
	setlinecolor(button_front_color);
	fillrectangle(left, top, right, buttom);

	LOGFONT font;
	loadfont(&font, (right-left)/3, 0);
	outtextxy(left+15, top+15, string);

}
//w=119 a=97 s=113 d=100
int key_dect() {
	static int mode;
	static int key_down,key;
	static clock_t ori;
	clock_t current;
	if (!mode) {
		key_down = _kbhit();
		if (key_down) {
			mode = 1;
			ori = clock();
		}
		else
			key = 0;
	}
	else if (mode == 1) {
		current = clock();
		if (current - ori > 70) {
			if (_kbhit() == key_down && key_down==1) {
				key=_getch();
				mode = 2;
			}
			else
			mode = 0;
		}
	}
	else if (mode == 2) {
		if (_kbhit())
			key = _getch();
		else {
			key = 0;
			mode = 0;
		}
	}
	return key;
}


void update(Status *st,int key) {
	static int flag;
	if (key == 100) {
		st->dir = Right;
		st->walk = 1;
	}
	else if (key == 97) {
		st->dir = Left;
		st->walk = 1;
	}
	else {
		st->walk = 0;
	}
}
void rlmirror(IMAGE* ori)
{
	printf("%d\n", ori->getwidth());
	DWORD* N = GetImageBuffer(ori);
	for (int hei = 0; hei < ori->getheight(); hei++)
		for (int low = 0, wid = ori->getwidth() - 1; low < wid; low++, wid--)
		{
			COLORREF l = N[hei * ori->getwidth() + low];
			N[hei * ori->getwidth() + low] = N[hei * ori->getwidth() + wid];
			N[hei * ori->getwidth() + wid] = l;
		}
}
