#include <stdio.h>

// else if(조건식) { 참일시 실행할 코드; }
// 위 if 나 else if 의 조건식이 참이 아닐 경우 
//조건식을 검사하여 참이라면 실행하고 거짓이라면 다음 명령으로 넘어갑니다.

int main()
{
	int A = 5;

	if (A == 1) printf("A는 1입니다. \n");
	else if (A == 2) printf("A는 2입니다. \n");
	else if (A == 3) printf("A는 3입니다. \n");
	else if (A == 4) printf("A는 4입니다. \n");
	else printf("A는 5입니다. \n");

	printf("if 문 탈출 \n");
	return 0;
}