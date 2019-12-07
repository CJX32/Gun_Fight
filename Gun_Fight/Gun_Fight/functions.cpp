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
void set_init(Settings* set) {
	set->music = 1;
	set->voice = 1;

}