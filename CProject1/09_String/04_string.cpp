#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
	char Str[32] = {0};
	printf("�Է� : ");
	scanf("%[^\n]s", Str);
	// %[^\n]s : ���� ������ ���Ḧ ���鹮�ڰ� �ƴ� ���๮�ڸ� �������� �����մϴ�.
	printf("�Է¹��� ���ڿ� : %s \n", Str);

	// while (getchar() != '\n'); : %[^\n]s �� ����� �� ����մϴ�.
	while (getchar() != '\n');	// buffer��� �����ȿ� ���๮�ڸ� ����.

	printf("�Է� : ");
	scanf("%s[^\n]", Str);
	printf("�Է¹��� ���ڿ� : %s \n", Str);
	

	return 0;
}