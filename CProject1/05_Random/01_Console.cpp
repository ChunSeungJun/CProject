#include <stdio.h>
#include <Windows.h>
// Windows.h : ������ ���� , �ܼ� ���� ��ɾ� ���� ����� �� �ְ� ���ش�.

int main()
{
	system("title Game");
	// system("title Name") : �ܼ� â�� Ÿ��Ʋ�� Name ���� �����մϴ�.

	printf("Hello \n");
	Sleep(500);       // �ܼ�â�� ���ϴ�.
	system("cls");    // �ܼ�â�� ����ϴ�.
	printf("World \n");
	system("pause");  // �ܼ����� ���� Ű�� �Է��� �� ���� �����մϴ�.
	printf("�ȳ��ϼ��� ! \n"); 

	printf("ĳ���� HP : 100 \n");
	printf("�����ܰ踦 �̵��մϴ�. (�ƹ�Ű�� ��������.)\n");
	system("pause > NUL"); // ����Ϸ��� �ƹ� Ű�� �����ʽÿ�... �� �����մϴ�.
	system("cls");
	system("color 20");
	// system("color ���� ���ڻ�")
	// 0 = ������       8 = ȸ��
	// 1 = �Ķ���       9 = ���� �Ķ���
	// 2 = �ʷϻ�       A = ���λ�
	// 3 = �ϴû�       B = ���� �ϴû�
	// 4 = ������       C = ���� ������
	// 5 = ���ֻ�       D = ���� ���ֻ�
	// 6 = �����       E = ���� �����
	// 7 = ���         F = ���� ���

	printf("���͸� ã�ҽ��ϴ� ! \n");
	Sleep(1000);
	system("cls");
	system("color 40");
	printf("���Ͱ� �����߽��ϴ� ! \n");
	Sleep(1000);
	system("cls");
	system("color 0F");
	printf("���Ͱ� ���������ϴ� ! \n");

	


	return 0;
}