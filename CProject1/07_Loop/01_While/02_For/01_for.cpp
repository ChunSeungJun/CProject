#include <stdio.h>

// For 문
// 초기식, 조건식, 증감식으로 이루어진 반복문입니다.

// 초기식 : 처음으로 한번 실행하는 식
// 조건식 : 반복의 여부를 결정하는 식
// 증감식 : 반복이 끝날 때 마다 실행하는 식

// for(초기식; 조건식; 증감식;)
//	  {   반복할 코드 ;     }

int main()
{
	//    초기식;    조건식; 증감식
	//for (int i = 1; i <= 5; i++)
	//	printf("For 문이 %d 번째 실행합니다. \n", i); // 반복할 코드

	// 이중 for 문
	//for (int i = 1; i < 10; ++i)
	//{
	//	printf("%d 단 \n", i);
	//	for (int j = 1; j < 10; ++j)
	//	{
	//		printf("%d x %d = %d \n", i, j, i * j);
	//	}
	//	printf("\n");
	//}

	// 1
	//int n;
	//int sum = 0;
	//printf("1부터 n까지의 합을 구합니다. n을 입력하십시오 : \n");
	//scanf_s("%d", &n);
	//for (int i = 1; i <= n; i++)
	//{
	//	sum += i;
	//}
	//printf("1부터 %d까지의 합계는? : %d 입니다. \n", sum, sum);

	//2
	//int n;
	//int sum = 1;
	//printf("1부터 n까지의 곱한 값을 구합니다. n을 입력하십시오 : \n");
	//scanf_s("%d", &n);
	//for (int i = 1; i <= n; i++)
	//{
	//	sum *= i;
	//}
	//printf("1부터 %d까지의 합계는? : %d 입니다. \n", n, sum);

	//3
	//int a, b, c;
	//for (c = 1; c < 4; c++)
	//{
	//	for (b = 1; b < 10; b++)
	//	{
	//		for (a = c * 3 -2; a < c*3 + 1; a++)
	//		{
	//			printf("%d x %d = %d%s ", a, b, a * b, (a * b < 10) ? " " : "");
	//		}
	//		printf("\n");

	//	}
	//	printf("\n");
	//}

	//4
	//int a, b;
	//for (a = 1; a <= 5; a++)
	//{
	//	
	//	for (b = 5; b >= a; b--)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//5

	//for (int i = 0; i < 5; ++i)
	//{
	//	for (int j = 0; j < 5 - i; ++j)	printf(" ");

	//	for (int k = 0; k < (i * 2) + 1; ++k)	printf("*");
	//		
	//	printf("\n");
	//}

	int lv = 1;
	lv = lv++;
	printf("%d", lv);

	return 0;
}