#include "Header.h"

#define Theory

#ifdef Theory

void factorial(int Num)
{
	int Num2 = 1;
	for (int i = 2; i <= Num; ++i)
	{
		Num2 *= i;
	}
	printf("%d \n", Num2);
}

void Pyramid(int Num)
{
	for (int j = 0; j < 100; ++j)
	{
		for (int i = 0; i < Num; ++i)
		{
			printf(" ");
		}
		--Num;
		int b;
		for (b = 11; b != 10; ++b)
		{
			printf("*");
		}
		b -= 2;
		printf("\n");
		if (Num == 0) break;
	}
	
}

void Start()
{
	int Num = 0;
	Input(Num);
	factorial(Num);

	Pyramid(5);
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
