#include "initialization.h"
void set_init(Settings* set) {
	set->music = 1;
	set->voice = 1;

}
void status_init(Status* st) {
	st->dir = Right;
	st->walk = 0;
	st->fist = 0;
	st->attack_while_walk = 0;
	st->fire = 0;
	st->fire_2 = 0;
}
void character_init(IMAGE *character) {
	loadimage(character, character_pic_path, pic_w * times, pic_h * times, true);
	Dispose dis;
	dis.setImage(*character, 0, 0);
	dis.setCutoutImage(RGB(173, 218, 165), 0);
	dis.setCutoutImage(RGB(255, 0, 0), 0);
	dis.setCutoutImage(RGB(156, 181, 182), 0);
	*character = dis.Putimage();
}
void bullet_list_init(bullet_list *t) {
	t->num = 0;
}