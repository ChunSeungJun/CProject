#include <stdio.h>

int main()
{
	
	int Num1 = 10;
	int Num2 = 10;

	printf("Num1 은 %s \n",
		(Num1 < 0) ? "음수입니다." : "양수입니다.");
	printf("Num2 은 %s \n",
		(Num2 % 2) ? "홀수입니다." : "짝수입니다.");

	return 0;
}