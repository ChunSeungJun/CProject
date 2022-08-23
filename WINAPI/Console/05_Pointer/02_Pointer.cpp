#include "Header.h"

#define Theory

#ifdef Theory

void Start()
{
	float A = 1.234f;
	float B = 3.14f;
	float C = 0;

	float* p  = &A;
	float* p2 = &B;
	float* p3 = &C;
	printf("%p \n", p);
	printf("%p \n", p2);
	*p3 = *p;
	*p = *p2;
	*p2 = *p3;

	printf("%.2f \n", *p);
	printf("%.3f \n", *p2);
	





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
