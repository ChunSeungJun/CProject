#include <stdio.h>

// ���ڿ� (string)
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

	// ���ڿ� ��� �����Ŀ��� �ι��ڰ� ���ԵǾ� �ֽ��ϴ�.
	char Hello3[6] = "Hello";
	
	printf("\n");
	printf("Hello  : %s \n", Hello);
	printf("Hello2 : %s \n", Hello2);
	printf("Hello3 : %s \n", Hello3);
	// %s : NUL ���ڸ� �������� ����մϴ�.
	// NUL ���� : '\0' ���� ǥ���ϰ� ���ڿ��� ���� ��Ÿ���ϴ�.

	return 0;
}