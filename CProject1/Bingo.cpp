#include <stdio.h>
#include <windows.h>
#include <string.h>
#pragma warning (disable : 4996)

int main()
{
	char Bingo[6][6][256];

	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			printf("%d��° �� %d��°ĭ �Է� : ", i + 1, j + 1);
			scanf("%[^\n]s", Bingo[i][j]);
			while (getchar() != '\n');

		}
	}

	char Input[50] = { 0 };

	// strcmp("���ڿ�1", "���ڿ�2")
	// string compare : ���ڿ�1 �� ���ڿ�2 �� ���ٸ� 0�� �ٸ��ٸ� -1 Ȥ�� 1�� ��ȯ�մϴ�.
	while (strcmp(Input, "����"))
	{
		system("cls");
		for (int i = 0; i < 6; ++i)
		{
			for (int j = 0; j < 6; ++j)
			{
				printf("%15s", Bingo[i][j]);

			}
			printf("\n");
		}
		printf("�Է� : ");
		scanf("%[^\n]s", Input);
		while (getchar() != '\n');
		for (int i = 0; i < 6; ++i)
		{
			for (int j = 0; j < 6; ++j)
			{
				if (!strcmp(Input, Bingo[i][j]))
					strcpy(Bingo[i][j], "BINGO");
				// strcpy("���ڿ�1", "���ڿ�2")
				// string Copy : ���ڿ� ����� ���ڿ�1�� ���ڿ�2�� �����մϴ�.
			}
		}
	}

	
	



	return 0;
}