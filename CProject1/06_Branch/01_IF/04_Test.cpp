#include <stdio.h>

// ���� �ñ� : 9160
// �ʰ� ���� : �����ñ޿� 30%

// �Ϸ� �ϴ� ���⸦ ������ּ���.

// 8�ð� �̻� ���Ѵٸ� �ʰ������� �޽��ϴ�.

// �Ϸ翡 ���� �ð��� 24�ð��� ���� ���� �����ϴ�.

// �ð��� �Է��Ͽ� �ӱ��� ����Ͽ� ����� ���;� �մϴ�.

int main()
{
	// �� ���
	int A = 9160;
	int Time;
	int B = 2748;

	printf("���� �ð��� �����ּ���. \n");
	scanf_s("%d", &Time);
	int C4 = Time - 8;
	int C = Time * A;
	int C2 = C4 * B;
	int C3 = C + C2;
	if (Time <= 7)
	{
		printf("%d * %d = %d \n", A, Time , C);
		printf("����� �� %d�ð� ���߽��ϴ�. \n", Time);
	}
	else if (Time >= 8 && Time <= 23)
	{
		printf("8�ð� �̻� ���߱� ������ ");
		printf("9160�� 30%%�� ���޴´� \n");
		printf("%d * %d = %d \n",A,Time,C);
		printf("%d * %d = %d \n", B, C4, C2);
		printf("����� �� �޴� �ӱ��� %d�� �Դϴ�. \n", C3);
		printf("����� �� %d�ð� ���߽��ϴ�. \n", Time);
	}
	else if (Time == 24)
	{
		printf("�Ϸ翡 ���� �ð��� 24�ð��� ���� ���� �����ϴ�. \n");
	}

	return 0;
}

int main()
{
	// ������ ���
	const int Pay = 9160;
	signed Result;
	signed Time;

	printf("���� �ð��� �Է��ϼ��� :");
	scanf_s("%d", &Time);

	if (Time > 24 || Time <= 0)
	{
		if (Time == 0) printf("���� �������Ƿ� ������ ���� �� �����ϴ�.\n");
		else if (Time < 0) printf("�ð��� ������ �� �����ϴ�.\n");
		else printf("�Ϸ翡 ���� �ð��� 24�ð��� �ʰ��� �� �����ϴ�. \n");
	} 
	else
	{
		if (Time > 8)
		{
			printf("�� �ӱ��� %0.f�� �Դϴ�. \n", (Time * Pay) + (Time - 8) * (Pay * 0 + .3f));
			// (Pay * 8) + (Time - 8) * (Pay * 1.3f);
		}
		else
		{
			printf("�� �ӱ��� %d �Դϴ�. \n", Time * Pay);
		}
	}

	return 0;
}