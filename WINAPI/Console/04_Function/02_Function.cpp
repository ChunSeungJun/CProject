#include "Header.h"

//#define Theory

#ifdef Theory
// ��ȯ���� �Ű������� ���� �Լ�
// void : ��ȯ���� ������ ����մϴ�.
void Hello()
{
	printf("Hello \n");
}
// ��ȯ���� �����ϰ� �Ű������� ���� �Լ�
// return ���� ��ȯ���� ��ȯ�մϴ�.
// return Data;
// Data ���İ� �´� ��ȯ���� ����Ͽ��� �մϴ�.
int Input()
{
	int Num;
	printf("�Է� : ");
	scanf("%d", &Num);
	return Num;
}

// ��ȯ���� ���� �Ű������� �����ϴ� �Լ�
void CalculateDamage(int Hp, int Damage)
// int Hp = 1000;
// int Damage = 70; 
{
	int prev = Hp;
	int Count = 0;
	printf("Hp : %d \n", Hp);
	for (; Hp >= 0;  ++Count)
	{
		Hp -= Damage;
		printf("%d Damage �� �޽��ϴ�. \n", Damage);
		printf("Hp : %d \n", Hp);
		Sleep(150);
	}
	printf("%d Hp �� %d Damage �� %d �� ��ƿ �� �ֽ��ϴ�. \n", prev, Damage, Count);
}
// ��ȯ���� �Ű������� �����ϴ� �Լ�
bool  Successed(int Percent)
{
	return ((rand() % 100) + 1) <= Percent;
}





void Start()
{
	// bool : true �� false �� ������ �� �ִ� �ڷ����Դϴ�.
	bool bTrue = true;
	bool bFalse = false;

	Hello();
	int Num = Input();
	printf("Num : %d \n", Num);
	CalculateDamage(1000, 70);
	
	for (int i = 0; i < 10; ++i) {
		if (Successed(50)) { printf("50%% �� Ȯ���� �����Ͽ����ϴ� ! \n"); }
		else { printf("50%% �� Ȯ���� �����Ͽ����ϴ� ! \n"); }
		Sleep(150);
	}
	

}

void KeyDown(WPARAM wParam)
{
	switch (wParam)
	{

	}


}

void Paint(HDC& hdc)
{


}

void Update()
{

}

#endif

#ifndef Theory

void Dice(int Num)
{
	int Dice = rand() % 6 + 1;
	if (Num == Dice) {
		printf("�����Դϴ�. \n");
	}
	else {
		printf("Ʋ�Ƚ��ϴ�. \n");
	}
}

int DoubleDice(void)
{
	int Dice1 = rand() % 6 + 1;
	int Dice2 = rand() % 6 + 1;
	if (Dice1 == Dice2)
	{
		printf("���� \n");
	}
	int result = Dice1 + Dice2;

	printf("%d + %d = %d \n", Dice1, Dice2, result);
	return result;

}


void Start()
{
	SEED;

	//for (int i = 0; i < 10; ++i)
	//{
	//	int Num;
	//	printf("�Է� : ");
	//	Input(Num);
	//	Dice(Num);
	//}

		printf("%d \n", DoubleDice());

	
	
}

void KeyDown(WPARAM wParam)
{
	switch (wParam)
	{

	}


}

void Paint(HDC& hdc)
{


}

void Update()
{

}
#endif
