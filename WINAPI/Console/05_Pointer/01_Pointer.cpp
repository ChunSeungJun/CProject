#include "Header.h"

#define Theory

#ifdef Theory

void PlusTen(int a)
{
	printf("받은 인자값 연산전 : %d \n", a);
	a += 10;
	printf("받은 인자값 연산후 : %d \n", a);

}

void Start()
{
	int A = 10;

	// 포인터 변수 (Pointer Variable)
	// 변수의 주소값을 저장할 수 있는 기능입니다.


	PlusTen(A);
	printf(" A : %d \n", A);
	printf("&A : %p \n", &A);
	// & : 주소연산자
	// 	   피연산자 앞에 사용한다면
	//	   해당 공간의 주소를 반환합니다.
	// %p : 주소값을 받아 출력하는 형식문자입니다.

	// 포인터 변수 선언
	// 자료형* 식별자;
	// 이 때 자료형은 저장할 주소 공간의 자료형과 일치하여야 합니다.

	int* p;
	p = &A;

	printf(" p : %p \n", p);
	// 포인터 변수또한
	// 주소값을 저장하고 있는 공간이므로
	// 자기 자신만의 주소값을 가집니다.
	printf("&p : %p \n", &p);

	// 저장하고 있는 주소 공간에 접근하는 방법
	// *포인터변수
	printf("*p : %d \n", *p);
	// * : 역참조 연산자라 하며
	//     간접접근 연산자라고도 합니다.
	//     저장하고 있는 주소공간에 접근할 수 있는 기능입니다.

	// 가르키고 있는 주소공간에 간접접근하여 값을 바꿉니다.
	*p = 30;
	printf(" A : %d \n", A);

	int B = 30;
	printf("%p \n", &B);
	int* p2 = &B;		// pB 포인터 변수안에 B의 주소값을 저장
	printf("%p \n", p2);
	printf("%p \n", &p2);
	*p2 = 100;
	printf("%d \n", B);

	p = &A;
	p2 = p;


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
