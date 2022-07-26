#include <stdio.h>

// 문자열 (string)
//

int main()
{
	char H = 'H';
	char e = 'e';
	char l = 'l';
	char o = 'o';

	printf("%c%c%c%c%c \n", H, e, l, l, o);

	char Hello[5];
	Hello[0] = 'H';
	Hello[1] = 'e';
	Hello[2] = 'l';
	Hello[3] = 'l';
	Hello[4] = 'o';

	for (int i = 0; i < 5; ++i)
		printf("%c", Hello[i]);

	char Hello2[6] = { 'H','e','l','l','o', '\0'};

	// 문자열 상수 저장방식에는 널문자가 포함되어 있습니다.
	char Hello3[6] = "Hello";
	
	printf("\n");
	printf("Hello  : %s \n", Hello);
	printf("Hello2 : %s \n", Hello2);
	printf("Hello3 : %s \n", Hello3);
	// %s : NUL 문자를 기준으로 출력합니다.
	// NUL 문자 : '\0' 으로 표기하고 문자열의 끝을 나타냅니다.

	return 0;
}