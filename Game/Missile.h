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
	Missile();//��ֹ� ������
	void create(Bob* rbob);//��ֹ� �����Լ�
	void remove();
	void move(int count);//��ֹ� �̵��Լ�
	void print_object();
	void erase_object();
	void crash(User* user);
};

#endif