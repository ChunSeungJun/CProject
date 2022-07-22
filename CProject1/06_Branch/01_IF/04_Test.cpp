#include <stdio.h>

// 최저 시금 : 9160
// 초과 수당 : 최저시급에 30%

// 하루 일당 계산기를 만들어주세요.

// 8시간 이상 일한다면 초과수당을 받습니다.

// 하루에 일한 시간이 24시간을 넘을 수는 없습니다.

// 시간을 입력하여 임금을 계산하여 결과가 나와야 합니다.

int main()
{
	// 내 방법
	int A = 9160;
	int Time;
	int B = 2748;

	printf("일한 시간을 적어주세요. \n");
	scanf_s("%d", &Time);
	int C4 = Time - 8;
	int C = Time * A;
	int C2 = C4 * B;
	int C3 = C + C2;
	if (Time <= 7)
	{
		printf("%d * %d = %d \n", A, Time , C);
		printf("당신은 총 %d시간 일했습니다. \n", Time);
	}
	else if (Time >= 8 && Time <= 23)
	{
		printf("8시간 이상 일했기 때문에 ");
		printf("9160의 30%%를 더받는다 \n");
		printf("%d * %d = %d \n",A,Time,C);
		printf("%d * %d = %d \n", B, C4, C2);
		printf("당신이 총 받는 임금은 %d원 입니다. \n", C3);
		printf("당신은 총 %d시간 일했습니다. \n", Time);
	}
	else if (Time == 24)
	{
		printf("하루에 일한 시간이 24시간을 넘을 수는 없습니다. \n");
	}

	return 0;
}

int main()
{
	// 선생님 방법
	const int Pay = 9160;
	signed Result;
	signed Time;

	printf("일한 시간을 입력하세요 :");
	scanf_s("%d", &Time);

	if (Time > 24 || Time <= 0)
	{
		if (Time == 0) printf("일을 안했으므로 수당을 받을 수 없습니다.\n");
		else if (Time < 0) printf("시간은 음수일 수 없습니다.\n");
		else printf("하루에 일한 시간이 24시간을 초과할 수 없습니다. \n");
	} 
	else
	{
		if (Time > 8)
		{
			printf("총 임금은 %0.f원 입니다. \n", (Time * Pay) + (Time - 8) * (Pay * 0 + .3f));
			// (Pay * 8) + (Time - 8) * (Pay * 1.3f);
		}
		else
		{
			printf("총 임금은 %d 입니다. \n", Time * Pay);
		}
	}

	return 0;
}