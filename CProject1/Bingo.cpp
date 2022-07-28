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
			printf("%d번째 줄 %d번째칸 입력 : ", i + 1, j + 1);
			scanf("%[^\n]s", Bingo[i][j]);
			while (getchar() != '\n');

		}
	}

	char Input[50] = { 0 };

	// strcmp("문자열1", "문자열2")
	// string compare : 문자열1 과 문자열2 가 같다면 0을 다르다면 -1 혹은 1을 반환합니다.
	while (strcmp(Input, "종료"))
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
		printf("입력 : ");
		scanf("%[^\n]s", Input);
		while (getchar() != '\n');
		for (int i = 0; i < 6; ++i)
		{
			for (int j = 0; j < 6; ++j)
			{
				if (!strcmp(Input, Bingo[i][j]))
					strcpy(Bingo[i][j], "BINGO");
				// strcpy("문자열1", "문자열2")
				// string Copy : 문자열 복사로 문자열1에 문자열2를 복사합니다.
			}
		}
	}

	
	



	return 0;
}