#include <stdio.h>
int main()
{
    // ���� ����
    int i = 0;
    int j = 0;
 
    // �ݺ���
    while (i < 5)         // i �� 5���� �۴ٸ� ��
    {
        j = 0;            // j �� ���� 0���� �ʱ�ȭ
        while (j <= i)    // j �� i ���� �۰ų� ���ٸ� ��
        {
            printf("*");  // ��
            ++j;          // j�� 1���� ��Ŵ
        }
        printf("\n");     // ���๮��
        ++i;              // i�� 1���� ��Ŵ
    }
    return 0;
}