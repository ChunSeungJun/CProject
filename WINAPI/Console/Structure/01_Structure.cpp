#include "Header.h"

//#define Theory

#ifdef Theory

// ����ü(Structure)
// ����� ���� �ڷ������� �⺻ �ڷ����� ���
// ���� ������ �ڷ����� ���� �� ����ϴ� ����Դϴ�.

// ��� ���
// struct �ڷ�����(����ü��) { ����ü ��� }

// ��� (Member)
// ����ü�� �̷�� ��ҵ��� ���մϴ�.

struct Player
{
	int Lv, Hp, Mp, Atk, Def;

};

// POINT
// <windows.h> ���� �����ϴ� ����ü �����Դϴ�,
// x , y �� ������ �� �־� ��ǥ���� �����ϴ� �� ���� ���˴ϴ�.
POINT point = { 0, 0 };


// RECT
// <windows.h> ���� �����ϴ� ����ü �����Դϴ�.
// LEFT , TOP , RIGHT , BOTTOM �� ������ �� �ֽ��ϴ�.
// �簢���� �����ϴ� �� ���� ����մϴ�.
RECT rect;

void Start()
{
	// Struct ���� myStruct�� �����մϴ�.
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
		// case �� ����Ű�� �����մϴ�.
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
