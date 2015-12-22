#include "Bullet.h"

using namespace std;

Bullet::Bullet() {
		speed=rand()%10+3;
		exist=false;
}

void Bullet::create() {
	x=rand()%((CONSOLE_X-1)/2+1)*2;
	y= 0;
	set_color(8,0);
	c="¡Ü";

	exist=true;
	set_color(15,0);
	print_object();
}

void Bullet::remove() {
	exist=false;
	erase_object();
}

void Bullet::move(int count) {
	set_color(8,0);
	if(exist) {
		if(y==25) {
			exist=false;
			speed=rand()%10+3;
			erase_object();
		}
		else if (y>=0 && count % speed == 0) {
			erase_object();
			y++;
			print_object();
		}

	}
	else {
		if(count%10+3==speed) {
			create();
		}
	}
	set_color(15,0);
}

void Bullet::crash(User* user)
{
	if(exist) {
		if((user->get_X() == get_X()) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			speed=rand()%10+3;
			erase_object();
			user->print_object();
		}
		else if((user->get_X() == get_X()) && (user->get_Y()+1 ==get_Y())) {
			user->damage();
			exist=false;
			speed=rand()%10+3;
			erase_object();
			user->print_object();
		}
		else if((user->get_X() == get_X()-1) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			speed=rand()%10+3;
			erase_object();
			user->print_object();
		}
		else if((user->get_X() == get_X()-1) && (user->get_Y()+1 == get_Y())) {
			user->damage();
			exist=false;
			speed=rand()%10+3;
			erase_object();
			user->print_object();
		}
		else if((user->get_X() == get_X()+1) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			speed=rand()%10+3;
			erase_object();
			user->print_object();
		}
		else if((user->get_X() == get_X()+1) && (user->get_Y()+1 == get_Y())) {
			user->damage();
			exist=false;
			speed=rand()%10+3;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()-1 == get_X()) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			speed=rand()%10+3;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()-1 == get_X()) && (user->get_Y()+1 == get_Y())) {
			user->damage();
			exist=false;
			speed=rand()%10+3;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()-1 == get_X()-1) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			speed=rand()%10+3;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()-1 == get_X()-1) && (user->get_Y()+1 == get_Y())) {
			user->damage();
			exist=false;
			speed=rand()%10+3;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()+1 == get_X()) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			speed=rand()%10+3;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()+1 == get_X()) && (user->get_Y()+1 == get_Y())) {
			user->damage();
			exist=false;
			speed=rand()%10+3;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()+1 == get_X()+1) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			speed=rand()%10+3;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()+1 == get_X()+1) && (user->get_Y()+1 == get_Y())) {
			user->damage();
			exist=false;
			speed=rand()%10+3;
			erase_object();
			user->print_object();
		}
	}
}
