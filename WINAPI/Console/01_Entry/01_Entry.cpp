#include "Header.h"

void Start()
{
    //int A = 0;
    //printf("�Է�  :");
    //Input(A);
    //printf("A : %d \n", A);

    Visible();
}

void KeyDown(WPARAM wParam)
{
    switch (wParam)
    {
    case 'A': printf("A Ű �Է� \n" );break;
    case 'S': printf("S Ű �Է� \n" );break;
    case 'D': printf("D Ű �Է� \n" );break;
    case 'W': printf("W Ű �Է� \n" );break;

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

    // MoveToEx : �׸� ���� ���� ��ǥ�� �����մϴ�. 
    MoveToEx(hdc, 0, 0, NULL);
    // LineTo : ���� �׸� ��ǥ���� ���� ��ǥ���� ���� �߽��ϴ�.
    LineTo(hdc, 100, 100);
}

void Update()
{
    SLEEP;
    printf("�� ");
}

