#include "Header.h"

// 포인터 매개변수
// 주소값을 받는 매개변수를 의미합니다.

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

    printf("CallByValue(Var) 실행 \n");
    CallByValue(Var);

    printf("실행후 Var 의 값 : %d \n", Var);
    cout << endl;
    
    printf("CallByAddress(&Var) 실행 \n");
    CallByAddress(&Var);
    printf("실행후 Var 의 값 : %d \n", Var);
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
