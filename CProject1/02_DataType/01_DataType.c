#include <stdio.h>

int main()
{
	// Bit : ��Ʈ
	// �޸��� �ּ� ������ �ǹ��մϴ�.
	// 0 , 1 �� ������ �� �ִ� ũ���Դϴ�.
	// 1Byte = 8Bit

	// �ڷ��� (Data Type)
	// �޸� ������ ���赵�� �ǹ��մϴ�.
	// char , short , int , long , double , float , longlong ���� �ֽ��ϴ�.

	// char : 1Byte �� ���� �ڷ����Դϴ�.

	char HP;
	HP = 100;
	HP = 50; // Ư�� ������ ���� �����ϴ� ���� �ʱ�ȭ �Ѵ� ��� �մϴ�.
	// = �� ��ȣ�� �ƴ� �����ϴٸ� �ǹ��մϴ�.

	printf("HP : %d \n", HP);
	HP = 30;
	printf("HP : %d \n", HP);
	// %d : ���������� ���� �޾� ������ִ� ����Դϴ�.
	HP = 256; // 1 , 0000 , 0000
	printf("HP : %d \n", HP);
	HP = 255; // 1111 , 1111
	printf("HP : %d \n", HP);

	unsigned char Lv;
	// singed : ��ȣ�ִ�
	// unsinged : ��ȣ����
	Lv = 255;
	printf("HP : %d \n", Lv);

	// int : 4Byte �� ���� �ڷ����Դϴ�.
	// ������ ����� ���ÿ� �ʱ�ȭ�� �����մϴ�.
	int Atk = 1000;
	printf("Atk : %d \n", Atk);

	// char, short, int, long, longlong
	// byte
	// ���� ǥ�� ����
	// �ش� �ڷ��� ���� ���� �� ���
	
	// float : 4Byte (�������� : �Ҽ��� 7 ��°)
	float MyFloat = 3.14;
	int   MyInt = 3.14;
	printf("MyFloat = %.2f \n", MyFloat);
	// %f   : �Ǽ� �����͸� ������ִ� �����Դϴ�.
	// %.nf : n ��° �Ҽ������� ����մϴ�.
	printf("MyInt   = %d   \n", MyInt);

	// double = 8Byte (�������� : �Ҽ��� 15 ��°)
	double MyDouble = 1.23456789;
	printf("MyDouble = %.8f \n", MyDouble);



	return 0;
}	