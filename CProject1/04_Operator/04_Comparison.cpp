#include <stdio.h>

// C ++ ������ 0 �� ���� (false)
// 0 �� �ƴ� ��� ���� �� (true) �� �ν��մϴ�

// �� ������ (Comparison Operator)
// A == B : A �� B �� ���ٸ�   true �ƴ϶�� false
// A != B : A �� B �� �ٸ��ٸ� true �ƴ϶�� flase
// A >  B : A �� B �ʰ����    true �ƴ϶�� false
// A >= B : A �� B �̻��̶��  true �ƴ϶�� fasle
// A <  B : A �� B �̸��̶��  true �ƴ϶�� false
// A <= B : A �� B ���϶��    true �ƴ϶�� false

int main()
{
	int A = 10;
	int B = 20;
	int C = 20;
	printf("5 > 3   : %d \n", 5 > 3);
	printf("A == 15 : %d \n", A == 15);
	printf("B != 25 : %d \n", B != 25);
	printf("A > B   : %d \n", A > B );
	printf("A >= B  : %d \n", A >= B );
	printf("A < B   : %d \n", A < B );
	printf("A <= B  : %d \n", A <= B );
	
	return 0;
}