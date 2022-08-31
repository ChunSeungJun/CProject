#include "Header.h"

void Start()
{
    int Num = 256;
    char * p = reinterpret_cast<char*>(&Num);

    printf("&Num : %p \n", &Num);
    printf("   p : %p \n",    p);
    printf(" Num : %d \n",  Num);
    printf("  *p : %d \n",   *p);
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
