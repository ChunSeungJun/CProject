#include <stdio.h>

// 대입 연산자 (Assignment Operator)
// 왼쪽 피 연산자에 오른쪽 피 연산자의 값을 대입하는 연산자입니다.

int main()
{
	int A = 10;
	int B = A;
	A = A + 10;
	
	// 복합대입 연산자
	// 대입 연산자는 다른 연산자와 복합적으로 사용할 수 있습니다.
	A += 10;
	printf("A : %d \n", A);

	A -= 10;
	printf("A : %d \n", A);

	A *= 10;
	printf("A : %d \n", A);

	A /= 10;
	printf("A : %d \n", A);

	A %= 10;
	printf("A : %d \n", A);

	return 0;
}