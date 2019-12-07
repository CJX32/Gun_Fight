#include "options.h"
void options(Settings *set) {
	LOGFONT font;
	int options=0;
	Settings temp_set;
	temp_set = *set;
	IMAGE back;
	loadimage(&back, options_back_path, window_width, window_height, 1);
	
	while (!options) {
		MOUSEMSG m;
		m = GetMouseMsg();
		BeginBatchDraw();
		cleardevice();
		putimage(0, 0, &back);
		options=display_button(m,&temp_set);
		EndBatchDraw();
	}
	if (options == save) {
		set->music = temp_set.music;
		set->voice = temp_set.voice;
	}
}
int display_button(MOUSEMSG m,Settings *set) {
	LOGFONT font;
	loadfont(&font, 40, 0);
	outtextxy(230, 475, "����");
	outtextxy(600, 475, "��Ч");
	if (m.x > 155 && m.x <= 265 && m.y > 530 && m.y <= 590) {
		draw_button(150, 525, 270, 595, "����", set->music, open);
		draw_button(300, 530, 410, 590, "�ر�", set->music, shut_off);
		draw_button(525, 530, 635, 590, "����", set->voice, open);
		draw_button(670, 530, 780, 590, "�ر�", set->voice, shut_off);
		if (m.mkLButton == LM_Down)
			set->music = 1;
	}
	else if (m.x > 300 && m.x <= 410 && m.y > 530 && m.y <= 590) {
		draw_button(155, 530, 265, 590, "����", set->music, open);
		draw_button(295, 525, 415, 595, "�ر�", set->music, shut_off);
		draw_button(525, 530, 635, 590, "����", set->voice, open);
		draw_button(670, 530, 780, 590, "�ر�", set->voice, shut_off);
		if (m.mkLButton == LM_Down)
			set->music = 0;
	}
	else if (m.x > 525 && m.x <= 635 && m.y > 530 && m.y <= 590) {
		draw_button(155, 530, 265, 590, "����", set->music, open);
		draw_button(300, 530, 410, 590, "�ر�", set->music, shut_off);
		draw_button(520, 525, 640, 595, "����", set->voice, open);
		draw_button(670, 530, 780, 590, "�ر�", set->voice, shut_off);
		if (m.mkLButton == LM_Down)
			set->voice = 1;
	}
	else if (m.x > 670 && m.x <= 780 && m.y > 530 && m.y <= 590) {
		draw_button(155, 530, 265, 590, "����", set->music, open);
		draw_button(300, 530, 410, 590, "�ر�", set->music, shut_off);
		draw_button(525, 530, 635, 590, "����", set->voice, open);
		draw_button(665, 525, 785, 595, "�ر�", set->voice, shut_off);
		if (m.mkLButton == LM_Down)
			set->voice = 0;
	}
	else {
		draw_button(155, 530, 265, 590, "����", set->music, open);
		draw_button(300, 530, 410, 590, "�ر�", set->music, shut_off);
		draw_button(525, 530, 635, 590, "����", set->voice, open);
		draw_button(670, 530, 780, 590, "�ر�", set->voice, shut_off);
	}
	if (m.x >= 825 && m.x <= 935 && m.y >= 620 && m.y <= 680) {
		draw_button(820, 615, 940, 685, "ȡ��", true, false);
		draw_button(945, 620, 1055, 680, "����", true, false);
		if (m.mkLButton == LM_Down)
			return cancle;
	}
	else if (m.x >= 945 && m.x <= 1055 && m.y >= 620 && m.y <= 680) {
		draw_button(825, 620, 935, 680, "ȡ��", true, false);
		draw_button(940, 615, 1060, 685, "����", true, false);
		if (m.mkLButton == LM_Down)
			return save;
	}
	else {
		draw_button(825, 620, 935, 680, "ȡ��", true, false);
		draw_button(945, 620, 1055, 680, "����", true, false);
	}
	return 0;
}