#include "Header.h"

void Start()
{
    int Var = 10;
    Var = 20;
    const int Constant = 10;
    //Constant = 20;

    int Test = 0;

    int * Pointer = &Var;
    *Pointer = 30;   // ���������� ���� �� ���� ����
    Pointer = &Test; // �����ϰ� �ִ� �ּҰ� ���� ����

    // ����� ����Ű�� ������ (��� ������x)
    // * �տ� const �� �ٿ� ����� �����մϴ�.
    const int * PointerToConstant = &Var;
    // *PointerToConstant = 10; // ���������� ���� �� ���� �Ұ���
    PointerToConstant = &Test;  // �����ϰ� �ִ� �ּҰ� ���� ����

    // ������ ��� 
    // * �ڿ� const �� �ٿ� ����� �����մϴ�.
    int * const ConstantPointer = &Var;
    *ConstantPointer = 100;     // ���������� ���� �� ���� ����
    // ConstantPointer = &Test; // �����ϰ� �ִ� �ּҰ� ���� �Ұ���

    // ����� ����Ű�� ������ ���
    // * �� �ڿ� const �� �ٿ� ����� �����մϴ�.
    const int * const ConstantPointerToConstant = &Var;
    // *ConstantPointerToConstant = 200;  // ���� ������ ���� �� ���� �Ұ���
    // ConstantPointerToConstant = &Test; // �����ϰ� �ִ� �ּ� �� ���� �Ұ���
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
