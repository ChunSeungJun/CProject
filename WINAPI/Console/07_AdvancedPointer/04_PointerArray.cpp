#include "Header.h"

struct Monster
{
    string Name = "";
    int Hp  = 0;
    float Atk = 0.f;
    unsigned char Lv  = 0;
};

void Start()
{
    //int A = 10;
    //int B = 20;
    //int C = 30;

    //int* p0 = &A;
    //int* p1 = &B;
    //int* p2 = &C;

    //// 위의 형식을 포인터 배열을 이용하여 쉽게 저장할 수 있습니다.
    //// 포인터 배열 : 요소를 주소값으로 가지는 배열을 의미합니다.
    //int* pArray[3] = { &A,&B,&C };

    //*pArray[0] = 100;

    //printf("[A : %d] [&A : %p] \n", A, &A);
    //printf("[B : %d] [&B : %p] \n", B, &B);
    //printf("[C : %d] [&C : %p] \n", C, &C);

    //for (int i = 0; i < 5; ++i)
    //{
    //    printf(" pArray[%d] : %p \n", i, pArray[i]);    // pArray 요소
    //    printf("*pArray[%d] : %d \n", i, *pArray[i]);   // pArray 요소의 간접참조
    //    printf("&pArray[%d] : %p \n", i, &pArray[i]);   // pArray 요소의 주소값
    //}

    Monster myMonster1 = { "Boss", 300,30,3 };
    Monster myMonster2 = { "Bo",   200,20,2 };
    Monster myMonster3 = { "ss",   100,10,1 };

    struct Monster  *p[3] = { &myMonster1, &myMonster2, &myMonster3 };
    


    for (int i = 0; i < 3; ++i)
    {
        printf("[%s] \n", p[i]->Name.c_str());
        printf("Hp  : %d \n", p[i]->Hp  += 100);
        printf("Atk : %.1f \n", p[i]->Atk += 10.f);
        printf("Lv  : %d \n", p[i]->Lv += 1 );
    }
  

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
