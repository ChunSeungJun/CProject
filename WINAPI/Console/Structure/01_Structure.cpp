#include "Header.h"

//#define Theory

#ifdef Theory

// 구조체(Structure)
// 사용자 정의 자료형으로 기본 자료형을 모아
// 보다 복잡한 자료형을 만들 때 사용하는 기능입니다.

// 사용 방법
// struct 자료형명(구조체명) { 구조체 멤버 }

// 멤버 (Member)
// 구조체를 이루는 요소들을 말합니다.

struct Player
{
	int Lv, Hp, Mp, Atk, Def;

};

// POINT
// <windows.h> 에서 제공하는 구조체 형식입니다,
// x , y 를 저장할 수 있어 좌표값을 설정하는 데 많이 사용됩니다.
POINT point = { 0, 0 };


// RECT
// <windows.h> 에서 제공하는 구조체 형식입니다.
// LEFT , TOP , RIGHT , BOTTOM 을 저장할 수 있습니다.
// 사각형을 구성하는 데 많이 사용합니다.
RECT rect;

void Start()
{
	// Struct 변수 myStruct를 선언합니다.
	Player myStruct;
	myStruct.Lv = 10;
	myStruct.Hp = 20;
	myStruct.Mp = 30;
	myStruct.Atk = 40;
	myStruct.Def = 50;
	printf("Lv : %d \n", myStruct.Lv);
	printf("Hp : %d \n", myStruct.Hp);
	printf("Mp : %d \n", myStruct.Mp);
	printf("Atk : %d \n", myStruct.Atk);
	printf("Def : %d \n", myStruct.Def);
	Visible();
}

void KeyDown(WPARAM wParam)
{
	switch (wParam)
	{
		// case 를 방향키로 설정합니다.
		case VK_LEFT  : point.x -= 5; break;
		case VK_RIGHT : point.x += 5; break;
		case VK_UP    : point.y -= 5; break;
		case VK_DOWN  : point.y += 5; break;

    }

  
}

void Paint(HDC& hdc)
{
	rect = { point.x, point.y,point.x + 50, point.y + 50 };
	Rectangle(hdc, rect.left, rect.top, rect.right, rect.bottom);
  
}

void Update()
{
  
}

#endif


#ifndef Theory
POINT point = { 0, 0 };
POINT point2 = { 0, 0 };
POINT point3 = { 0, 0 };
RECT rect;

void Start()
{
	Visible();
}

void KeyDown(WPARAM wParam)
{
	switch (wParam)
	{
		case VK_LEFT: point.x -= 5; break;
		case VK_RIGHT: point.x += 5; break;
		case VK_UP: point.y -= 5; break;
		case VK_DOWN: point.y += 5; break;
		case VK_SPACE:

			point3 = point;
			point = point2;
			point2 = point3;
			
			
			break;
	}


}

void Paint(HDC& hdc)
{
	
	rect = { point.x, point.y,point.x + 50, point.y + 50 };
	Rectangle(hdc, rect.left, rect.top, rect.right, rect.bottom);
	Ellipse(hdc, point2.x, point2.y, point2.x + 50, point2.y + 50);
	                          

}

void Update()
{

}
#endif
