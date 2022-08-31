#include "Header.h"

// ������ �Ű�����
// �ּҰ��� �޴� �Ű������� �ǹ��մϴ�.

void CallByValue(int v)
{ 
    printf("  v : %d \n",  v);
    printf(" &v : %p \n", &v);
    v += 10; 
    printf("  v : %d \n",  v);
}

void CallByAddress(int * p)
{ 
    printf("  p : %p \n",  p);
    printf(" &p : %p \n", &p);
    printf(" *p : %d \n", *p);
    *p += 10; 
    printf(" *p : %d \n", *p);
}

void Start()
{
    int Var = 10;
    printf(" Var : %d \n",  Var);
    printf("&Var : %p \n", &Var);
    cout << endl;

    printf("CallByValue(Var) ���� \n");
    CallByValue(Var);

    printf("������ Var �� �� : %d \n", Var);
    cout << endl;
    
    printf("CallByAddress(&Var) ���� \n");
    CallByAddress(&Var);
    printf("������ Var �� �� : %d \n", Var);
}

void KeyDown(WPARAM wParam)
{
    switch (wParam)
    {

    }
}

void Paint(HDC & hdc)
{

}

void Update()
{

}
