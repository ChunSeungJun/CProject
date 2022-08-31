#include "Header.h"

void Start()
{
    int Array[5]  = {  1,  2,  3,  4,  5 };

    int Array2[5] = { -1, -2, -3, -4, -5 };

    // �迭�� �̸��� �ּҸ� �� �մϴ�.
    // �ּҸ� ������ �� �ִ� ���´� ������ �����̸�
    // �迭�� ������ ��� ���� �ǹ��մϴ�.
    printf("Array : %lld \n", (long long)Array);

    // �迭�� ��� �������Դϴ�.
    // Array = Array2; �ּҰ��� ������ �Ұ���

    for (int i = 0; i < 5; ++i)
        printf("&Array[%d] : %lld \n", i, (long long)&Array[i]);

    printf("*Array     : %d \n",       *Array);
    printf("Array[0]   : %d \n",     Array[0]);
    printf("*&Array[0] : %d \n", *(&Array[0]));

    // [] : �ε��� ��ġ�� �ִ� �ּҰ� ������ �����ϴ� ���� ���մϴ�.

    for (int i = 0; i < 5; ++i)
        printf("Array + %d : %lld \n", i, (long long)Array + i);

    // �ּҰ� ����
    // �ش��ּ� + (n * �ش� �ּҰ����� �ڷ���)

    for (int i = 0; i < 5; ++i)
        printf("*(Array + %d) : %d \n", i, *(Array + i));

    for (int i = 0; i < 5; ++i)
        printf("Array[%d] : %d \n", i, Array[i]);

    // �迭�� �̸��� ���� �ּ��̱� ������ 
    // �����Ϳ� ������ �� �ֽ��ϴ�.
    int * p = Array;

    for (int i = 0; i < 5; ++i)
    {
        // �ּҰ� �������� �� ����� �ּҸ� ����մϴ�.
        printf("p + %d    : %lld \n", i, (long long)(p + i));
        // �� �ּҰ����� ���� �������� �մϴ�.
        printf("*(p + %d) : %d   \n", i,           *(p + i));
        // �ε��� �����ڸ� ���Ͽ� �� ����� ���� �����մϴ�.
        printf("p[%d]     : %d   \n", i,               p[i]);
    }

    // �迭 ������ , ������ �迭 , �Լ� ������
    // ���ڿ� ������
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
