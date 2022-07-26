#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
	char Str[32] = {0};
	printf("입력 : ");
	scanf("%[^\n]s", Str);
	// %[^\n]s : 버퍼 저장의 종료를 공백문자가 아닌 개행문자를 기준으로 저장합니다.
	printf("입력받은 문자열 : %s \n", Str);

	// while (getchar() != '\n'); : %[^\n]s 를 사용한 후 사용합니다.
	while (getchar() != '\n');	// buffer라는 공간안에 개행문자를 뺀다.

	printf("입력 : ");
	scanf("%s[^\n]", Str);
	printf("입력받은 문자열 : %s \n", Str);
	

	return 0;
}