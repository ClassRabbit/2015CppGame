#include "Object.h"
#include "User.h"

#ifndef BOB_H
#define BOB_H

class Bob :public Object{
private:
	int x2;
	bool exist;
	int time;
public:
	Bob();//장애물 생성자
	void create(int x,int y);
	void remove();
	void move(int count);
	void print_object();
	void erase_object();
	void crash(User *user);
};

#endif