#include <stdio.h>

// C ++ 에서는 0 은 거짓 (false)
// 0 이 아닌 모든 것은 참 (true) 라 인식합니다

// 비교 연산자 (Comparison Operator)
// A == B : A 랑 B 가 같다면   true 아니라면 false
// A != B : A 랑 B 가 다르다면 true 아니라면 flase
// A >  B : A 가 B 초과라면    true 아니라면 false
// A >= B : A 가 B 이상이라면  true 아니라면 fasle
// A <  B : A 가 B 미만이라면  true 아니라면 false
// A <= B : A 가 B 이하라면    true 아니라면 false

int main()
{
	int A = 10;
	int B = 20;
	int C = 20;
	printf("5 > 3   : %d \n", 5 > 3);
	printf("A == 15 : %d \n", A == 15);
	printf("B != 25 : %d \n", B != 25);
	printf("A > B   : %d \n", A > B );
	printf("A >= B  : %d \n", A >= B );
	printf("A < B   : %d \n", A < B );
	printf("A <= B  : %d \n", A <= B );
	
	return 0;
}