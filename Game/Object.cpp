#include "Object.h"

using namespace std;

int Object::get_X() {	// x좌표값을 리턴받음
	return x;
} 

int Object::get_Y() {	// y좌표값을 리턴받음
	return y;
}

void Object::set_X(int X) {		// x좌표값을 설정받음
	x=X;
}

void Object::set_Y(int Y) {		// y좌표값을 설정받음
	y=Y; 
}

void Object::set_color(int color, int bgcolor) {	//출력 색 설정
	color &= 0xf;
	bgcolor &= 0xf;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}

void Object::move_cursor(int x, int y)				//출력 할 커서위치 설정
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

void Object::print_object() {						//오브잭트의 해당 좌표에 이미지 출력
	move_cursor(x+CONSOLE_MARGIN_X,y+CONSOLE_MARGIN_Y);		//오브잭트에 좌표에 콘솔위치값을 계산한 결과 좌표에 커서이동
	cout<<c;										//커서위치에 해당 오브잭트 이미지 출력
}

void Object::erase_object() {						//오브잭트의 해당 좌표에 이미지 지우기
	move_cursor(x+CONSOLE_MARGIN_X,y+CONSOLE_MARGIN_Y);			//오브잭트에 좌표에 콘솔위치값을 계산한 결과 좌표에 커서이동
	cout<<" ";											//커서 위치에 " " 을덮어쓰기를 통한 지우기
}