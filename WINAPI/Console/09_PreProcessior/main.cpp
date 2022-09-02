#include "Header.h"
#include "PreProcessor.h"

struct Struct
{
    int A = 0;
    int B = 0;
};

void Start()
{
    Hello();
    World();
    printf("1 + 3 : %d \n", PLUS(1, 3));
    Ten();
 
    
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
