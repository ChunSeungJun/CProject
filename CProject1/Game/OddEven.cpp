#include <stdio.h>
#include <Windows.h>

// OddEvenGame (홀짝게임)
// 컴퓨터가 랜덤으로 뽑은 숫자가 홀수인지 짝수인지 맞추는 게임입니다.

// 기회는 5번으로
// 맞춘다면 Player 가 1점을 가져가고
// 틀리다면 Computer 가 1점을 가져가
// 게임이 끝났을 때 더 높은 점수를 가지고 있는
// 사람이 이기도록 만들어주세요.

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
		printf("컴퓨터가 뽑은 숫자 : ?\n");
		printf("남은기회 : %d \n", Game);
		printf("컴퓨터 점수 : %d \n", ComputerScore);
		printf("플레이어 점수 : %d \n", PlayerScore);
		printf("1. 홀수 \n2. 짝수 \n입력 : \n");
		scanf_s("%d", &Player);
		if (Player == 1)
		{
			printf("숫자는 %d 입니다. \n", Computer);
			if (Computer % 2 != 0)
			{
				printf("당신은 홀수를 입력하셨기에 점수 1을 얻습니다. \n");
				++PlayerScore;
			}
			else {
				printf("당신은 홀수를 입력하셨기에 컴퓨터가 점수 1을 얻습니다. \n");
				++ComputerScore;
			}
		}
		else if (Player == 2)
		{
			printf("숫자는 %d 입니다. \n", Computer);
			if (Computer % 2 != 1)
			{
				printf("당신은 짝수를 입력하셨기에 점수 1을 얻습니다. \n");
				++PlayerScore;
			}
			else {
				printf("당신은 짝수를 입력하셨기에 컴퓨터가 점수 1을 얻습니다. \n");
				++ComputerScore;
			}
		}

	}


	printf("\n");
	

	printf("게임이 끝났습니다.\n");
	printf("플레이어 점수 : %d \n 컴퓨터  점수 : %d \n", PlayerScore, ComputerScore);
	printf("\n");
	if (PlayerScore > ComputerScore)
	{
		printf("당신이 승리하셨습니다.\n");
	}
	else
	{
		printf("컴퓨터가 승리했습니다. \n");
	}

	

	return 0;
}