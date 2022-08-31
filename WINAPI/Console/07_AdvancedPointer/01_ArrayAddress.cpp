#include "Header.h"

struct Struct
{
    int a0;
    int a1;
    int a2;
    int a3;
    int a4;
};

void Start()
{
    int A0 = 10;
    int A1 = 20;
    int A2 = 30;
    int A3 = 40;
    int A4 = 50;
    printf("������ ���\n");
    printf("[ A0 : %d ][ &A0 : %lld ]\n", A0, (long long)&A0);
    printf("[ A1 : %d ][ &A1 : %lld ]\n", A1, (long long)&A1);
    printf("[ A2 : %d ][ &A2 : %lld ]\n", A2, (long long)&A2);
    printf("[ A3 : %d ][ &A3 : %lld ]\n", A3, (long long)&A3);
    printf("[ A4 : %d ][ &A4 : %lld ]\n", A4, (long long)&A4);
    printf("\n");

    int Array[5];
    printf("�迭�� ��� \n");
    for (int i = 0; i < 5; ++i)
    {
        Array[i] = (i + 1) * 10;
        printf("[ Array[%d] : %d ][ &Array[%d] : %lld ]\n",
            i, Array[i], i, (long long)&Array[i]);
    }
    printf("\n");

    // �ּҰ��� ��������� ���� �Ҵ�˴ϴ�.
    // �迭�� �� ������ �ּҴ� ���� �ּҷ� ����
    // �����ϰ� �ִ� �ڷ����� �ּҸ�ŭ �Ҵ�˴ϴ�.
    
    // ����ü�� ���� ��� �ε��� ���� ������� ���ϱ� ������
    // ��Ģ���� �ʱ�ȭ�� �ݺ����� ���� �Ұ����մϴ�.
    // �ɹ��� ���� �÷� ���� ������ �˳��ϰ� ����ٰ� �����Ѵٸ�
    // �ش� �ɹ����� ������� ���� �� �޸𸮸� �����ϰ� �˴ϴ�.
    Struct myStruct1 = { 10, 20, 30, 40, 50 };
    myStruct1.a0 *= 10;
    myStruct1.a1 *= 10;
    myStruct1.a2 *= 10;
    myStruct1.a3 *= 10;
    myStruct1.a4 *= 10;

    printf("myStruct1.a0 : %d \n", myStruct1.a0);
    printf("myStruct1.a1 : %d \n", myStruct1.a1);
    printf("myStruct1.a2 : %d \n", myStruct1.a2);
    printf("myStruct1.a3 : %d \n", myStruct1.a3);
    printf("myStruct1.a4 : %d \n", myStruct1.a4);
    printf("\n");

    Struct myStruct2 = { -100, -200, -300, -400, -500 };

    printf("myStruct2.a0 : %d \n", myStruct2.a0);
    printf("myStruct2.a1 : %d \n", myStruct2.a1);
    printf("myStruct2.a2 : %d \n", myStruct2.a2);
    printf("myStruct2.a3 : %d \n", myStruct2.a3);
    printf("myStruct2.a4 : %d \n", myStruct2.a4);
    printf("\n");

    Struct temp = myStruct1;
    myStruct1 = myStruct2;
    myStruct2 = temp;

    printf("Swap ! \n");

    printf("myStruct1.a0 : %d \n", myStruct1.a0);
    printf("myStruct1.a1 : %d \n", myStruct1.a1);
    printf("myStruct1.a2 : %d \n", myStruct1.a2);
    printf("myStruct1.a3 : %d \n", myStruct1.a3);
    printf("myStruct1.a4 : %d \n", myStruct1.a4);
    printf("\n");

    printf("myStruct2.a0 : %d \n", myStruct2.a0);
    printf("myStruct2.a1 : %d \n", myStruct2.a1);
    printf("myStruct2.a2 : %d \n", myStruct2.a2);
    printf("myStruct2.a3 : %d \n", myStruct2.a3);
    printf("myStruct2.a4 : %d \n", myStruct2.a4);
    printf("\n");

    int Array2[5] = { -10, -20, -30, -40, -50 };

    // int tempArray[5] = Array;
    // Array = Array2;
    // Array2 = tempArray;
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