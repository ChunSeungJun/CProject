#include <stdio.h>

// char
// char �� �ڷ����� ���ڸ� ������ ��������
// ������ �� �ִ� �ڷ����Դϴ�

int main()
{
#pragma region ��� ǥ��
	10;           // int         �� ���(����)��
	10000000000;  // longlong    �� ���(����)
	10u;          // unsigned    �� ���(0, �ڿ���)
	10ll;         // longlong    �� ���(����)
	10l;          // long        �� ���(����)
	10i8;         // char        �� ���(����)
	10i16;        // short       �� ���(����)
	10i32;        // int         �� ���(����)
	10i64;        // longlong    �� ���(����)
	3.1f;         // float       �� ���(�Ǽ�)��
	3.14;         // double      �� ���(�Ǽ�)��
	3.14l;        // long double �� ���(�Ǽ�)
	'A';          // character   �� ���(����)��
	"ABC";        // string      �� ���(���ڿ�) ��
#pragma endregion
	
	// ���� ����� ǥ���� �� �ƽ�Ʈ����('') �� ����մϴ�.
	char A = 'A';
	printf("A  : %d \n", A);
	printf("B == %d \n", 'B');
	printf("'B' == 66 : %d \n", 'B' == 66);

	// %c : character(����)�� �����͸� �޾� ����ϴ� ����Դϴ�.
	printf("A : %c \n", A);
	printf("65 : %c \n", 65);

	return 0;
}