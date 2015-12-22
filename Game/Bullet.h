#include "Object.h"
#include "User.h"

#ifndef BULLET_H
#define BULLET_H

class Bullet :public Object{
private:
	int speed;
	bool exist;
public:
	Bullet();
	void create();
	void remove();
	void move(int count);
	void crash(User* user);
	
};

#endif