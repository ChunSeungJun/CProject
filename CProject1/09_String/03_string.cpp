#include <stdio.h>
#pragma warning(disable : 4996)
// ���ڿ� �Է�

int main()
{
	char Hello[30] = { 0 };

	// ���ڿ� �Է½� �ּҸ� ������ �ʾƵ� �˴ϴ�.
	printf("�Է� : ");
	scanf("%s", Hello);
	printf("�Է¹��� ���ڿ� : %s \n", Hello);
	
	printf("�Է� : ");
	scanf("%s", Hello);
	printf("�Է¹��� ���ڿ� : %s \n", Hello);

	for (int i = 0; i < 30; ++i)
	{
		printf("%c ", Hello[i]);
		if (i != 0 && i % 5 == 0) printf("\n");
	}

	

	return 0;
}