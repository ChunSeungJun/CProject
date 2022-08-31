#include "Header.h"

struct Struct
{
    int a0;
    int a1;
    int a2;
    int a3;
    int a4;
};

void Start()
{
    int A0 = 10;
    int A1 = 20;
    int A2 = 30;
    int A3 = 40;
    int A4 = 50;
    printf("변수의 경우\n");
    printf("[ A0 : %d ][ &A0 : %lld ]\n", A0, (long long)&A0);
    printf("[ A1 : %d ][ &A1 : %lld ]\n", A1, (long long)&A1);
    printf("[ A2 : %d ][ &A2 : %lld ]\n", A2, (long long)&A2);
    printf("[ A3 : %d ][ &A3 : %lld ]\n", A3, (long long)&A3);
    printf("[ A4 : %d ][ &A4 : %lld ]\n", A4, (long long)&A4);
    printf("\n");

    int Array[5];
    printf("배열의 경우 \n");
    for (int i = 0; i < 5; ++i)
    {
        Array[i] = (i + 1) * 10;
        printf("[ Array[%d] : %d ][ &Array[%d] : %lld ]\n",
            i, Array[i], i, (long long)&Array[i]);
    }
    printf("\n");

    // 주소값은 저장공간에 따라 할당됩니다.
    // 배열은 각 공간의 주소는 시작 주소로 부터
    // 저장하고 있는 자료형의 주소만큼 할당됩니다.
    
    // 구조체와 같은 경우 인덱스 값을 사용하지 못하기 때문에
    // 규칙적인 초기화를 반복문을 통해 불가능합니다.
    // 맴버의 수를 늘려 저장 공간을 넉넉하게 만든다고 가정한다면
    // 해당 맴버들을 사용하지 않을 때 메모리를 낭비하게 됩니다.
    Struct myStruct1 = { 10, 20, 30, 40, 50 };
    myStruct1.a0 *= 10;
    myStruct1.a1 *= 10;
    myStruct1.a2 *= 10;
    myStruct1.a3 *= 10;
    myStruct1.a4 *= 10;

    printf("myStruct1.a0 : %d \n", myStruct1.a0);
    printf("myStruct1.a1 : %d \n", myStruct1.a1);
    printf("myStruct1.a2 : %d \n", myStruct1.a2);
    printf("myStruct1.a3 : %d \n", myStruct1.a3);
    printf("myStruct1.a4 : %d \n", myStruct1.a4);
    printf("\n");

    Struct myStruct2 = { -100, -200, -300, -400, -500 };

    printf("myStruct2.a0 : %d \n", myStruct2.a0);
    printf("myStruct2.a1 : %d \n", myStruct2.a1);
    printf("myStruct2.a2 : %d \n", myStruct2.a2);
    printf("myStruct2.a3 : %d \n", myStruct2.a3);
    printf("myStruct2.a4 : %d \n", myStruct2.a4);
    printf("\n");

    Struct temp = myStruct1;
    myStruct1 = myStruct2;
    myStruct2 = temp;

    printf("Swap ! \n");

    printf("myStruct1.a0 : %d \n", myStruct1.a0);
    printf("myStruct1.a1 : %d \n", myStruct1.a1);
    printf("myStruct1.a2 : %d \n", myStruct1.a2);
    printf("myStruct1.a3 : %d \n", myStruct1.a3);
    printf("myStruct1.a4 : %d \n", myStruct1.a4);
    printf("\n");

    printf("myStruct2.a0 : %d \n", myStruct2.a0);
    printf("myStruct2.a1 : %d \n", myStruct2.a1);
    printf("myStruct2.a2 : %d \n", myStruct2.a2);
    printf("myStruct2.a3 : %d \n", myStruct2.a3);
    printf("myStruct2.a4 : %d \n", myStruct2.a4);
    printf("\n");

    int Array2[5] = { -10, -20, -30, -40, -50 };

    // int tempArray[5] = Array;
    // Array = Array2;
    // Array2 = tempArray;
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