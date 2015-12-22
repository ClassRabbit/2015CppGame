#include "Object.h"

#ifndef USER_H
#define USER_H

class User:public Object{						//user Ŭ����, ������Ʈ Ŭ������ ��ӹ���
private:
	int life;									// ü��(HP)
	string c2;									// user�� 2���ڷ� �������� ���ڸ� �ϳ� �߰���
public:
	int get_life();								// ü�°��� ������
	void set_life(int life);					// ü�°��� ������
	void create();								// user�� ������(�ʱ� ��ġ�� �׸���, �������� ���۽� ���������� ���� ��ġ)
	void remove();								// user�� ������(�������� ����� ���������� ���� ��ġ)
	void move_user(int key);					// user�� ��ǥ�� �̵�(Ű �Է��� ���� ������ ��ǥ�� �̵���Ų��)
	void print_object();						// user�� �ش� ��ǥ���� ���� �̹��� ���
	void erase_object();						// user�� �ش� ��ǥ���� ���� �̹��� �����
	void damage();								// ������ �Ծ����� �� �Լ��� ȣ��� ü���� 1 ���δ�.
};

#endif