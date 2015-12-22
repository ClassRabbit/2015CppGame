#include "BOB.h"

using namespace std;

Bob::Bob() { 
		exist=false;
}

void Bob::create(int rx, int ry) { 
	x=rx;
	y= ry;
	time=0;
	set_color(12,0);
	c="бс";
		
	exist=true;
	set_color(15,0);
	print_object();
}

void Bob::remove() {
	exist=false;
	erase_object();
}

void Bob::move(int count) { 
	set_color(8,0);
	if(exist) { 
		
		if(time==50) {
			erase_object();
			exist=false;

		}
		else if (time>=0) {
			time++;
		}

	}
	
	set_color(15,0);
}

void Bob::print_object() {
	set_color(12,0);
	move_cursor(x+CONSOLE_MARGIN_X,y+CONSOLE_MARGIN_Y);
	cout<<"бс";
	move_cursor(x+CONSOLE_MARGIN_X,y+CONSOLE_MARGIN_Y-1);
	cout<<"бс";
	move_cursor(x+CONSOLE_MARGIN_X-2,y+CONSOLE_MARGIN_Y);
	cout<<"бс";
	move_cursor(x+CONSOLE_MARGIN_X+2,y+CONSOLE_MARGIN_Y);
	cout<<"бс";
	set_color(15,0);
}

void Bob::erase_object() {
	move_cursor(x+CONSOLE_MARGIN_X,y+CONSOLE_MARGIN_Y);
	cout<<" ";
	move_cursor(x+CONSOLE_MARGIN_X,y+CONSOLE_MARGIN_Y-1);
	cout<<" ";
	move_cursor(x+CONSOLE_MARGIN_X-2,y+CONSOLE_MARGIN_Y);
	cout<<" ";
	move_cursor(x+CONSOLE_MARGIN_X+2,y+CONSOLE_MARGIN_Y);
	cout<<" ";
}

void Bob::crash(User* user)
{
	if(exist) {
		if((user->get_X() == get_X()) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X() == get_X()) && (user->get_Y()+1 ==get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X() == get_X()-1) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X() == get_X()-1) && (user->get_Y()+1 == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X() == get_X()+1) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X() == get_X()+1) && (user->get_Y()+1 == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()-1 == get_X()) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()-1 == get_X()) && (user->get_Y()+1 == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()-1 == get_X()-1) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()-1 == get_X()-1) && (user->get_Y()+1 == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()+1 == get_X()) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()+1 == get_X()) && (user->get_Y()+1 == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()+1 == get_X()+1) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()+1 == get_X()+1) && (user->get_Y()+1 == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}




		else if((user->get_X() == get_X()-2) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X() == get_X()-2) && (user->get_Y()+1 ==get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()-1 == get_X()-2) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()-1 == get_X()-2) && (user->get_Y()+1 == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()+1 == get_X()-2) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()+1 == get_X()-2) && (user->get_Y()+1 == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}





		else if((user->get_X() == get_X()-3) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X() == get_X()-3) && (user->get_Y()+1 ==get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()-1 == get_X()-3) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()-1 == get_X()-3) && (user->get_Y()+1 == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()+1 == get_X()-3) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()+1 == get_X()-3) && (user->get_Y()+1 == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}

		else if((user->get_X() == get_X()+2) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X() == get_X()+2) && (user->get_Y()+1 ==get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()-1 == get_X()+2) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()-1 == get_X()+2) && (user->get_Y()+1 == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()+1 == get_X()+2) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()+1 == get_X()+2) && (user->get_Y()+1 == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}



		else if((user->get_X() == get_X()+3) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X() == get_X()+3) && (user->get_Y()+1 ==get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()-1 == get_X()+3) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()-1 == get_X()+3) && (user->get_Y()+1 == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()+1 == get_X()+3) && (user->get_Y() == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
		else if((user->get_X()+1 == get_X()+3) && (user->get_Y()+1 == get_Y())) {
			user->damage();
			exist=false;
			erase_object();
			user->print_object();
		}
	}
}
