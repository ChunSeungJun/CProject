#include <stdio.h>

// 배열 (Array)
// 같은 자료형의 공간을 묶어놓은 집합입니다.

// 배열의 선언 방법
// 자료형 배열이름 [배열길이];

// 배열 길이 : 해당 자료형을 몇 개를 저장할 수 있는 지 나타내는 크기입니다.

// 배열의 요소에 접근하는 방법
// 배열이름[인덱스];

// 인덱스 : 배열의 요소를 구분하기 위한 번호이며 0 부터 시작합니다.

int main()
{
	// int 형 데이터를 5개 저장할 수 있는 공간 (배열)
	// IntArr 를 선언합니다.
	int IntArr[5];

	IntArr[0] = 10;
	IntArr[1] = 20;
	IntArr[2] = 30;
	IntArr[3] = 40;
	IntArr[4] = 50;
	
	// IntArr 는 int 형 데이터를 5개 저장할 수 있는 공간인데
	// 선언하지 않는 공간인 6번째 공간을 접근하고 있으므로 에러
	// IntArr[5] = 60;
	// printf("IntArr[5] : %d \n", IntArr[5]);

	for (int i = 0; i < 5; ++i)
		printf("IntArr[%d] : %d \n", i, IntArr[i]);

	// 배열 또한 선언과 동시에 초기화가 가능합니다.
	float FloatArr[5] = { 1.1f , 2.2f , 3.3f , 4.4f , 5.5f };

	for (int i = 0; i < 5; ++i)
		printf("FloatArr[%d] : %.1f \n", i, FloatArr[i]);

	// int 자료형 1000개를 저장할 수 있는 배열을 만들고
	// 각 요소에 1 ~ 1000까지 저장하여 출력해주세요.


	int Arr[1000];

	for (int i = 0; i < 1000; i++)
	{
		Arr[i] =+ i+1;
		printf("Arr[%d] : %d \n", i , Arr[i]);
	}
	

	return 0;
}