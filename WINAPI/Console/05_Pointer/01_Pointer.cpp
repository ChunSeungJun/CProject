#include "Header.h"

#define Theory

#ifdef Theory

void PlusTen(int a)
{
	printf("���� ���ڰ� ������ : %d \n", a);
	a += 10;
	printf("���� ���ڰ� ������ : %d \n", a);

}

void Start()
{
	int A = 10;

	// ������ ���� (Pointer Variable)
	// ������ �ּҰ��� ������ �� �ִ� ����Դϴ�.


	PlusTen(A);
	printf(" A : %d \n", A);
	printf("&A : %p \n", &A);
	// & : �ּҿ�����
	// 	   �ǿ����� �տ� ����Ѵٸ�
	//	   �ش� ������ �ּҸ� ��ȯ�մϴ�.
	// %p : �ּҰ��� �޾� ����ϴ� ���Ĺ����Դϴ�.

	// ������ ���� ����
	// �ڷ���* �ĺ���;
	// �� �� �ڷ����� ������ �ּ� ������ �ڷ����� ��ġ�Ͽ��� �մϴ�.

	int* p;
	p = &A;

	printf(" p : %p \n", p);
	// ������ ��������
	// �ּҰ��� �����ϰ� �ִ� �����̹Ƿ�
	// �ڱ� �ڽŸ��� �ּҰ��� �����ϴ�.
	printf("&p : %p \n", &p);

	// �����ϰ� �ִ� �ּ� ������ �����ϴ� ���
	// *�����ͺ���
	printf("*p : %d \n", *p);
	// * : ������ �����ڶ� �ϸ�
	//     �������� �����ڶ�� �մϴ�.
	//     �����ϰ� �ִ� �ּҰ����� ������ �� �ִ� ����Դϴ�.

	// ����Ű�� �ִ� �ּҰ����� ���������Ͽ� ���� �ٲߴϴ�.
	*p = 30;
	printf(" A : %d \n", A);

	int B = 30;
	printf("%p \n", &B);
	int* p2 = &B;		// pB ������ �����ȿ� B�� �ּҰ��� ����
	printf("%p \n", p2);
	printf("%p \n", &p2);
	*p2 = 100;
	printf("%d \n", B);

	p = &A;
	p2 = p;


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
