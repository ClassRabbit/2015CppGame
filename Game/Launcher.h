#include "Bob.h"
#include "Bullet.h"
#include "Missile.h"
#include "User.h"

#ifndef LAUNCHER_H
#define LAUNCHER_H

class Launcher {
public:
	void set_game(int stage, User *user, Bullet bullet[], Missile missile[], Bob bob[]);
	void check_crash(int stage, User *user, Bullet bullet[], Missile missile[], Bob bob[]);
	void move_object(int stage, int count, Bullet bullet[], Missile missile[], Bob bob[]);
	void finish_game(int stage, User *user, Bullet bullet[], Missile missile[], Bob bob[]);
};


#endif
