#include "Object.h"
#include "Bob.h"
#include "User.h"

#ifndef MISSILE_H
#define MISSILE_H

class Missile :public Object{
private:
	int speed;
	bool exist;
	string c2;
	Bob* bob;
public:
	Missile();//장애물 생성자
	void create(Bob* rbob);//장애물 생성함수
	void remove();
	void move(int count);//장애물 이동함수
	void print_object();
	void erase_object();
	void crash(User* user);
};

#endif