#include <stdio.h>

int main()
{

	//  ���� ����
	int i = 1;
	int n;
	int sum = 1;
	printf("1���� n������ ���� ���� ���մϴ�. n�� �Է��ϼ��� : \n");
	// �Է�
	scanf_s("%d", &n);

	// �ݺ���
	while (i <= n)  // i�� n���� �۰ų� ���ٸ�
	{

		sum *= i; // i�� ���� sum�̶� ���� �� ����
		i++;	  // i�� 1���� ��Ŵ
	}
	printf("1���� n������ �հ��? : %d �Դϴ�. \n", sum);



	return 0;
}