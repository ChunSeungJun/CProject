#include "Header.h"

// 구조체
// 사용자 정의 자료형
// 기본자료형을 종합하여 만드는 자료형

struct DataType
{
    char          Char;
    short        Short;
    int            Int;
    long          Long;
    long long LongLong;
    float        Float;
    double      Double;
};

// Player 구조체를 만들고
// Lv , Hp , Mp , Atk , Def 를 가지고
// 모든 맴버를 원하는 값으로 초기화해 주세요.

struct Player // 구조체 등록시 초기화
{
    int Lv  = 5;
    int Hp  = 100;
    int Mp  = 50;
    int Atk = 10;
    int Def = 30;
};

// 구조체 매개변수 또한 포인터 형식으로 사용할 수 있습니다.
void LevelUp(Player * pPlayer)
{
    pPlayer->Lv++;
    pPlayer->Hp += pPlayer->Lv * 10;
    pPlayer->Mp += pPlayer->Lv * 5;
    pPlayer->Atk += pPlayer->Lv * 3;
    pPlayer->Def += pPlayer->Lv * 2;
}

void PrintPlayer(Player player)
{
    printf("Player.Lv  : %d \n", player.Lv );
    printf("Player.Hp  : %d \n", player.Hp );
    printf("Player.Mp  : %d \n", player.Mp );
    printf("Player.Atk : %d \n", player.Atk);
    printf("Player.Def : %d \n", player.Def);
}


void Start()
{
    Player player1; // 구조체 변수 선언후 맴버 접근 초기화
    player1.Lv  =  1;
    player1.Hp  = 10;
    player1.Mp  =  5;
    player1.Atk =  1;
    player1.Def =  3;

    // 구조체 변수 선언후 초기화
    Player player2 = { 100, 20000, 3000, 350, 400 };

    // 포인터 변수
    Player * pPlayer = &player1;

    printf("&player1 : %p \n", &player1);
    printf(" pPlayer : %p \n",  pPlayer);
    (*pPlayer).Atk = 30;
    printf("player1.Atk : %d \n", player1.Atk);
    pPlayer->Atk = 100;
    printf("player1.Atk : %d \n", player1.Atk);
    // -> : Member 간접 접근 연산자로
    //      가리키고 있는 주소의 Member에 간접접근을 하는 연산자입니다.
    //      (*포인터). 의 Member 접근을 간략하게 사용할 수 있습니다.

    LevelUp(&player1);
    PrintPlayer(player1);

    /*
    int myInt;
    myInt = 10;

    int * p = &myInt;
    DataType datatype;
    // datatype = 20;
    datatype.Char = 20;
    // 맴버접근 연산자를 사용하여 
    // 구조체의 공간에 접근이 가능합니다.
    */
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
