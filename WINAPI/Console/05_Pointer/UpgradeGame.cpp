#include "Header.h"

struct Item
{
    // string : 문자열을 저장할 수 있는 자료형입니다.
    string Name = "Item";
    int Lv;
    int Atk;
};

void PrintItem(Item item)
{
    // 출력할 때는 .c_str() 을 사용합니다.
    printf("[ %s ] \n", item.Name.c_str());
    printf("Lv : %d | Atk : %d \n", item.Lv, item.Atk);
}

void Start()
{
    Item item;
    item.Name = "아이템";
    item.Lv = 1;
    item.Atk = 10;
    PrintItem(item);

    // 입력할시엔 cin 을 사용합니다.
    printf("아이템의 이름을 입력하세요 : ");
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