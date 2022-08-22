#include "Header.h"

#define Theory

#ifdef Theory

struct Item
{
	int EquipLevel = 0;
	int Atk = 0;
	int Def = 0;
};
struct Player
{
	int Lv = 0;
	int Hp = 0;
	int Mp = 0;
	Item item;
};




void Equip(Player player, Item item)
{
	player.item = item;

}
void printItem(Item item)
{
	printf("[미친 아이템] \n");
	printf("착용레벨 : %d \n", item.EquipLevel);
	printf("공격력   : %d \n", item.Atk);
	printf("방어력   : %d \n", item.Def);
}


// 구조체 매개변수
void printPlayer(Player player)
{
	printf("[Player] \n");
	printf("Lv : %d \n", player.Lv);
	printf("Hp : %d \n", player.Hp);
	printf("Mp : %d \n", player.Mp);
	printItem(player.item);
}




void Start()
{
	Player player;
	player.Lv = 1;
	player.Hp = 100;
	player.Mp = 50;


	Item sword;
	sword.EquipLevel = 1;
	sword.Atk = 5;
	sword.Def = 1;

	player.item = sword;

	printPlayer(player);

	cout << endl;

	Item bow = { 1, 3, 1 };
	Equip(player, bow);
	printPlayer(player);
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

#endif

#ifndef Theory
void Start()
{

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
#endif
