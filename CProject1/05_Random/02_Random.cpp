#include <stdio.h>
#include <Windows.h>


int main()
{
	// ���� : ���ǵ� ���ǳ����� �������� ����� ��
	srand(GetTickCount64());
	// srand() : ���� �õ带 �����մϴ�.
	// ���� �õ� : ������ � ��Ģ������ ������ ������ �����մϴ�.
	// GetTickCount64() : ���α׷��� ������ �������� GetTickCount64() ��
	//                    ������ ���������� �ð��� ��ȯ�ϴ� ���

	// rand() % n : 0 ~ (n - 1) ������ ������ �����մϴ�.
	printf("rand() %% 5 : %d \n", rand() % 5);
	printf("rand() %% 5 : %d \n", rand() % 5);
	printf("rand() %% 5 : %d \n", rand() % 5);
	printf("rand() %% 5 : %d \n", rand() % 5);
	printf("rand() %% 5 : %d \n", rand() % 5);

	// 1. 1 ~ 100 ������ ������ 5�� �����Ͽ� ���

	printf("rand() %% 100 : %d \n", rand() % 100 + 1);
	printf("rand() %% 100 : %d \n", rand() % 100 + 1);
	printf("rand() %% 100 : %d \n", rand() % 100 + 1);
	printf("rand() %% 100 : %d \n", rand() % 100 + 1);
	printf("rand() %% 100 : %d \n", rand() % 100 + 1);

	// 2. 30 ~ 50 ������ ������ 5�� �����Ͽ� ���

	printf("rand() %% 50 : %d \n", rand() % 20 + 31);
	printf("rand() %% 50 : %d \n", rand() % 20 + 31);
	printf("rand() %% 50 : %d \n", rand() % 20 + 31);
	printf("rand() %% 50 : %d \n", rand() % 20 + 31);
	printf("rand() %% 50 : %d \n", rand() % 20 + 31);

	



	return 0;
}