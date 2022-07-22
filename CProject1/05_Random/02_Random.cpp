#include <stdio.h>
#include <Windows.h>


int main()
{
	// 난수 : 정의된 범의내에서 무작위로 추출된 수
	srand(GetTickCount64());
	// srand() : 난수 시드를 설정합니다.
	// 난수 시드 : 난수가 어떤 규칙내에서 생성될 건지를 결정합니다.
	// GetTickCount64() : 프로그램이 시작한 순간부터 GetTickCount64() 를
	//                    실행한 시점까지의 시간을 반환하는 기능

	// rand() % n : 0 ~ (n - 1) 내에서 난수를 생성합니다.
	printf("rand() %% 5 : %d \n", rand() % 5);
	printf("rand() %% 5 : %d \n", rand() % 5);
	printf("rand() %% 5 : %d \n", rand() % 5);
	printf("rand() %% 5 : %d \n", rand() % 5);
	printf("rand() %% 5 : %d \n", rand() % 5);

	// 1. 1 ~ 100 까지의 난수를 5개 생성하여 출력

	printf("rand() %% 100 : %d \n", rand() % 100 + 1);
	printf("rand() %% 100 : %d \n", rand() % 100 + 1);
	printf("rand() %% 100 : %d \n", rand() % 100 + 1);
	printf("rand() %% 100 : %d \n", rand() % 100 + 1);
	printf("rand() %% 100 : %d \n", rand() % 100 + 1);

	// 2. 30 ~ 50 까지의 난수를 5개 생성하여 출력

	printf("rand() %% 50 : %d \n", rand() % 20 + 31);
	printf("rand() %% 50 : %d \n", rand() % 20 + 31);
	printf("rand() %% 50 : %d \n", rand() % 20 + 31);
	printf("rand() %% 50 : %d \n", rand() % 20 + 31);
	printf("rand() %% 50 : %d \n", rand() % 20 + 31);

	



	return 0;
}