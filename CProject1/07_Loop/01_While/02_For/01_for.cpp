#include <stdio.h>

// For ��
// �ʱ��, ���ǽ�, ���������� �̷���� �ݺ����Դϴ�.

// �ʱ�� : ó������ �ѹ� �����ϴ� ��
// ���ǽ� : �ݺ��� ���θ� �����ϴ� ��
// ������ : �ݺ��� ���� �� ���� �����ϴ� ��

// for(�ʱ��; ���ǽ�; ������;)
//	  {   �ݺ��� �ڵ� ;     }

int main()
{
	//    �ʱ��;    ���ǽ�; ������
	//for (int i = 1; i <= 5; i++)
	//	printf("For ���� %d ��° �����մϴ�. \n", i); // �ݺ��� �ڵ�

	// ���� for ��
	//for (int i = 1; i < 10; ++i)
	//{
	//	printf("%d �� \n", i);
	//	for (int j = 1; j < 10; ++j)
	//	{
	//		printf("%d x %d = %d \n", i, j, i * j);
	//	}
	//	printf("\n");
	//}

	// 1
	//int n;
	//int sum = 0;
	//printf("1���� n������ ���� ���մϴ�. n�� �Է��Ͻʽÿ� : \n");
	//scanf_s("%d", &n);
	//for (int i = 1; i <= n; i++)
	//{
	//	sum += i;
	//}
	//printf("1���� %d������ �հ��? : %d �Դϴ�. \n", sum, sum);

	//2
	//int n;
	//int sum = 1;
	//printf("1���� n������ ���� ���� ���մϴ�. n�� �Է��Ͻʽÿ� : \n");
	//scanf_s("%d", &n);
	//for (int i = 1; i <= n; i++)
	//{
	//	sum *= i;
	//}
	//printf("1���� %d������ �հ��? : %d �Դϴ�. \n", n, sum);

	//3
	//int a, b, c;
	//for (c = 1; c < 4; c++)
	//{
	//	for (b = 1; b < 10; b++)
	//	{
	//		for (a = c * 3 -2; a < c*3 + 1; a++)
	//		{
	//			printf("%d x %d = %d%s ", a, b, a * b, (a * b < 10) ? " " : "");
	//		}
	//		printf("\n");

	//	}
	//	printf("\n");
	//}

	//4
	//int a, b;
	//for (a = 1; a <= 5; a++)
	//{
	//	
	//	for (b = 5; b >= a; b--)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//5

	//for (int i = 0; i < 5; ++i)
	//{
	//	for (int j = 0; j < 5 - i; ++j)	printf(" ");

	//	for (int k = 0; k < (i * 2) + 1; ++k)	printf("*");
	//		
	//	printf("\n");
	//}

	int lv = 1;
	lv = lv++;
	printf("%d", lv);

	return 0;
}