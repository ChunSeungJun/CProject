#include <stdio.h>

// ���������� (Increment And Decrement Operator)
// �ǿ������� ���� 1 ������Ű�ų� 1���ҽ�Ű�� �������Դϴ�.
// ��ġ�� ���� ��ȯ�ϴ� ���� �ٸ��ϴ�.

int main()
{
	int Count = 0;
	printf("Count : %d \n", Count);
	Count += 1;
	printf("Count : %d \n", Count);

	// ���� ������ : ���� ���� ����� ��ȯ�մϴ�.
	// ���� ���� ������ : �� �������� ���� 1 ������ŵ�ϴ�.
	++Count;
	printf("Count : %d \n", Count);
	// ���� ���� ������ : �� �������� ���� 1 ���ҽ�ŵ�ϴ�.
	--Count;
	printf("Count : %d \n", Count);
	
	// ���� ������ : ���� ���� ����� ��ȯ�մϴ�.
	// ���� ���� ������ : �� �������� ���� 1 ������ŵ�ϴ�.
	Count++;
	printf("Count : %d \n", Count);
	// ���� ���� ������ : �� �������� ���� 1 ���ҽ�ŵ�ϴ�.
	Count--;
	printf("Count : %d \n", Count);

	printf("Count : %d \n", ++Count);
	printf("Count : %d \n", Count++);
	printf("Count : %d \n",   Count);

	
	

	return 0;
}

