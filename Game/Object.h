
#ifndef OBJECT_H
#define OBJECT_H

#include <Windows.h>
#include <conio.h>
#include <time.h>
#include <iostream>
#include <string>
#include <string.h>

#define CONSOLE_MARGIN_X 1			// �ܼ� x�� ����
#define CONSOLE_MARGIN_Y 1			// �ܼ� y�� ����
#define CONSOLE_X 80				// �ܼ� x�� ����
#define CONSOLE_Y 25				// �ܼ� y�� ����
using namespace std;

class Object{						//user, �ǻ�ü, ���� �⺻���
protected:
	int x;							// x ��ǥ
	int y;							// y ��ǥ
	string c;						// �� ������Ʈ�� ��¸��

public:
	
	int get_X();					// x��ǥ���� ���Ϲ���

	int get_Y();					// y��ǥ���� ���Ϲ���

	void set_X(int X);				// x��ǥ���� ��������

	void set_Y(int Y);				// y��ǥ���� ��������

	void set_color(int color, int bgcolor);		//��� �� ����
	void move_cursor(int x,int y);				//��� �� Ŀ����ġ ����

	void print_object();						//������Ʈ�� �ش� ��ǥ�� �̹��� ���
	void erase_object();						//������Ʈ�� �ش� ��ǥ�� �̹��� �����

	
};
#endif
