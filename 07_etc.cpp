#include <stdio.h>

// sizeof(expression)
// expression 의 크기를 반환합니다.

// Casting Operator : (exoression)data
// data 의 자료형을 expression 으로 전환합니다.

// Address Operator : %Data
// Data 가 위치한 메모리 주소값을 반환합니다.


int main()
{
	int A = 10;
	printf("A     Size : %zd Byte \n", sizeof(A));
	printf("3.14  Size : %zd Byte \n", sizeof(3.14));
	printf("short Size : %zd Byte \n", sizeof(short));

	1000000000;  // int 형 상수 표기법
	10000000000; // long long 형 상수 표기법
	4200000000u; // unsigned 형 상수 표기법
	3.14f;       // float 형 상수 표기법
	3.14;        // double 형 상수 표기법

	int Num = 10;
	printf("10 진수 : %d \n", 10);
	printf("2  진수 : %d \n", 0b0010); // 2
	printf("8  진수 : %d \n", 010);    // 8
	printf("16 진수 : %d \n", 0x10);   // 16

	printf("&A : %p \n", &A);
	// %p : 메모리의 주소를 16진수로 변환하여 출력해주는 기능입니다.

	int Hp = 0;
	printf("Hp 를 입력하세요 : ");
	scanf_s("%d", &Hp);
	// scanf_s("입력받을 형식", 입력한 값을 저장할 공간의 주소)
	// 값을 입력받아 변수에 저장할 수 있는 기능입니다.
	printf("입력받은 Hp : %d \n", Hp);

	return 0;
}