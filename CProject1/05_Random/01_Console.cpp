#include <stdio.h>
#include <Windows.h>
// Windows.h : 랜덤값 생성 , 콘솔 제어 명령어 등을 사용할 수 있게 해준다.

int main()
{
	system("title Game");
	// system("title Name") : 콘솔 창의 타이틀을 Name 으로 설정합니다.

	printf("Hello \n");
	Sleep(500);       // 콘솔창을 재웁니다.
	system("cls");    // 콘솔창을 지웁니다.
	printf("World \n");
	system("pause");  // 콘솔장을 다음 키를 입력할 때 까지 중지합니다.
	printf("안녕하세요 ! \n"); 

	printf("캐릭터 HP : 100 \n");
	printf("다음단계를 이동합니다. (아무키나 누르세요.)\n");
	system("pause > NUL"); // 계속하려면 아무 키나 누르십시오... 를 생략합니다.
	system("cls");
	system("color 20");
	// system("color 배경색 글자색")
	// 0 = 검정색       8 = 회색
	// 1 = 파랑색       9 = 연한 파랑색
	// 2 = 초록색       A = 연두색
	// 3 = 하늘색       B = 연한 하늘색
	// 4 = 빨강색       C = 연한 빨강색
	// 5 = 자주색       D = 연한 자주색
	// 6 = 노란색       E = 연한 노랑색
	// 7 = 흰색         F = 밝은 흰색

	printf("몬스터를 찾았습니다 ! \n");
	Sleep(1000);
	system("cls");
	system("color 40");
	printf("몬스터가 공격했습니다 ! \n");
	Sleep(1000);
	system("cls");
	system("color 0F");
	printf("몬스터가 도망갔습니다 ! \n");

	


	return 0;
}