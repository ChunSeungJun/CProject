#include "Header.h"

struct Item
{
    // string : ���ڿ��� ������ �� �ִ� �ڷ����Դϴ�.
    string Name = "Item";
    int Lv;
    int Atk;
};

void PrintItem(Item item)
{
    // ����� ���� .c_str() �� ����մϴ�.
    printf("[ %s ] \n", item.Name.c_str());
    printf("Lv : %d | Atk : %d \n", item.Lv, item.Atk);
}

void Start()
{
    Item item;
    item.Name = "������";
    item.Lv = 1;
    item.Atk = 10;
    PrintItem(item);

    // �Է��ҽÿ� cin �� ����մϴ�.
    printf("�������� �̸��� �Է��ϼ��� : ");
    cin >> item.Name;
    PrintItem(item);

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