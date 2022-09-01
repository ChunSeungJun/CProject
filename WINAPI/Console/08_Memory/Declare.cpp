#include "Header.h"




// 2.
double Global = 1.234;
// 6.
struct Struct
{
    int A = 0;
    double B = 0.0;
};
// 10.
void Hello()
{
    printf("Hello World \n");
}
// 11.
int Seven()
{
    return 7;
}
// 12.
void Add(int A, int B)
{
    A + B;
    printf("%d + %d %d",A,B , A + B);
}
// 13.
double Sub(double A, double B)
{
    return A - B;
}

// 17.
// 전역 변수과의 차이점
// 해당 파일 안에서만 사용할 수 있는 것이 특징입니다.
// 전역 변수와 같은 경우 extern 키워드를 이용하여 외부 파일의
// 전역변수 사용이 가능합니다.
static int StaticGlobal = 10;

// int main() : 프로그램의 시작지점을 지정해주는 기능
// Start : 프로그램이 시작한 후 단 한번 실행하는 명령들을 서술하는 공간
void Start()
{
    // 1.
    int A = 10;
    // 2.
    Global;
    Global += 10;
    printf("Global : %.3lf \n", Global);
    // 3.
    // 정적 변수 : 한번 선언이 된다면 프로그램이 종료될 때 까지 남아있는 데이터입니다.
    // 정적 지역 변수 : 지역성을 가지고 있는 정적 변수를 의미합니다.
    static float Pi = 3.14f;
    printf("Pi : %.2f \n", (Pi += 0.01f));
    // 4.
    // 1번째 방법
    // int* p = new int;
    // *p = 100;
    // 2번째 방법
    int* p = new int(100);
    printf("p : %d \n", *p);
    delete p;
    p = nullptr;
    // 5.
    float fArray[5] = { 1.1f,2.2f,3.3f,4.4f,5.5f };
    // 6.
    // 함수 내부에서 구조체를 정의하는 것은 해당 함수에서만 이 구조체를 사용하겠다고 명시합니다.
    Struct myStruct;
    myStruct.A = 10;
    myStruct.B = 1.5;
    // 7.
    // Struct myStruct2;
    // Struct myStruct3;
    // Struct StructArray[3] = { myStruct,myStruct2,myStruct3 };
    // StructArray[0] = { 1,0.5 };
    // StructArray[1] = { 2,1.0 };
    // StructArray[2] = { 3,1.5 };
    Struct StructArray[3] = { {1,0.5}, {2, 1.0}, {3, 1.5} };
    // 8.
    int* pA = &A;
    *pA = 20;
    printf("A : %d \n", A);
    // 9. 모름
    float* pArray = fArray;
    for (int i = 0; i < 5; ++i)
    {
        pArray[i] = 0;
        printf("*(pArray + %d) : %.1f \n", i, *(pArray + i));
    }
    
    // 14.
    Struct* pStruct = &myStruct;
    *pStruct = { 10, 10.0 };
    printf("myStruct.A : %d \n", myStruct.A);
    printf("myStruct.B : %.1f \n", myStruct.B);
    
    // 15.
    double* dArray = new double[5]{ 1.0,2.0,3.0,4.0,5.0 };
    for (int i = 0; i < 5; ++i)
        printf("dArray[%d] : %.1f \n",i, dArray[i]);
    //dArray[0] = 1;
    //dArray[1] = 2;
    //dArray[2] = 3;
    //dArray[3] = 4;
    //dArray[4] = 5;
    delete[] dArray;
    dArray = nullptr;

    // 16.
    Struct* pSArray = new Struct[3]{ {15,15.5},{30,31.5},{45,46.5} };
    // pSArray[0] = { 15,15.5 };
    // pSArray[1] = { 30,31.5 };
    // pSArray[2] = { 45,46.5 };
    for (int i = 0; i < 3; ++i)
    {   
        // pSArray[i].A = (i + 1) * 15;
        // pSArray[i].B = 15.5 + ((i + 1) * 15.5);
        printf("pSArray[%d].A : %d \n", i, pSArray[i].A);
        printf("pSArray[%d].B : %.1f \n", i, pSArray[i].B);
    }
    delete[] pSArray;
    pSArray = nullptr;

    // 17.
    StaticGlobal = 10;
    // 18.
    bool False;
    False = true;
    // 19.
    string str = "";
    str = "Hello";
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
