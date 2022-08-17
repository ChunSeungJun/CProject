#include "Header.h"

#define Theory

// 함수
// 중복된 코드를 방지하기 위하여 사용하는 기능힙ㄴ디ㅏ.




#ifdef Theory

void Add(int a, int b)
{
	printf("%d + %d = %d \n", a, b, a + b);
}
int Addition(int a, int b)
{
	return a + b;
}
void Max(int a, int b, int c)
{
	if (a > b) {
		if (a > c) {
			printf("%d \n", a);
		}
		else {
			printf("%d \n", c);
		}
	}
	else if (b > a) {
		if (b > c) {
			printf("%d \n", b);
		}
		else {
			printf("%d \n", c);
		}
	}
	
}
void Calculate(int a, int b)
{
	printf("%d + %d = %d \n", a, b, a + b);
	printf("%d - %d = %d \n", a, b, a - b);
	printf("%d / %d = %d \n", a, b, a / b);
	printf("%d * %d = %d \n", a, b, a * b);
	printf("%d %% %d = %d \n", a, b, a % b);
}

void Start()
{
	Add(10, 20);
	Add(30, 50);
	Add(-10, 20);

	int a = Addition(10, 20);
	printf("%d\n", a);

	Calculate(20, 3);

	printf("\n");

	Max(20, 10, 30);
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
