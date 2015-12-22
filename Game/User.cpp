#include "User.h"
using namespace std;

int User::get_life()		// ü�°��� ������
{
	return life;
}

void User::set_life(int l)			// ü�°��� ������
{
	life = l;
}

void User::create()		// user�� ������(�ʱ� ��ġ�� �׸���, �������� ���۽� ���������� ���� ��ġ)
{
	x=30;				//�ʱ� user x��ǥ�� 30
	y=25;				//�ʱ� user y��ǥ�� 25
	c="��";				//user�̹���1 
	c2="��";			//user�̹���2
	set_life(3);		//ü�� 3���� ����
	print_object();		//�� ��ǥ��(x,y)�� user���
}
void User::remove()		// user�� ������(�������� ����� ���������� ���� ��ġ)
{
	erase_object();		//����ġ�� user�� ����
}

void User::move_user(int key)		// user�� ��ǥ�� �̵�(Ű �Է��� ���� ������ ��ǥ�� �̵���Ų��)
{
	switch(key) {					//Ű�Է� ���� ���� �̵�����
			
		
		case 75:				//key���� 75, �� ���� ����Ű�Ͻ�
			if(x>1) x-=2;		
			break;

		// ������ ����Ű
		case 77:				//key���� 77, �� ������ ����Ű�Ͻ�
			if(x<(CONSOLE_X)-2) x+=2;	//x�� ��ǥ���� �����ʳ����� �پ����� ������ ���������� �̵�
			break;
	}
}

void User::print_object()					//������Ʈ�� ������Ʈ ����Լ��� �������̵�
{											//�̹����� 2��¥�������� �������̵��Ѵ�. ������ 1���� ��°���
	move_cursor(x+CONSOLE_MARGIN_X,y+CONSOLE_MARGIN_Y-1);	//����ǥ���� y������ -1��ġ�� �� ���
	cout<<c;
	move_cursor(x+CONSOLE_MARGIN_X,y+CONSOLE_MARGIN_Y);		//����ǥ���� y����ġ�� �� ���
	cout<<c2;
}

void User::erase_object()					//������Ʈ�� ������Ʈ ����Լ��� �������̵�
{											//�̹����� 2��¥�������� �������̵��Ѵ�. ������ 1���� ��°���
	move_cursor(x+CONSOLE_MARGIN_X,y+CONSOLE_MARGIN_Y-1);	//����ǥ���� y������ -1��ġ�� " "�� ����� ���� ����� �����	
	cout<<" ";
	move_cursor(x+CONSOLE_MARGIN_X,y+CONSOLE_MARGIN_Y);		//����ǥ���� y�� ��ġ�� " "�� ����� ���� ����� �����		
	cout<<" ";
}

void User::damage()			// ������ �Ծ����� �� �Լ��� ȣ��� ü���� 1 ���δ�.
{
	life--;					//������ 1����
}
