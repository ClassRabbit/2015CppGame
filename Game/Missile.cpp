#include "Missile.h"

using namespace std;

Missile::Missile() { 
		speed=rand()%10+3;
		exist=false;
}

// ��ֹ� ���� �Լ�
void Missile::create(Bob* rbob) { 
	x=rand()%((CONSOLE_X-1)/2+1)*2;
	y= 1;
	set_color(8,0);//����
	c="��";
	c2="��";
	bob = rbob;

	exist=true;
	set_color(15,0);//�� �������
	print_object();
}

void Missile::remove() {
	exist=false;
	erase_object();
}

// Bullet �̵� �Լ�
void Missile::move(int count) { 
	set_color(8,0);//����
	if(exist) { // ����� �����ϴ� ���
		
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
	else { // ����� �������� ���� ���
		if(count%10+3==speed) {
			create(bob);
		}
	}
	set_color(15,0);//����������
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