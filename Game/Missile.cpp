#include "Missile.h"

using namespace std;

Missile::Missile() { 
		speed=rand()%10+3;
		exist=false;
}

// 장애물 생성 함수
void Missile::create(Bob* rbob) { 
	x=rand()%((CONSOLE_X-1)/2+1)*2;
	y= 1;
	set_color(8,0);//색상
	c="▽";
	c2="□";
	bob = rbob;

	exist=true;
	set_color(15,0);//색 원래대로
	print_object();
}

void Missile::remove() {
	exist=false;
	erase_object();
}

// Bullet 이동 함수
void Missile::move(int count) { 
	set_color(8,0);//색상
	if(exist) { // 덩어리가 존재하는 경우
		
		if(y==25) {
			exist=false;
			speed=rand()%10+3;
			erase_object();
			bob->create(x,y);

		}
		else if (y>=0 && count % speed == 0) {
			erase_object();
			y++;
			print_object();
		}

	}
	else { // 덩어리가 존재하지 않을 경우
		if(count%10+3==speed) {
			create(bob);
		}
	}
	set_color(15,0);//색상원래대로
}

void Missile::print_object() {
	move_cursor(x+CONSOLE_MARGIN_X,y+CONSOLE_MARGIN_Y);
	cout<<c;
	move_cursor(x+CONSOLE_MARGIN_X,y+CONSOLE_MARGIN_Y-1);
	cout<<c2;
}

void Missile::erase_object() {
	move_cursor(x+CONSOLE_MARGIN_X,y+CONSOLE_MARGIN_Y-1);
	cout<<" ";
	move_cursor(x+CONSOLE_MARGIN_X,y+CONSOLE_MARGIN_Y);
	cout<<" ";
}


void Missile::crash(User* user)
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