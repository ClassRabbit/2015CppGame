#include "Map.h"
#include "Launcher.h"
#include "User.h"
#include "Bullet.h"
#include "Missile.h"
#include "Bob.h"

using namespace std;


int main()
{
	Map map;						//��, �����ڸ� ����, ��������, ü�� ���
	User user;						//���� 
	Launcher launcher;				//��ó, ������������ �ǻ�ä ����, ���� ����, �浹 Ȯ��, �̵�, ����
	Bullet bullet[20];				//�Ѿ� �迭 ������������ *4�� ����(�̿�)
	Missile missile[10];			//�̻��� �迭 ������������ *2�� ����(�̿�)
	Bob bob[10];					//���� �迭 ������������ *2�� ����(�̿�)

	int key_value;					//�Է��� Ű ��
	int count = 0;					//�ð� ī��Ʈ 
	int stage = 1;					//�������� �� ���۰��� 1


	map.print_map();				//���α׷� ���۰� �Բ� ���� �׸���
	

	while(1){						//������������ �ݺ��� ���� ���α׷� ����, ���������� 5���������� �Ǹ� ���α׷� ����
		

		while(1) {							//���۽� �Ͻ�����ȿ��
			map.show_stage(stage);			//�߾ӿ� �������� �����۽ø� �׸���
			
			
			key_value=getch();				//Ű �Է°��� ���� �غ� �Ѵ�.

			if(key_value==13){				//���� ���͸� �����ٸ� (���Ͱ�=13)
				map.erase_stage();			//�������� �����۾��� �����
				break;						//�Ͻ����� ���
			}
			else if(key_value=='q'|| key_value==27) {		//���� q�� esc�� �����ٸ�
				map.end_game();								//�������� �����
				return 0;									//���ӳ�
			}
		}
		
		
		launcher.set_game(stage,&user,bullet,missile,bob);				//��ó�� ���� ���� ����,������������ ���� bullet,missile,bob�� create���ش�.
		map.print_stage(stage);											//�� �����ڸ��� stage�� ����Ѵ�.

		do {									//�������� ���ൿ�� ���ѹݺ�(�� �ʺ� Ȱ��)
			if(kbhit()) {						//Ű �Է��� �ִٸ�
				key_value=getch();				//�Է��� Ű ���� �����Ѵ�
				if(key_value==75 || key_value==77)		//Ű���� �� or ����
				{
					user.erase_object();				//���� user�� �׷������� �����
					user.move_user(key_value);			//������ Ű ���⿡ ���缭 ������ �̵��Ѵ�
					user.print_object();				//�̵��� ��ġ�� user�� �׸���
				}
			}
			
			launcher.check_crash(stage,&user,bullet,missile,bob);			//user�� �̵��� ��ġ���� ��ó������ ��� �ǻ�ü�� �����Ͽ� �浹Ȯ���� �Ѵ�.


			Sleep(10);									//�ʹ� ���� ���Ӽӵ��� �����ϱ����� 0.01�� ���α׷� ����
			count++;									//ī��Ʈ�� ������ �ð������� ǥ��

			map.print_life(&user);						//�̹� �ʿ��� �÷��̾��� ä���� ���
			launcher.move_object(stage,count,bullet,missile,bob);		//��ó�� ���� ��� �ǻ�ü�� �̵���Ų��

		} while(!(key_value=='q' || key_value==27 || count == 1000 || user.get_life() == 0));	//���� q�� esc�� �������ʾҰų� count�� 1000�� �������ʾҰų� (0.01��*1000) user�������� 0�� �ƴ϶�� ���� ������ ����



		//���� �� �ݺ����� ������ ���� �����ߴٴ°� �̹� ���������� �������� ����

		launcher.finish_game(stage,&user,bullet,missile,bob);		//���������� �������� ����ǻ�ü�� user�� �����

		if(user.get_life() == 0 || key_value =='q' || key_value==27)				//���� ���ӳ��� ������ user�� ü���� 0�̰ų� q, esc�� ���� �������� Ż���̶��
		{
			map.end_game();						//���� ���� ����
			break;								//break�� ���α׷� ���� �ݺ��� Ż���� ���� ��������
		}
		if(stage == 5)							//���� �̹� ���������� 5���ٸ� ���� Ŭ����!
		{
			map.clear_game();					//���� Ŭ���� ����
			break;								//break�� ���α׷� ���� �ݺ��� Ż���� ���� ��������
		}

		
							
		stage++;								//�� �����̾ƴ� ���� count�� 1000�� ������ �������� �����Ͻ� �������� ����
		count = 0;								//count�� �ٽ� 0���� �ʱ�ȭ
	}											//�ٽ� �������� �ݺ� ����
}