#include "Header.h"

// �ܺ��� ���� ���� Global �� ����մϴ�.
extern int Global;
// extern static int G_Static;
// �ܺ� ���Ͽ� �մ� ���� ���� ������ ����� �Ұ����մϴ�.

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
    // ���� ���� ����
    // �ش� �߰�ȣ �ȿ����� ����� �����ϵ�
    // �ѹ� �Ҵ�Ǹ� ���α׷��� ����� ������ �����ִ� �����Դϴ�.
    // �� �ѹ��� ���� �̷�����ϴ�.
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

    // int 5���� ������ �� �ִ� �迭�� �����Ҵ��մϴ�.
    int* pArray = new int[5];
    pArray[0] = 10;
    pArray[1] = 20;
    pArray[2] = 30;
    pArray[3] = 40;
    pArray[4] = 50;

    // �迭�� ������ �� delete[] �����ڸ� ����մϴ�.
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
