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

void update(Status *st,int key) {
	static int flag;

	if (key == 1) {
		st->dir = Right;
		st->walk = 1;
		st->fist = 0;
		st->attack_while_walk = 0;
	}
	else if (key == 2) {
		st->dir = Left;
		st->walk = 1;
		st->fist = 0;
		st->attack_while_walk = 0;
	}
	else if (key == 3) {
		st->dir = Right;
		st->walk = 0;
		st->fist = 0;
		st->attack_while_walk=1;
	}
	else if (key == 4) {
		st->dir = Left;
		st->walk = 0;
		st->fist = 0;
		st->attack_while_walk = 1;
	}
	else if (key == 5) {
		st->walk = 0;
		st->attack_while_walk = 0;
		st->fist = 1;
	}
	else if (key == 6) {
		st->walk = 0;
		st->attack_while_walk = 0;
		st->fist = 0;
		st->fire = 1;
	}
	else if (key == 7) {
		st->walk = 0;
		st->attack_while_walk = 0;
		st->fist = 0;
		st->fire = 0;
		st->fire_2 = 1;
	}

	else {
		st->walk = 0;
		st->attack_while_walk = 0;
		st->fist = 0;
	}
}
void rlmirror(IMAGE* ori)
{
	DWORD* N = GetImageBuffer(ori);
	for (int hei = 0; hei < ori->getheight(); hei++)
		for (int low = 0, wid = ori->getwidth() - 1; low < wid; low++, wid--)
		{
			COLORREF l = N[hei * ori->getwidth() + low];
			N[hei * ori->getwidth() + low] = N[hei * ori->getwidth() + wid];
			N[hei * ori->getwidth() + wid] = l;
		}
}
int key_dect() {
	if (GetAsyncKeyState(key_D) != 0)
	{
		if (GetAsyncKeyState(key_O) != 0)
			return 3;
		return 1;
	}
	else if (GetAsyncKeyState(key_A) != 0) {
		if (GetAsyncKeyState(key_O) != 0)
			return 4;
		return 2;
	}
	else if (GetAsyncKeyState(key_I) != 0)
		return 5;
	else if (GetAsyncKeyState(key_O) != 0)
		return 6;
	else if (GetAsyncKeyState(key_P) != 0)
		return 7;
	return 0;
}
void bullet_add(bullet_list *t,int x,int y,int dir,int type) {
	
	if (t->num == 0) {
		t->list = (Bullet *)malloc(sizeof(Bullet));
		t->list->x = x;
		t->list->y = y;
		t->list->dir = dir;
		t->list->type = type;
		if (type == 2)
			t->list->flag = 1;
		t->num++;
	}
	else {
		t->list = (Bullet *)realloc(t->list,(++t->num)*sizeof(Bullet));
		t->list[t->num - 1].x = x;
		t->list[t->num - 1].y = y;
		t->list[t->num - 1].dir = dir;
		t->list[t->num - 1].type = type;
		if (type == 2)
			t->list->flag = 1;
	}

}