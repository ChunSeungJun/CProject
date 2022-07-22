#include <stdio.h>

// else : 위 if 조건식이 false 일 경우 무조건 실행하는 명령어입니다.

int main()
{
	int A = 9;

	if (A == 10) printf("A는 10 입니다. \n");
	else	     printf("A는 10이 아닙니다. \n");

	if (A == 10) printf("A는 10입니다. \n");
	if (A != 10) printf("A는 10이 아닙니다. \n");

	if (A == 10) printf("A는 10입니다. \n");
	printf("A는 10이 아닙니다. \n");

	return 0;
}