#include "Header.h"

void Start()
{
    //int A = 0;
    //printf("입력  :");
    //Input(A);
    //printf("A : %d \n", A);

    Visible();
}

void KeyDown(WPARAM wParam)
{
    switch (wParam)
    {
    case 'A': printf("A 키 입력 \n" );break;
    case 'S': printf("S 키 입력 \n" );break;
    case 'D': printf("D 키 입력 \n" );break;
    case 'W': printf("W 키 입력 \n" );break;

    }
}

void Paint(HDC& hdc)
{
   
    Rectangle(hdc, 
              150,  // Left
              150,  // Top
              550,  // Right
              350); // Bottom

    Ellipse(hdc,
              150, 
              150, 
              550, 
              350);

    // MoveToEx : 그릴 선의 시작 좌표를 결정합니다. 
    MoveToEx(hdc, 0, 0, NULL);
    // LineTo : 전의 그린 좌표에서 다음 좌표까지 선을 긋습니다.
    LineTo(hdc, 100, 100);
}

void Update()
{
    SLEEP;
    printf("★ ");
}

