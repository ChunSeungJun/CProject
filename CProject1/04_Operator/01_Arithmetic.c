#include <stdio.h>


// ��� ������ (Arithmetic Operator)
// ��Ģ���� ( + - * / ) �������Դϴ�.

// ������
// �ǿ����� : ������ ����Դϴ�.
// ��ȯ��   : ������ ����� �ǹ��մϴ�.


int main()
{
	int Num1 = 10;
	int Num2 = 20;

	// ���� (+)
	int Addition = 1 + 1;
	printf("1 + 1 = %d \n", Addition);

	// ���� (-)
	int Subtraction = Num1 - Num2;
	printf("%d - %d = %d \n", Num1,Num2,Subtraction);

	// ���� (*)
	int Multiplication = Num1 * 10;
	printf("%d * 10 = %d \n", Num1,Multiplication);

	// ������ (/)
	int Division = Num2 / 5;
	printf("%d / 5 = %d \n", Num2,Division);
	
	// ������ (%)
	int Remaion = Num1 % 3;
	printf("%d %% 3 = %d \n", Num1,Remaion);
	// %% : % �� ����մϴ�.

	// ��ǻ�ʹ� ��Ģ ������ + ���� �̿��մϴ�.

	return 0;
}