#include <stdio.h>

int main()
{

	int Count = 1;

	while (Count <= 5)
	{
		printf("while ���� %d ��° ���� ���Դϴ�. \n", Count);
		++Count;
	}

	// 1. �Է¹��� 9���� ������ּ���.
	// ex ) �Է� : 1
	//      1 x 1 = 1
	//      1 x 2 = 2
	//      1 x 3 = 3
	//      1 x 4 = 4
	//      1 x 5 = 5
	//      1 x 6 = 6
	//      1 x 7 = 7
	//      1 x 8 = 8
	//      1 x 9 = 9

//	int A;
//	int B = 1;
//	int C = 1;
//	while (C <= 9)
//	{
//		printf("���� �Է��Ͻʽÿ�. \n");
//		scanf_s("%d", &A);
//		B = 1;
//		while (B <= 9)
//		{
//			printf("%d x %d = %d \n", A, B, (A * B));
//			++B;
//		}

//	}

	int i = 1;
	int j = 1;
	//
	//	while (i < 10)
	//	{
	//		printf("%d �� \n", i);
	//		j = 1;
	//		while (j < 10)
	//		{
	//			printf("%d x %d = %d \n", i, j, i * j);
	//			++j;
	//		}
	//		++i;
	//		printf("\n");
	//	}


	i = 0;
	j = 0;
	while (i < 5)
	{
		j = 0;
		while (j <= i)
		{
			printf("* ");
			++j;
		}
		printf("\n");
		++i;
	}




	return 0;
}