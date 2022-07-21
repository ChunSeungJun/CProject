#include <stdio.h>

// 논리 연산자 (Logical Operator)
// 두 조건식의 논리 연산을 수행합니다.

// 논리연산
// A && B (AND) : A 와 B 가 모두 true 라면 true 하나라도 false 라면 false
// A || B (OR)  : A 와 B 중 하나라도  true 라면 true 모두 false 라면 false
// !A     (NOT) : A 가 true 라면 false , false 라면 true 로 전환

int main()
{
	int True = 1;
	int False = 0;

	printf("&& (AND 연산) \n");
	int Result = True && True;
	printf("True  && True  : %d \n", Result);
	Result = True && False;
	printf("True  && False : %d \n", Result);
	Result = False && False;
	printf("False && False : %d \n", Result);
	printf("\n");
	
	printf("|| (OR 연산) \n");
	Result = True || True;
	printf("True  || True  : %d \n", Result);
	Result = True || False;
	printf("True  || False : %d \n", Result);
	Result = False || False;
	printf("False || False : %d \n", Result);
	printf("\n");

	printf("! (Not 연산) \n");
	Result = !True;
	printf("!True   : %d \n", Result);
	Result = !False;
	printf("!False  : %d \n", Result);

	return 0;
}
