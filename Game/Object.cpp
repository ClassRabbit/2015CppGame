#include "Object.h"

using namespace std;

int Object::get_X() {	// x��ǥ���� ���Ϲ���
	return x;
} 

int Object::get_Y() {	// y��ǥ���� ���Ϲ���
	return y;
}

void Object::set_X(int X) {		// x��ǥ���� ��������
	x=X;
}

void Object::set_Y(int Y) {		// y��ǥ���� ��������
	y=Y; 
}

void Object::set_color(int color, int bgcolor) {	//��� �� ����
	color &= 0xf;
	bgcolor &= 0xf;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}

void Object::move_cursor(int x, int y)				//��� �� Ŀ����ġ ����
{
	COORD pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

void Object::print_object() {						//������Ʈ�� �ش� ��ǥ�� �̹��� ���
	move_cursor(x+CONSOLE_MARGIN_X,y+CONSOLE_MARGIN_Y);		//������Ʈ�� ��ǥ�� �ܼ���ġ���� ����� ��� ��ǥ�� Ŀ���̵�
	cout<<c;										//Ŀ����ġ�� �ش� ������Ʈ �̹��� ���
}

void Object::erase_object() {						//������Ʈ�� �ش� ��ǥ�� �̹��� �����
	move_cursor(x+CONSOLE_MARGIN_X,y+CONSOLE_MARGIN_Y);			//������Ʈ�� ��ǥ�� �ܼ���ġ���� ����� ��� ��ǥ�� Ŀ���̵�
	cout<<" ";											//Ŀ�� ��ġ�� " " ������⸦ ���� �����
}