#include <stdio.h>

// 삼항 연산자 (Ternary Operator)
// 조건식이 참일 때와 거짓일 때 반환하는 값을 지정할 수 있는 연산자입니다.

// (조건식) ? 참 : 거짓

// 조건식 : 참과 거짓을 반환하는 식

int main()
{
	int A = 10;

	printf("%s \n", "Hello");
	// %s : 문자열 데이터를 받아 출력해주는 역할입니다.

	printf("A 는 10 이 %s \n",
		  (A == 10) ? "입니다.": "이 아닙니다.");

	int B = (A > 20) ? 20 : 30;
	printf("B : %d \n", B);

	return 0;
}
