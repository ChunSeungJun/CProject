#include <stdio.h>

// else if(���ǽ�) { ���Ͻ� ������ �ڵ�; }
// �� if �� else if �� ���ǽ��� ���� �ƴ� ��� 
//���ǽ��� �˻��Ͽ� ���̶�� �����ϰ� �����̶�� ���� ������� �Ѿ�ϴ�.

int main()
{
	int A = 5;

	if (A == 1) printf("A�� 1�Դϴ�. \n");
	else if (A == 2) printf("A�� 2�Դϴ�. \n");
	else if (A == 3) printf("A�� 3�Դϴ�. \n");
	else if (A == 4) printf("A�� 4�Դϴ�. \n");
	else printf("A�� 5�Դϴ�. \n");

	printf("if �� Ż�� \n");
	return 0;
}