#include <iostream>
#include <Windows.h>
#pragma warning (disable : 4996)
using namespace std;

void main()
{
	int Player= 0, Computer = 0;
	int PlayerScore = 0, ComputerScore = 0;
	system("title RSP Game");
	for (int a = 0; Player < 2; ++a) {
		PlayerScore = 0, ComputerScore = 0;
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ \n");
		printf("ㅣ    가위바위보    ㅣ\n");
		printf("ㅣ    1. 플레이     ㅣ\n");
		printf("ㅣ    2. 나가기     ㅣ\n");
		printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ \n");
		printf("입력 : ");
		scanf("%d", &Player);
		if (Player == 1) {
			Player = 0;
			system("cls");
			for (int b = 0; PlayerScore < 5 && ComputerScore < 5; ++b) {
				printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ \n");
				printf("ㅣ 플레이어 점수 : %d ㅣㅣ 컴퓨터 점수 : %d ㅣ \n", PlayerScore, ComputerScore);
				printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ \n");

				printf("컴퓨터가 낸 것은 ?? 입니다. \n");
				printf("\n");
				printf("1. 주먹 2. 가위 3. 보 \n");
				printf("입력 : ");
				scanf("%d", &Player);
				system("cls");
				Computer = rand() % 3 + 1;
				if (Player == 1) {
					printf("플레이어가 선택한 것은 [%s] 입니다. \n", "주먹");
					switch (Computer) {
					case 1:
						printf("컴퓨터가  선택한 것은 [%s] 입니다. \n", (Computer == 1) ? "주먹" : " ");
						printf("\n");
						printf("비기셨습니다.\n");
						printf("\n");
						system("pause");
						system("cls");
						break;
					case 2:
						printf("컴퓨터가  선택한 것은 [%s] 입니다. \n", (Computer == 2) ? "가위" : " ");
						printf("\n");
						printf("이기셨습니다.\n");
						printf("\n");
						++PlayerScore;
						system("pause");
						system("cls");
						break;
					case 3:
						printf("컴퓨터가  선택한 것은 [%s] 입니다. \n", (Computer == 3) ? "보" : " ");
						printf("\n");
						printf("지셨습니다.\n");
						printf("\n");
						++ComputerScore;
						system("pause");
						system("cls");
						break;
					}

				}
				if (Player == 2) {
					printf("플레이어가 선택한 것은 [%s] 입니다. \n", "가위");
					switch (Computer) {
					case 1:
						printf("컴퓨터가  선택한 것은 [%s] 입니다. \n", (Computer == 1) ? "주먹" : " ");
						printf("\n");
						printf("지셨습니다.\n");
						printf("\n");
						++ComputerScore;
						system("pause");
						system("cls");
						break;
					case 2:
						printf("컴퓨터가  선택한 것은 [%s] 입니다. \n", (Computer == 2) ? "가위" : " ");
						printf("\n");
						printf("비기셨습니다.\n");
						printf("\n");
						system("pause");
						system("cls");
						break;
					case 3:
						printf("컴퓨터가  선택한 것은 [%s] 입니다. \n", (Computer == 3) ? "보" : " ");
						printf("\n");
						printf("이기셨습니다.\n");
						printf("\n");
						++PlayerScore;
						system("pause");
						system("cls");
						break;
					}
				}
				if (Player == 3) {
					printf("플레이어가 선택한 것은 [%s] 입니다. \n", "보");
					switch (Computer) {
					case 1:
						printf("컴퓨터가  선택한 것은 [%s] 입니다. \n", (Computer == 1) ? "주먹" : " ");
						printf("\n");
						printf("이기셨습니다.\n");
						printf("\n");
						++PlayerScore;
						system("pause");
						system("cls");
						break;
					case 2:
						printf("컴퓨터가  선택한 것은 [%s] 입니다. \n", (Computer == 2) ? "가위" : " ");
						printf("\n");
						printf("지셨습니다.\n");
						printf("\n");
						++ComputerScore;
						system("pause");
						system("cls");
						break;
					case 3:
						printf("컴퓨터가  선택한 것은 [%s] 입니다. \n", (Computer == 3) ? "보" : " ");
						printf("\n");
						printf("비기셨습니다.\n");
						printf("\n");
						system("pause");
						system("cls");
						break;
					}

				}
				if (Player > 3) {
					printf("1 2 3 중 입력해주세요 \n");
					system("pause");
					system("cls");
				}
			}
			printf("[컴퓨터 점수 : %d] [플레이어 점수 : %d] \n", ComputerScore,PlayerScore);
			printf("\n");
			printf("%s \n", (ComputerScore > PlayerScore) ? "컴퓨터 승리!" : "플레이어 승리!");
			system("pause");
			system("cls");
		}
		if (Player == 2) {
			break;
		}

	}

	return;
}
