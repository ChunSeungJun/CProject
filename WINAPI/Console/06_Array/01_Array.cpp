#include "Header.h"

// 배열
// 같은 자료형의 공간을 묶어놓을 수 있는 기능입니다.

// 배열의 선언
// 자료형 배열이름 [배열의 길이];
// 자료형 : 어떤 공간을 묶어놓을 지 결정합니다.
// 배열이름 : 묶어놓은 공간의 이름을 결정합니다.
// 배열의 길이 : 몇 개의 공간을 생성할 지 결정합니다.

// ex ) char String [5];
// char 자료형 5개 공간을 묶어놓은 배열 String 을 선언합니다.

// 배열에 존재하는 각각의 공간을 요소라 합니다.
// 요소에 접근할 시 [] 연산자를 사용합니다.

// [] 연산자
// 인덱스 연산자라 하며 [index] 로 사용할 수 있습니다.
// index 번 째의 요소에 접근합니다.

// index
// 배열의 요소를 구분하기 위한 수를 의미합니다.
// 배열의 요소의 첫 시작은 0 으로 시작합니다.
// 인덱스는 음수 값이 될 수 없고 배열의 길이가 될 수 없습니다.

// 배열의 크기
// 선언된 자료형 * 배열의 길이

struct Arr
{
    int a;
    int b;
    int c;
    int d;
    int e;
};

void Start()
{
    /*
    int * p = new int[5]{ 1, 2, 4, 8, 16 };
    int value1 = p[4] - p[1];
    int value2 = (p + 4) - (p + 1);
    int value3 = (long)(p + 4) - (long)(p + 1);

    printf("vlaue1 : %d \n", value1);
    printf("vlaue2 : %d \n", value2);
    printf("vlaue3 : %d \n", value3);
    */

    // int 자료형 5개를 저장할 수 있는 배열 Array 를 선언합니다.
    int Array[5];

    // Array = 10;
    // 1 번째 부터 5 번째 공간중 어느 공간에 10을 저장할 지
    // 알 수 없기 때문에 Error 가 납니다.'

    // [index] 연산자를 사용하여
    // 배열의 각 요소에 접근합니다.
    Array[0] = 1;
    Array[1] = 2;
    Array[2] = 3;
    Array[3] = 4;
    Array[4] = 5;
    // Array[5] = 6; 배열의 인덱스번호는 배열의 길이 이상이 될 수없습니다.

    printf("Array[0] : %d \n", Array[0]);
    printf("Array[1] : %d \n", Array[1]);
    printf("Array[2] : %d \n", Array[2]);
    printf("Array[3] : %d \n", Array[3]);
    printf("Array[4] : %d \n", Array[4]);

    // int 자료형 데이터 5개를 저장할 수 있는 배열 Array2 를 선언하고
    // 0 번쨰 인덱스 요소부터 차례대로 10, 20, 30, 40, 50 로 초기화합니다.
    int Array2[5] = { 10, 20, 30, 40, 50 };
    Array[3] = 45;

    printf("Array2[0] : %d \n", Array2[0]);
    printf("Array2[1] : %d \n", Array2[1]);
    printf("Array2[2] : %d \n", Array2[2]);
    printf("Array2[3] : %d \n", Array2[3]);
    printf("Array2[4] : %d \n", Array2[4]);

    // 배열의 요소를 초기화하지 않는다면 쓰레기값이 들어갑니다.
    int Array3[5];

    printf("Array3[0] : %d \n", Array3[0]);
    printf("Array3[1] : %d \n", Array3[1]);
    printf("Array3[2] : %d \n", Array3[2]);
    printf("Array3[3] : %d \n", Array3[3]);
    printf("Array3[4] : %d \n", Array3[4]);

    // 모든 배열의 요소를 0 으로 초기화합니다.
    int Array4[5] = { 0 };
    
    printf("Array4[0] : %d \n", Array4[0]);
    printf("Array4[1] : %d \n", Array4[1]);
    printf("Array4[2] : %d \n", Array4[2]);
    printf("Array4[3] : %d \n", Array4[3]);
    printf("Array4[4] : %d \n", Array4[4]);

    // 배열을 선언과 동시에 초기화하지 않을시 초기화하지 않은
    // 요소는 모두 0 으로 설정됩니다.

    float Array5[5] = { 1.1f, 2.2f, 3.3f };

    printf("Array5[0] : %.1f \n", Array5[0]);
    printf("Array5[1] : %.1f \n", Array5[1]);
    printf("Array5[2] : %.1f \n", Array5[2]);
    printf("Array5[3] : %.1f \n", Array5[3]);
    printf("Array5[4] : %.1f \n", Array5[4]);

    // 반복문을 이용하면 배열을 좀 더 쉽게 다룰 수 있습니다.

    int Array6[5] = { 0 };

    for (int i = 0; i < 5; ++i)
    {
        Array6[i] = (i + 1)* 100;
        printf("Array6[%d] : %d \n", i, Array6[i]);
    }

    // 배열의 길이를 정하지 않고 선언한다면 선언과 동시에 
    // 초기화한 요소만큼 배열의 길이가 결정됩니다.
    int Array7[] = { 1, 2, 3 };

    // sizeof(배열이름) : 배열의 총 크기
    //                  12 / 4 == 3
    for (int i = 0; i < sizeof(Array7) / sizeof(int); ++i)
        printf("%d ", Array7[i]);
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
