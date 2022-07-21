#include <stdio.h>


// 산술 연산자 (Arithmetic Operator)
// 사칙연산 ( + - * / ) 연산자입니다.

// 연산자
// 피연산자 : 연산의 재료입니다.
// 반환값   : 연산의 결과를 의미합니다.


int main()
{
	int Num1 = 10;
	int Num2 = 20;

	// 덧셈 (+)
	int Addition = 1 + 1;
	printf("1 + 1 = %d \n", Addition);

	// 뺄셈 (-)
	int Subtraction = Num1 - Num2;
	printf("%d - %d = %d \n", Num1,Num2,Subtraction);

	// 곱셈 (*)
	int Multiplication = Num1 * 10;
	printf("%d * 10 = %d \n", Num1,Multiplication);

	// 나눗셈 (/)
	int Division = Num2 / 5;
	printf("%d / 5 = %d \n", Num2,Division);
	
	// 나머지 (%)
	int Remaion = Num1 % 3;
	printf("%d %% 3 = %d \n", Num1,Remaion);
	// %% : % 를 출력합니다.

	// 컴퓨터는 사칙 연산중 + 만을 이용합니다.

	return 0;
}