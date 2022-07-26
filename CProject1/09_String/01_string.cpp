#include <stdio.h>

// char
// char 는 자료형중 문자를 안전한 형식으로
// 저장할 수 있는 자료형입니다

int main()
{
#pragma region 상수 표기
	10;           // int         형 상수(정수)★
	10000000000;  // longlong    형 상수(정수)
	10u;          // unsigned    형 상수(0, 자연수)
	10ll;         // longlong    형 상수(정수)
	10l;          // long        형 상수(정수)
	10i8;         // char        형 상수(정수)
	10i16;        // short       형 상수(정수)
	10i32;        // int         형 상수(정수)
	10i64;        // longlong    형 상수(정수)
	3.1f;         // float       형 상수(실수)★
	3.14;         // double      형 상수(실수)★
	3.14l;        // long double 형 상수(실수)
	'A';          // character   형 상수(문자)★
	"ABC";        // string      형 상수(문자열) ★
#pragma endregion
	
	// 문자 상수를 표기할 땐 아스트로피('') 를 사용합니다.
	char A = 'A';
	printf("A  : %d \n", A);
	printf("B == %d \n", 'B');
	printf("'B' == 66 : %d \n", 'B' == 66);

	// %c : character(문자)형 데이터를 받아 출력하는 기능입니다.
	printf("A : %c \n", A);
	printf("65 : %c \n", 65);

	return 0;
}