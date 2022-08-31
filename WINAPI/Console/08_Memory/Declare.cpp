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
    printf("%d", A + B);
}
// 13.
double Sub(double A, double B)
{
    A - B;
    return(A - B);
}

// 17.
static int StaticGlobal = 0;

void Start()
{
    // 1.
    int A = 10;
    // 3.
    static float Pi = 3.1f;
    // 4.
    int* p = new int;
    *p = 100;
    delete p;
    p = nullptr;
    // 5.
    float fArray[5] = { 1.1f,2.2f,3.3f,4.4f,5.5f };
    // 6.
    Struct myStruct;
    myStruct.A = 10;
    myStruct.B = 1.5;
    // 7.
    Struct myStruct2;
    Struct myStruct3;
    Struct StructArray[3] = { myStruct,myStruct2,myStruct3 };
    StructArray[0] = { 1,0.5 };
    StructArray[1] = { 2,1.0 };
    StructArray[2] = { 3,1.5 };
    // 8.
    int* pA = &A;
    *pA = 20;
    // 9. ¸ð¸§
    float* pArray0 = &fArray[0];
    float* pArray1 = &fArray[1];
    float* pArray2 = &fArray[2];
    float* pArray3 = &fArray[3];
    float* pArray4 = &fArray[4];

    *pArray0 = { 0 };
    *pArray1 = { 0 };
    *pArray2 = { 0 };
    *pArray3 = { 0 };
    *pArray4 = { 0 };

    // 14.
    Struct* pStruct = &myStruct;
    *pStruct = { 10, 10.0 };
    
    // 15.
    double* dArray = new double[5];
    dArray[0] = 1;
    dArray[1] = 2;
    dArray[2] = 3;
    dArray[3] = 4;
    dArray[4] = 5;
    delete[] dArray;
    dArray = nullptr;

    // 16.
    Struct* pSArray = new Struct[3];
    pSArray[0] = { 15,15.5 };
    pSArray[1] = { 30,31.5 };
    pSArray[2] = { 45,46.5 };
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
