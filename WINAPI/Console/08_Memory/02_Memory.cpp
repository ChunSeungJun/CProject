#include "Header.h"

// 외부의 전역 변수 Global 을 사용합니다.
extern int Global;
// extern static int G_Static;
// 외부 파일에 잇는 정적 전역 변수는 사용이 불가능합니다.

struct Monster
{
    string Name = "";
    int Hp = 0;
};

void Static()
{
    printf("Global : %d \n", Global);
    int Local = 10;
    Local += 10;
    // 정적 지역 변수
    // 해당 중괄호 안에서만 사용이 가능하되
    // 한번 할당되면 프로그램이 종료될 때까지 남아있는 변수입니다.
    // 단 한번의 선언만 이루어집니다.
    static int StaticVar = 10;
    StaticVar += 10;
    printf("Local     : %d \n", Local);
    printf("StaticVar : %d \n", StaticVar);
}


void Start()
{
    Static();
    Static();
    Static();
    Static();
    Static();

    Monster * p = new Monster;
    p->Hp = 100;
    p->Name = "Monster";

    if (p->Hp <= 0)
    {
        delete p;
        p = nullptr;
    }

    // int 5개를 저장할 수 있는 배열을 동적할당합니다.
    int* pArray = new int[5];
    pArray[0] = 10;
    pArray[1] = 20;
    pArray[2] = 30;
    pArray[3] = 40;
    pArray[4] = 50;

    // 배열을 해제할 시 delete[] 연산자를 사용합니다.
    delete[] pArray;
    pArray = nullptr;

    Monster* pSArray = new Monster[3];
    pSArray[0].Hp = 10;

    delete[] pSArray;
    pSArray = nullptr;


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
