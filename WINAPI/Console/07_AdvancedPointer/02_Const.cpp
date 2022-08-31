#include "Header.h"

void Start()
{
    int Var = 10;
    Var = 20;
    const int Constant = 10;
    //Constant = 20;

    int Test = 0;

    int * Pointer = &Var;
    *Pointer = 30;   // 간접참조로 인한 값 변경 가능
    Pointer = &Test; // 저장하고 있는 주소값 변경 가능

    // 상수를 가리키는 포인터 (상수 포인터x)
    // * 앞에 const 를 붙여 사용이 가능합니다.
    const int * PointerToConstant = &Var;
    // *PointerToConstant = 10; // 간접참조로 인한 값 변경 불가능
    PointerToConstant = &Test;  // 저장하고 있는 주소값 변경 가능

    // 포인터 상수 
    // * 뒤에 const 를 붙여 사용이 가능합니다.
    int * const ConstantPointer = &Var;
    *ConstantPointer = 100;     // 간접참조로 인한 값 변경 가능
    // ConstantPointer = &Test; // 저장하고 있는 주소값 변경 불가능

    // 상수를 가리키는 포인터 상수
    // * 앞 뒤에 const 를 붙여 사용이 가능합니다.
    const int * const ConstantPointerToConstant = &Var;
    // *ConstantPointerToConstant = 200;  // 간접 참조로 인한 값 변경 불가능
    // ConstantPointerToConstant = &Test; // 저장하고 있는 주소 값 변경 불가능
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
