#include <stdio.h>
#include <Windows.h>

// OddEvenGame (Ȧ¦����)
// ��ǻ�Ͱ� �������� ���� ���ڰ� Ȧ������ ¦������ ���ߴ� �����Դϴ�.

// ��ȸ�� 5������
// ����ٸ� Player �� 1���� ��������
// Ʋ���ٸ� Computer �� 1���� ������
// ������ ������ �� �� ���� ������ ������ �ִ�
// ����� �̱⵵�� ������ּ���.

int main()
{
	system("title Game");

	srand(GetTickCount64());
	int Player;
	int ComputerScore = 0;
	int PlayerScore = 0;
	int Computer;
	for (int Game = 5; Game > 0; --Game)
	{
		Computer = rand() % 10 + 1;
		printf("��ǻ�Ͱ� ���� ���� : ?\n");
		printf("������ȸ : %d \n", Game);
		printf("��ǻ�� ���� : %d \n", ComputerScore);
		printf("�÷��̾� ���� : %d \n", PlayerScore);
		printf("1. Ȧ�� \n2. ¦�� \n�Է� : \n");
		scanf_s("%d", &Player);
		if (Player == 1)
		{
			printf("���ڴ� %d �Դϴ�. \n", Computer);
			if (Computer % 2 != 0)
			{
				printf("����� Ȧ���� �Է��ϼ̱⿡ ���� 1�� ����ϴ�. \n");
				++PlayerScore;
			}
			else {
				printf("����� Ȧ���� �Է��ϼ̱⿡ ��ǻ�Ͱ� ���� 1�� ����ϴ�. \n");
				++ComputerScore;
			}
		}
		else if (Player == 2)
		{
			printf("���ڴ� %d �Դϴ�. \n", Computer);
			if (Computer % 2 != 1)
			{
				printf("����� ¦���� �Է��ϼ̱⿡ ���� 1�� ����ϴ�. \n");
				++PlayerScore;
			}
			else {
				printf("����� ¦���� �Է��ϼ̱⿡ ��ǻ�Ͱ� ���� 1�� ����ϴ�. \n");
				++ComputerScore;
			}
		}

	}


	printf("\n");
	

	printf("������ �������ϴ�.\n");
	printf("�÷��̾� ���� : %d \n ��ǻ��  ���� : %d \n", PlayerScore, ComputerScore);
	printf("\n");
	if (PlayerScore > ComputerScore)
	{
		printf("����� �¸��ϼ̽��ϴ�.\n");
	}
	else
	{
		printf("��ǻ�Ͱ� �¸��߽��ϴ�. \n");
	}

	

	return 0;
}