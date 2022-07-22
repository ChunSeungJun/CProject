#include <stdio.h>

// 분기문 (Branch)
// 프로그램의 실행 흐름을 갈리게 만드는 명령어를 말합니다.

// if(조건식) { 조건식이 참일 시 실행할 코드; }
// 조건식이 참이라면 코드 블록( {} ) 안에 있는 코드를 실행하고
// 거짓이라면 해당 명령을 실행하지 않고 다음 명령을 실행합니다.

int main()
{

	if (1 < 10)
	{ printf(" 1 은 10 보다 작습니다. \n"); }
	
	if (1 > 10)
	{ printf(" 1 은 10 보다 큽니다. \n"); }

	int A = 10;
	if (1 < A && A <= 10)
	{ printf("A 는 1보다 크고 10 이하입니다. \n"); }

	// int 형 변수 Num을 선언하고 값을 입력 받은 후
	// 입력받은 값이 음수인지 양수인지
	// 0 인지 짝수인지 홀수 인지 출력해주세요.

	int Num = 0;
	
	printf("값을 입력하세요  : \n");
	scanf_s("%d", &Num);
	if (Num == 0)
	{ printf("입력하신 값은 0 입니다. \n"); }
	if (Num > 0)
	{ 
		printf("입력하신 값은 양수 이며 ");
		if (Num % 2 == 0)
		{
			printf("짝수 입니다. \n");
		}
		if (Num % 2 == 1)
		{
			printf("홀수 입니다. \n");
		}
	}
	if (Num < 0)
	{ printf("입력하신 값은 음수 입니다. \n"); }

	// 중첩 if : if 문안에 if 문을 써서 중첩 조건을 만들 수 있습니다.

	if (Num == 0) printf("Num 은 0 입니다. \n");
	if (Num != 0)
	{
		if (Num < 0) printf("Num은 음수입니다. \n");
		
		if (Num > 0)
		{
			if (Num % 2 == 0) printf("Num은 양수이며 짝수입니다. \n");
			if (Num % 2 == 1) printf("Num은 양수이며 홀수입니다. \n");
		}
	}





	

	return 0;
}