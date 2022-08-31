#include "Header.h"

// ����ü
// ����� ���� �ڷ���
// �⺻�ڷ����� �����Ͽ� ����� �ڷ���

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

// Player ����ü�� �����
// Lv , Hp , Mp , Atk , Def �� ������
// ��� �ɹ��� ���ϴ� ������ �ʱ�ȭ�� �ּ���.

struct Player // ����ü ��Ͻ� �ʱ�ȭ
{
    int Lv  = 5;
    int Hp  = 100;
    int Mp  = 50;
    int Atk = 10;
    int Def = 30;
};

// ����ü �Ű����� ���� ������ �������� ����� �� �ֽ��ϴ�.
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
    Player player1; // ����ü ���� ������ �ɹ� ���� �ʱ�ȭ
    player1.Lv  =  1;
    player1.Hp  = 10;
    player1.Mp  =  5;
    player1.Atk =  1;
    player1.Def =  3;

    // ����ü ���� ������ �ʱ�ȭ
    Player player2 = { 100, 20000, 3000, 350, 400 };

    // ������ ����
    Player * pPlayer = &player1;

    printf("&player1 : %p \n", &player1);
    printf(" pPlayer : %p \n",  pPlayer);
    (*pPlayer).Atk = 30;
    printf("player1.Atk : %d \n", player1.Atk);
    pPlayer->Atk = 100;
    printf("player1.Atk : %d \n", player1.Atk);
    // -> : Member ���� ���� �����ڷ�
    //      ����Ű�� �ִ� �ּ��� Member�� ���������� �ϴ� �������Դϴ�.
    //      (*������). �� Member ������ �����ϰ� ����� �� �ֽ��ϴ�.

    LevelUp(&player1);
    PrintPlayer(player1);

    /*
    int myInt;
    myInt = 10;

    int * p = &myInt;
    DataType datatype;
    // datatype = 20;
    datatype.Char = 20;
    // �ɹ����� �����ڸ� ����Ͽ� 
    // ����ü�� ������ ������ �����մϴ�.
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
