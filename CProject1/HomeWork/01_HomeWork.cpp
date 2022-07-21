#include <stdio.h>

int main()
{
	// Num1 이 음수인지 양수인지 출력
	// Num2 가 홀수인지 짝수인지 출력
	
	int Num1 = 10;
	int Num2 = 10;

	printf("Num1 은 %s \n",
		(Num1 < 0) ? "음수입니다." : "양수입니다.");
	printf("Num2 은 %s \n",
		(Num2 % 2) ? "홀수입니다." : "짝수입니다.");

	return 0;
}
