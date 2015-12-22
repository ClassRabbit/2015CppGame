#include "User.h"
using namespace std;

int User::get_life()		// 체력값을 리턴함
{
	return life;
}

void User::set_life(int l)			// 체력값을 설정함
{
	life = l;
}

void User::create()		// user을 생성함(초기 위치에 그린다, 스테이지 시작시 유저생성을 위한 장치)
{
	x=30;				//초기 user x좌표값 30
	y=25;				//초기 user y좌표값 25
	c="○";				//user이미지1 
	c2="┼";			//user이미지2
	set_life(3);		//체력 3으로 설정
	print_object();		//현 좌표값(x,y)에 user출력
}
void User::remove()		// user를 제거함(스테이지 종료시 유저삭제를 위한 장치)
{
	erase_object();		//현위치의 user를 지움
}

void User::move_user(int key)		// user의 좌표값 이동(키 입력을 통해 유저의 좌표를 이동시킨다)
{
	switch(key) {					//키입력 값에 따라 이동조절
			
		
		case 75:				//key값이 75, 즉 왼쪽 방향키일시
			if(x>1) x-=2;		
			break;

		// 오른쪽 방향키
		case 77:				//key값이 77, 즉 오른쪽 방향키일시
			if(x<(CONSOLE_X)-2) x+=2;	//x의 좌표값이 오른쪽끝벽에 붙어있지 않으면 오른쪽으로 이동
			break;
	}
}

void User::print_object()					//오브잭트의 오브잭트 출력함수를 오버라이드
{											//이미지가 2개짜리임으로 오버라이드한다. 기존은 1개만 출력가능
	move_cursor(x+CONSOLE_MARGIN_X,y+CONSOLE_MARGIN_Y-1);	//현좌표에서 y값으로 -1위치에 ○ 출력
	cout<<c;
	move_cursor(x+CONSOLE_MARGIN_X,y+CONSOLE_MARGIN_Y);		//현좌표에서 y값위치에 ┼ 출력
	cout<<c2;
}

void User::erase_object()					//오브잭트의 오브잭트 출력함수를 오버라이드
{											//이미지가 2개짜리임으로 오버라이드한다. 기존은 1개만 출력가능
	move_cursor(x+CONSOLE_MARGIN_X,y+CONSOLE_MARGIN_Y-1);	//현좌표에서 y값으로 -1위치에 " "을 출력을 통한 덮어쓰기 지우기	
	cout<<" ";
	move_cursor(x+CONSOLE_MARGIN_X,y+CONSOLE_MARGIN_Y);		//현좌표에서 y값 위치에 " "을 출력을 통한 덮어쓰기 지우기		
	cout<<" ";
}

void User::damage()			// 데미지 입었을시 이 함수를 호출시 체력이 1 깍인다.
{
	life--;					//라이프 1감소
}
