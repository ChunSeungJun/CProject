#include "Header.h"

void Start()
{
    int Array[5]  = {  1,  2,  3,  4,  5 };

    int Array2[5] = { -1, -2, -3, -4, -5 };

    // 배열의 이름은 주소를 뜻 합니다.
    // 주소를 저장할 수 있는 형태는 포인터 형태이며
    // 배열은 포인터 라는 것을 의미합니다.
    printf("Array : %lld \n", (long long)Array);

    // 배열은 상수 포인터입니다.
    // Array = Array2; 주소값의 변경이 불가능

    for (int i = 0; i < 5; ++i)
        printf("&Array[%d] : %lld \n", i, (long long)&Array[i]);

    printf("*Array     : %d \n",       *Array);
    printf("Array[0]   : %d \n",     Array[0]);
    printf("*&Array[0] : %d \n", *(&Array[0]));

    // [] : 인덱스 위치에 있는 주소값 공간에 접근하는 것을 말합니다.

    for (int i = 0; i < 5; ++i)
        printf("Array + %d : %lld \n", i, (long long)Array + i);

    // 주소값 연산
    // 해당주소 + (n * 해당 주소공간의 자료형)

    for (int i = 0; i < 5; ++i)
        printf("*(Array + %d) : %d \n", i, *(Array + i));

    for (int i = 0; i < 5; ++i)
        printf("Array[%d] : %d \n", i, Array[i]);

    // 배열의 이름은 시작 주소이기 때문에 
    // 포인터에 저장할 수 있습니다.
    int * p = Array;

    for (int i = 0; i < 5; ++i)
    {
        // 주소값 연산으로 각 요소의 주소를 출력합니다.
        printf("p + %d    : %lld \n", i, (long long)(p + i));
        // 각 주소공간의 값에 간접접근 합니다.
        printf("*(p + %d) : %d   \n", i,           *(p + i));
        // 인덱스 연산자를 통하여 각 요소의 값에 접근합니다.
        printf("p[%d]     : %d   \n", i,               p[i]);
    }

    // 배열 포인터 , 포인터 배열 , 함수 포인터
    // 문자열 포인터
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
