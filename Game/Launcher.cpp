#include "Launcher.h"


void Launcher::set_game(int stage, User *user, Bullet bullet[], Missile missile[], Bob bob[])
{
	user->create();
	for(int i=0; i<4*stage; i++)
	{
		bullet[i].create();
	}
	for(int i=0; i<2*stage; i++)
	{
		missile[i].create(&bob[i]);
	}
}

void Launcher::check_crash(int stage, User *user, Bullet bullet[], Missile missile[], Bob bob[])
{
	for(int i=0; i<4*stage; i++)
	{
		bullet[i].crash(user);
	}
	for(int i=0; i<2*stage; i++)
	{
		missile[i].crash(user);
	}
	for(int i=0; i<2*stage; i++)
	{
		bob[i].crash(user);
	}
}


void Launcher::move_object(int stage, int count, Bullet bullet[], Missile missile[], Bob bob[])
{
	for(int i=0; i<4*stage; i++)
	{
		bullet[i].move(count);
	}
	for(int i=0; i<2*stage; i++)
	{
		missile[i].move(count);
	}
	for(int i=0; i<2*stage; i++)
	{
		bob[i].move(count);
	}
}

void Launcher::finish_game(int stage, User *user, Bullet bullet[], Missile missile[], Bob bob[])
{
	user->remove();
	for(int i=0; i<4*stage; i++)
	{
		bullet[i].remove();
	}
	for(int i=0; i<2*stage; i++)
	{
		missile[i].remove();
	}
	for(int i=0; i<2*stage; i++)
	{
		bob[i].remove();
	}

}
