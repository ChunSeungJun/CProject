#pragma once

#pragma warning (disable : 4996)

#pragma comment(linker, "/entry:WinMainCRTStartup /subsystem:console")

#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

bool bVisible = false;

#define PI 3.14f
#define ADD(x, y) x + y
#define SUB(x, y) x - y 
#define MUL(x, y) x * y 
#define DIV(x, y) x / y

#define SEED srand(GetTickCount64())

#define PAUSE system("pause")
#define SLEEP Sleep(500)
#define CLEAR system("cls")

__forceinline const char* S_Bool(bool Boolean)
{
    return (Boolean) ? "TRUE" : "FALSE";
}

__forceinline __int32 Random(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

void Input(char& Var)
{
    scanf_s("%c", &Var);
}
void Input(short& Var)
{
    scanf_s("%d", &Var);
}
void Input(int& Var)
{
    scanf_s("%d", &Var);
}
void Input(long long& Var)
{
    scanf_s("%lld", &Var);
}
void Input(char* const str)
{
    scanf("%[^\n]s", &str);
    while (getchar() != '\n');
}

void Next()
{
    printf("\n[Enter]::다음명령 실행\n");
    system("pause > nul");
}

void Result()
{
    printf("\n[Enter]::Log 를 제외한 결과창 보기\n");
    system("pause > nul");
}

__forceinline void Visible()
{ bVisible = true; }