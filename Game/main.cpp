#include "Map.h"
#include "Launcher.h"
#include "User.h"
#include "Bullet.h"
#include "Missile.h"
#include "Bob.h"

using namespace std;


int main()
{
	Map map;						//맵, 가장자리 글자, 스테이지, 체력 출력
	User user;						//유저 
	Launcher launcher;				//런처, 스테이지별로 피사채 생성, 갯수 조절, 충돌 확인, 이동, 제거
	Bullet bullet[20];				//총알 배열 스태이지별로 *4로 증가(이용)
	Missile missile[10];			//미사일 배열 스테이지별로 *2로 증가(이용)
	Bob bob[10];					//폭발 배열 스테이지별로 *2로 증가(이용)

	int key_value;					//입력한 키 값
	int count = 0;					//시간 카운트 
	int stage = 1;					//스테이지 값 시작값은 1


	map.print_map();				//프로그램 시작과 함께 멥을 그린다
	

	while(1){						//스테이지별로 반복을 통한 프로그램 진행, 스테이지가 5스테이지가 되면 프로그램 종료
		

		while(1) {							//시작시 일시정지효과
			map.show_stage(stage);			//중앙에 스테이지 빨간글시를 그린다
			
			
			key_value=getch();				//키 입력값을 받을 준비를 한다.

			if(key_value==13){				//만약 엔터를 눌렀다면 (엔터값=13)
				map.erase_stage();			//스테이지 빨간글씨를 지우고
				break;						//일시정지 취소
			}
			else if(key_value=='q'|| key_value==27) {		//만약 q나 esc를 눌렀다면
				map.end_game();								//게임종료 출력후
				return 0;									//게임끝
			}
		}
		
		
		launcher.set_game(stage,&user,bullet,missile,bob);				//런처를 통해 게임 세팅,스테이지값을 통해 bullet,missile,bob을 create해준다.
		map.print_stage(stage);											//멥 가장자리에 stage를 출력한다.

		do {									//스테이지 진행동안 무한반복(매 초별 활동)
			if(kbhit()) {						//키 입력이 있다면
				key_value=getch();				//입력한 키 값을 저장한다
				if(key_value==75 || key_value==77)		//키값이 ← or →라면
				{
					user.erase_object();				//기존 user가 그려진곳을 지우고
					user.move_user(key_value);			//유저를 키 방향에 맞춰서 옆으로 이동한다
					user.print_object();				//이동한 위치에 user를 그린다
				}
			}
			
			launcher.check_crash(stage,&user,bullet,missile,bob);			//user가 이동한 위치에서 런처를통해 모든 피사체에 관련하여 충돌확인을 한다.


			Sleep(10);									//너무 빠른 게임속도를 조절하기위한 0.01초 프로그램 슬립
			count++;									//카운트를 증가해 시간지남을 표현

			map.print_life(&user);						//이번 초에서 플래이어의 채력을 출력
			launcher.move_object(stage,count,bullet,missile,bob);		//런처를 통해 모든 피사체를 이동시킨다

		} while(!(key_value=='q' || key_value==27 || count == 1000 || user.get_life() == 0));	//만약 q나 esc를 누르지않았거나 count가 1000이 지나지않았거나 (0.01초*1000) user라이프가 0이 아니라면 게임 다음초 진행



		//만약 위 반복문이 끝나고 여길 진입했다는건 이번 스테이지가 끝났음을 뜻함

		launcher.finish_game(stage,&user,bullet,missile,bob);		//스테이지가 끝났으니 모든피사체와 user를 지운다

		if(user.get_life() == 0 || key_value =='q' || key_value==27)				//만약 게임끝난 이유가 user의 체력이 0이거나 q, esc를 누른 스테이지 탈출이라면
		{
			map.end_game();						//게임 엔드 종료
			break;								//break로 프로그램 진행 반복문 탈출을 통한 게임종료
		}
		if(stage == 5)							//만약 이번 스테이지가 5였다면 게임 클리어!
		{
			map.clear_game();					//게임 클리어 종료
			break;								//break로 프로그램 진행 반복문 탈출을 통한 게임종료
		}

		
							
		stage++;								//위 조건이아닌 그저 count가 1000을 지나서 스테이지 종료일시 스테이지 증가
		count = 0;								//count를 다시 0으로 초기화
	}											//다시 스테이지 반복 시작
}