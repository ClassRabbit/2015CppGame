#include "Object.h"

#ifndef USER_H
#define USER_H

class User:public Object{						//user 클래스, 오브잭트 클래스를 상속받음
private:
	int life;									// 체력(HP)
	string c2;									// user은 2문자로 생겼으니 문자를 하나 추가함
public:
	int get_life();								// 체력값을 리턴함
	void set_life(int life);					// 체력값을 설정함
	void create();								// user을 생성함(초기 위치에 그린다, 스테이지 시작시 유저생성을 위한 장치)
	void remove();								// user를 제거함(스테이지 종료시 유저삭제를 위한 장치)
	void move_user(int key);					// user의 좌표값 이동(키 입력을 통해 유저의 좌표를 이동시킨다)
	void print_object();						// user의 해당 좌표값에 유저 이미지 출력
	void erase_object();						// user의 해당 좌표값에 유저 이미지 지우기
	void damage();								// 데미지 입었을시 이 함수를 호출시 체력이 1 깍인다.
};

#endif