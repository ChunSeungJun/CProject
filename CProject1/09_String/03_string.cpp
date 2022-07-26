#include <stdio.h>
#pragma warning(disable : 4996)
// 문자열 입력

int main()
{
	char Hello[30] = { 0 };

	// 문자열 입력시 주소를 보내지 않아도 됩니다.
	printf("입력 : ");
	scanf("%s", Hello);
	printf("입력받은 문자열 : %s \n", Hello);
	
	printf("입력 : ");
	scanf("%s", Hello);
	printf("입력받은 문자열 : %s \n", Hello);

	for (int i = 0; i < 30; ++i)
	{
		printf("%c ", Hello[i]);
		if (i != 0 && i % 5 == 0) printf("\n");
	}

	

	return 0;
}