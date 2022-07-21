#include <stdio.h>


// 상수 (Literal)
// 변하지 않는 값을 의미합니다.
int main()
{

	20;
	// 20 = 30;
	printf("%d \n", 20);

	int A = 20;
	A = 30;
	A = 40;
	
	// 상수화 const
	// 상수 B 를 선언합니다.
	// 반드시 선언과 동시에 초기화가 진행되어야 합니다.
	const int B = 20; 

	

	return 0;
}