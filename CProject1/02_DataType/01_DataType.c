#include <stdio.h>

int main()
{
	// Bit : 비트
	// 메모리의 최소 단위를 의미합니다.
	// 0 , 1 을 저장할 수 있는 크기입니다.
	// 1Byte = 8Bit

	// 자료형 (Data Type)
	// 메모리 공간의 설계도를 의미합니다.
	// char , short , int , long , double , float , longlong 등이 있습니다.

	// char : 1Byte 의 정수 자료형입니다.

	char HP;
	HP = 100;
	HP = 50; // 특정 변수에 값을 저장하는 것을 초기화 한다 라고 합니다.
	// = 은 등호가 아닌 대입하다를 의미합니다.

	printf("HP : %d \n", HP);
	HP = 30;
	printf("HP : %d \n", HP);
	// %d : 정수형태의 값을 받아 출력해주는 기능입니다.
	HP = 256; // 1 , 0000 , 0000
	printf("HP : %d \n", HP);
	HP = 255; // 1111 , 1111
	printf("HP : %d \n", HP);

	unsigned char Lv;
	// singed : 부호있는
	// unsinged : 부호없는
	Lv = 255;
	printf("HP : %d \n", Lv);

	// int : 4Byte 의 정수 자료형입니다.
	// 변수의 선언과 동시에 초기화가 가능합니다.
	int Atk = 1000;
	printf("Atk : %d \n", Atk);

	// char, short, int, long, longlong
	// byte
	// 수의 표현 범위
	// 해당 자료형 변수 선언 후 출력
	
	// float : 4Byte (오차범위 : 소수점 7 번째)
	float MyFloat = 3.14;
	int   MyInt = 3.14;
	printf("MyFloat = %.2f \n", MyFloat);
	// %f   : 실수 데이터를 출력해주는 역할입니다.
	// %.nf : n 번째 소수점까지 출력합니다.
	printf("MyInt   = %d   \n", MyInt);

	// double = 8Byte (오차범위 : 소수점 15 번째)
	double MyDouble = 1.23456789;
	printf("MyDouble = %.8f \n", MyDouble);



	return 0;
}	