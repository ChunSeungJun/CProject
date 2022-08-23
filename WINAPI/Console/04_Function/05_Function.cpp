#include "Header.h"

#define Theory

// 재귀함수
// 함수의 정의안에 자기 자신을 호출하는 함수를 의밈합니다.


#ifdef Theory

void Hello()
{
	printf("Hello");
	Hello();
}

void Func(int Num)
{
	if (Num == 0) return;
	printf("Num : %d \n", Num); // 4 3 2 1
	Func(Num - 1); // 3 2
}

bool DoubleDice(int Count)
{
	if (Count == 0) return false;


	int Dice1 = Random(1, 6);
	int Dice2 = Random(1, 6);

	printf("기회 : %d \n", Count);
	printf("Dice1 : %d \n",Dice1);
	printf("Dice2 : %d \n",Dice2);
	if (Dice1 == Dice2) return true;
	else DoubleDice(Count - 1); // 4 3 2 1 0

}

int factorial(int Count)
{
	if (Count == 1) return 1;
	return Count * factorial(Count - 1);
}


void Start()
{
	SEED;
	// Hello();
	// Func(4);

	//if (DoubleDice(5))	printf("Double ! \n");
	//else printf("Double 이 나오지 않았습니다. \n");
	factorial(5);
	printf("%d \n", factorial(5));
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
void Start()
{

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
