#include <stdio.h>

int main()
{
	// 다차원 배열
	// 배열을 저장하는 배열입니다.

	int Arr[3] = { 1, 2, 3 };

	// 2차원 배열
	int Arr2[3][3] =
	{
		1, 2, 3,
		4, 5, 6,
		7, 8, 9
	};

	int Arr3[5][5];
	int Count = 1;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j, ++Count)
		{
			Arr3[i][j] = Count;
			printf("%d%s ", Arr3[i][j], (Count < 10) ? " " : "");
		}
		printf("\n");
	}
	
	// 1 버블정렬
	// 2 달팽이 알고리즘


	int Snail[5][5] =
	{
		 1,  2,  3,  4, 5,
		16, 17, 18, 19, 6,
		15, 24, 25, 20, 7,
		14, 23, 22, 21, 8,
		13, 12, 11, 10, 9,
	};
		
	


	return 0;
}