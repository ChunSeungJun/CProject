#include <stdio.h>

int main()
{
	
	int Num1 = 10;
	int Num2 = 10;

	printf("Num1 �� %s \n",
		(Num1 < 0) ? "�����Դϴ�." : "����Դϴ�.");
	printf("Num2 �� %s \n",
		(Num2 % 2) ? "Ȧ���Դϴ�." : "¦���Դϴ�.");

	return 0;
}