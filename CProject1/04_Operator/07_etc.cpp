#include <stdio.h>

// sizeof(expression)
// expression �� ũ�⸦ ��ȯ�մϴ�.

// Casting Operator : (exoression)data
// data �� �ڷ����� expression ���� ��ȯ�մϴ�.

// Address Operator : %Data
// Data �� ��ġ�� �޸� �ּҰ��� ��ȯ�մϴ�.


int main()
{
	int A = 10;
	printf("A     Size : %zd Byte \n", sizeof(A));
	printf("3.14  Size : %zd Byte \n", sizeof(3.14));
	printf("short Size : %zd Byte \n", sizeof(short));

	1000000000;  // int �� ��� ǥ���
	10000000000; // long long �� ��� ǥ���
	4200000000u; // unsigned �� ��� ǥ���
	3.14f;       // float �� ��� ǥ���
	3.14;        // double �� ��� ǥ���

	int Num = 10;
	printf("10 ���� : %d \n", 10);
	printf("2  ���� : %d \n", 0b0010); // 2
	printf("8  ���� : %d \n", 010);    // 8
	printf("16 ���� : %d \n", 0x10);   // 16

	printf("%A : %p \n", &A);

	return 0;
}