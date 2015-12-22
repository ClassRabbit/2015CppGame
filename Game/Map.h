#include "Object.h"
#include "User.h"

#ifndef MAP_H
#define MAP_H
class Map:public Object{

public:
	void end_game(); 
	void clear_game();
	void print_map();
	void show_stage(int stage);
	void erase_stage();
	void print_life(User *user);
	void print_stage(int stage);
};

#endif