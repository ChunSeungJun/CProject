#include "Header.h"

//#define Theory

#ifdef Theory
// 반환형과 매개변수가 없는 함수
// void : 반환형이 없음을 명시합니다.
void Hello()
{
	printf("Hello \n");
}
// 반환형은 존재하고 매개변수가 없는 함수
// return 으로 반환값을 반환합니다.
// return Data;
// Data 형식과 맞는 반환형을 명시하여야 합니다.
int Input()
{
	int Num;
	printf("입력 : ");
	scanf("%d", &Num);
	return Num;
}

// 반환형이 없고 매개변수가 존재하는 함수
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
		printf("%d Damage 를 받습니다. \n", Damage);
		printf("Hp : %d \n", Hp);
		Sleep(150);
	}
	printf("%d Hp 는 %d Damage 를 %d 번 버틸 수 있습니다. \n", prev, Damage, Count);
}
// 반환형과 매개변수가 존재하는 함수
bool  Successed(int Percent)
{
	return ((rand() % 100) + 1) <= Percent;
}





void Start()
{
	// bool : true 와 false 를 저장할 수 있는 자료형입니다.
	bool bTrue = true;
	bool bFalse = false;

	Hello();
	int Num = Input();
	printf("Num : %d \n", Num);
	CalculateDamage(1000, 70);
	
	for (int i = 0; i < 10; ++i) {
		if (Successed(50)) { printf("50%% 의 확률로 성공하였습니다 ! \n"); }
		else { printf("50%% 의 확률로 실패하였습니다 ! \n"); }
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
		printf("정답입니다. \n");
	}
	else {
		printf("틀렸습니다. \n");
	}
}

int DoubleDice(void)
{
	int Dice1 = rand() % 6 + 1;
	int Dice2 = rand() % 6 + 1;
	if (Dice1 == Dice2)
	{
		printf("더블 \n");
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
	//	printf("입력 : ");
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
