#include <stdio.h>

int main()
{
    // ���� ����
    int a = 1;
    int b = 0;
    int c = 5;

    while (a <= c)              // a�� c���� �۰ų� ���ٸ� ��
    {
        b = 0;                  // b�� 0���� �ʱ�ȭ
        while (b <= c - a)      // b�� C���� a�� �� ������ �۰ų� ���ٸ� ��
        {
            printf(" ");        // ����
            b++;                // b�� 1������Ŵ
        }
        b = 0;                  // b�� 0���� �ʱ�ȭ
        while (b < a * 2 - 1)   // b�� a �� 2���ϰ� 1�� �� ������ �۴ٸ� ��
        {
            printf("*");        // ��   
            b++;                // b�� 1������Ŵ
        }
        printf("\n");           // ���๮��
        a++;                    // a�� 1������Ŵ

    }

    return 0;

}