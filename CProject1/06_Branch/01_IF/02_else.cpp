#include <stdio.h>

// else : �� if ���ǽ��� false �� ��� ������ �����ϴ� ��ɾ��Դϴ�.

int main()
{
	int A = 9;

	if (A == 10) printf("A�� 10 �Դϴ�. \n");
	else	     printf("A�� 10�� �ƴմϴ�. \n");

	if (A == 10) printf("A�� 10�Դϴ�. \n");
	if (A != 10) printf("A�� 10�� �ƴմϴ�. \n");

	if (A == 10) printf("A�� 10�Դϴ�. \n");
	printf("A�� 10�� �ƴմϴ�. \n");

	return 0;
}