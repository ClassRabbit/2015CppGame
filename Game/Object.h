
#ifndef OBJECT_H
#define OBJECT_H

#include <Windows.h>
#include <conio.h>
#include <time.h>
#include <iostream>
#include <string>
#include <string.h>

#define CONSOLE_MARGIN_X 1			// 콘솔 x축 여백
#define CONSOLE_MARGIN_Y 1			// 콘솔 y축 여백
#define CONSOLE_X 80				// 콘솔 x축 길이
#define CONSOLE_Y 25				// 콘솔 y축 길이
using namespace std;

class Object{						//user, 피사체, 멥의 기본요소
protected:
	int x;							// x 좌표
	int y;							// y 좌표
	string c;						// 이 오브젝트의 출력모양

public:
	
	int get_X();					// x좌표값을 리턴받음

	int get_Y();					// y좌표값을 리턴받음

	void set_X(int X);				// x좌표값을 설정받음

	void set_Y(int Y);				// y좌표값을 설정받음

	void set_color(int color, int bgcolor);		//출력 색 설정
	void move_cursor(int x,int y);				//출력 할 커서위치 설정

	void print_object();						//오브잭트의 해당 좌표에 이미지 출력
	void erase_object();						//오브잭트의 해당 좌표에 이미지 지우기

	
};
#endif
