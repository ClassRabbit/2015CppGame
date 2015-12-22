#include "Map.h"
using namespace std;

void Map::end_game()
{
	move_cursor((CONSOLE_X+CONSOLE_MARGIN_X)/2,(CONSOLE_Y+CONSOLE_MARGIN_Y)/2);
	set_color(12,0);
	cout<<"END GAME\t";
	set_color(15,0);
}

void Map::clear_game()
{
	move_cursor((CONSOLE_X+CONSOLE_MARGIN_X)/2,(CONSOLE_Y+CONSOLE_MARGIN_Y)/2);
	cout<<"CLEAR GAME\t";

}

void Map::show_stage(int stage)
{
	move_cursor((CONSOLE_X+CONSOLE_MARGIN_X)/2,(CONSOLE_Y+CONSOLE_MARGIN_Y)/2);
	set_color(12,0);
	cout<<"STAGE "<< stage;
	set_color(15,0);

}
void Map::erase_stage()
{
	move_cursor((CONSOLE_X+CONSOLE_MARGIN_X)/2,(CONSOLE_Y+CONSOLE_MARGIN_Y)/2);
	cout<<"                       ";

}


void Map::print_map()
{
	move_cursor(CONSOLE_MARGIN_X-1,CONSOLE_MARGIN_Y-1);
	for(int i=0;i<CONSOLE_X+3;i++) {
		cout<<"-";
	}
	for(int i=0;i<CONSOLE_Y+1;i++) {
		move_cursor(CONSOLE_MARGIN_X-1,CONSOLE_MARGIN_Y+i);
		cout<<"|";
		move_cursor(CONSOLE_MARGIN_X+CONSOLE_X+1,CONSOLE_MARGIN_Y+i);
		cout<<"|";
	}
	move_cursor(CONSOLE_MARGIN_X-1,CONSOLE_MARGIN_Y+CONSOLE_Y+1);
	for(int i=0;i<CONSOLE_X+3;i++) {
		cout<<"-";
	}
}

void Map::print_life(User *user)
{
	move_cursor(86,8);
	cout<<"HP : " << user->get_life();
}

void Map::print_stage(int stage)
{
	move_cursor(86,3);
	cout<<"STAGE " << stage;
}