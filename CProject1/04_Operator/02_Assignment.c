#include <stdio.h>

// ���� ������ (Assignment Operator)
// ���� �� �����ڿ� ������ �� �������� ���� �����ϴ� �������Դϴ�.

int main()
{
	int A = 10;
	int B = A;
	A = A + 10;
	
	// ���մ��� ������
	// ���� �����ڴ� �ٸ� �����ڿ� ���������� ����� �� �ֽ��ϴ�.
	A += 10;
	printf("A : %d \n", A);

	A -= 10;
	printf("A : %d \n", A);

	A *= 10;
	printf("A : %d \n", A);

	A /= 10;
	printf("A : %d \n", A);

	A %= 10;
	printf("A : %d \n", A);

	return 0;
}