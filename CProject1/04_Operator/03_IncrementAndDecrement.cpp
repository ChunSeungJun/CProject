#include <stdio.h>

// 증감연산자 (Increment And Decrement Operator)
// 피연산자의 값을 1 증가시키거나 1감소시키는 연산자입니다.
// 위치에 따라 반환하는 값이 다릅니다.

int main()
{
	int Count = 0;
	printf("Count : %d \n", Count);
	Count += 1;
	printf("Count : %d \n", Count);

	// 전위 연산자 : 연산 후의 결과를 반환합니다.
	// 전위 증가 연산자 : 피 연산자의 값을 1 증가시킵니다.
	++Count;
	printf("Count : %d \n", Count);
	// 전위 감소 연산자 : 피 연산자의 값을 1 감소시킵니다.
	--Count;
	printf("Count : %d \n", Count);
	
	// 후의 연산자 : 연산 전의 결과를 반환합니다.
	// 후위 증가 연산자 : 피 연산자의 값을 1 증가시킵니다.
	Count++;
	printf("Count : %d \n", Count);
	// 후위 감소 연산자 : 피 연산자의 값을 1 감소시킵니다.
	Count--;
	printf("Count : %d \n", Count);

	printf("Count : %d \n", ++Count);
	printf("Count : %d \n", Count++);
	printf("Count : %d \n",   Count);

	
	

	return 0;
}
