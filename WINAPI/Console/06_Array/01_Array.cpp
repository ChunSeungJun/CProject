#include "Header.h"

// �迭
// ���� �ڷ����� ������ ������� �� �ִ� ����Դϴ�.

// �迭�� ����
// �ڷ��� �迭�̸� [�迭�� ����];
// �ڷ��� : � ������ ������� �� �����մϴ�.
// �迭�̸� : ������� ������ �̸��� �����մϴ�.
// �迭�� ���� : �� ���� ������ ������ �� �����մϴ�.

// ex ) char String [5];
// char �ڷ��� 5�� ������ ������� �迭 String �� �����մϴ�.

// �迭�� �����ϴ� ������ ������ ��Ҷ� �մϴ�.
// ��ҿ� ������ �� [] �����ڸ� ����մϴ�.

// [] ������
// �ε��� �����ڶ� �ϸ� [index] �� ����� �� �ֽ��ϴ�.
// index �� °�� ��ҿ� �����մϴ�.

// index
// �迭�� ��Ҹ� �����ϱ� ���� ���� �ǹ��մϴ�.
// �迭�� ����� ù ������ 0 ���� �����մϴ�.
// �ε����� ���� ���� �� �� ���� �迭�� ���̰� �� �� �����ϴ�.

// �迭�� ũ��
// ����� �ڷ��� * �迭�� ����

struct Arr
{
    int a;
    int b;
    int c;
    int d;
    int e;
};

void Start()
{
    /*
    int * p = new int[5]{ 1, 2, 4, 8, 16 };
    int value1 = p[4] - p[1];
    int value2 = (p + 4) - (p + 1);
    int value3 = (long)(p + 4) - (long)(p + 1);

    printf("vlaue1 : %d \n", value1);
    printf("vlaue2 : %d \n", value2);
    printf("vlaue3 : %d \n", value3);
    */

    // int �ڷ��� 5���� ������ �� �ִ� �迭 Array �� �����մϴ�.
    int Array[5];

    // Array = 10;
    // 1 ��° ���� 5 ��° ������ ��� ������ 10�� ������ ��
    // �� �� ���� ������ Error �� ���ϴ�.'

    // [index] �����ڸ� ����Ͽ�
    // �迭�� �� ��ҿ� �����մϴ�.
    Array[0] = 1;
    Array[1] = 2;
    Array[2] = 3;
    Array[3] = 4;
    Array[4] = 5;
    // Array[5] = 6; �迭�� �ε�����ȣ�� �迭�� ���� �̻��� �� �������ϴ�.

    printf("Array[0] : %d \n", Array[0]);
    printf("Array[1] : %d \n", Array[1]);
    printf("Array[2] : %d \n", Array[2]);
    printf("Array[3] : %d \n", Array[3]);
    printf("Array[4] : %d \n", Array[4]);

    // int �ڷ��� ������ 5���� ������ �� �ִ� �迭 Array2 �� �����ϰ�
    // 0 ���� �ε��� ��Һ��� ���ʴ�� 10, 20, 30, 40, 50 �� �ʱ�ȭ�մϴ�.
    int Array2[5] = { 10, 20, 30, 40, 50 };
    Array[3] = 45;

    printf("Array2[0] : %d \n", Array2[0]);
    printf("Array2[1] : %d \n", Array2[1]);
    printf("Array2[2] : %d \n", Array2[2]);
    printf("Array2[3] : %d \n", Array2[3]);
    printf("Array2[4] : %d \n", Array2[4]);

    // �迭�� ��Ҹ� �ʱ�ȭ���� �ʴ´ٸ� �����Ⱚ�� ���ϴ�.
    int Array3[5];

    printf("Array3[0] : %d \n", Array3[0]);
    printf("Array3[1] : %d \n", Array3[1]);
    printf("Array3[2] : %d \n", Array3[2]);
    printf("Array3[3] : %d \n", Array3[3]);
    printf("Array3[4] : %d \n", Array3[4]);

    // ��� �迭�� ��Ҹ� 0 ���� �ʱ�ȭ�մϴ�.
    int Array4[5] = { 0 };
    
    printf("Array4[0] : %d \n", Array4[0]);
    printf("Array4[1] : %d \n", Array4[1]);
    printf("Array4[2] : %d \n", Array4[2]);
    printf("Array4[3] : %d \n", Array4[3]);
    printf("Array4[4] : %d \n", Array4[4]);

    // �迭�� ����� ���ÿ� �ʱ�ȭ���� ������ �ʱ�ȭ���� ����
    // ��Ҵ� ��� 0 ���� �����˴ϴ�.

    float Array5[5] = { 1.1f, 2.2f, 3.3f };

    printf("Array5[0] : %.1f \n", Array5[0]);
    printf("Array5[1] : %.1f \n", Array5[1]);
    printf("Array5[2] : %.1f \n", Array5[2]);
    printf("Array5[3] : %.1f \n", Array5[3]);
    printf("Array5[4] : %.1f \n", Array5[4]);

    // �ݺ����� �̿��ϸ� �迭�� �� �� ���� �ٷ� �� �ֽ��ϴ�.

    int Array6[5] = { 0 };

    for (int i = 0; i < 5; ++i)
    {
        Array6[i] = (i + 1)* 100;
        printf("Array6[%d] : %d \n", i, Array6[i]);
    }

    // �迭�� ���̸� ������ �ʰ� �����Ѵٸ� ����� ���ÿ� 
    // �ʱ�ȭ�� ��Ҹ�ŭ �迭�� ���̰� �����˴ϴ�.
    int Array7[] = { 1, 2, 3 };

    // sizeof(�迭�̸�) : �迭�� �� ũ��
    //                  12 / 4 == 3
    for (int i = 0; i < sizeof(Array7) / sizeof(int); ++i)
        printf("%d ", Array7[i]);
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
