#include <stdio.h>

int main()
{

	//  변수 생성
	int i = 1;
	int n;
	int sum = 1;
	printf("1부터 n까지의 곱한 값을 구합니다. n을 입력하세요 : \n");
	// 입력
	scanf_s("%d", &n);

	// 반복문
	while (i <= n)  // i가 n보다 작거나 같다면
	{

		sum *= i; // i의 값을 sum이랑 곱한 후 저장
		i++;	  // i를 1증가 시킴
	}
	printf("1부터 n까지의 합계는? : %d 입니다. \n", sum);



	return 0;
}