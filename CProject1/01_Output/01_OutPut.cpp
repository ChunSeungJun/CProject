#include <iostream>
// iostream : cpp���� ����ϴ� ���
using namespace std;
// using namespace std : iostream �� ����� �� �ۼ��� �ϸ� ����� �Ҷ��� 
// �ڵ带 ���� std:: �� �տ� �� �ٿ��� ����ؾ� ������ ���Ǽ��� ���� �����
#pragma warning (disable : 4996)

void main()
{
	float CppFloat = 0.0f;
	cout << "�Ǽ��� �Է��ϼ��� : \n ";
	// std:: : cpp ���� �����ϴ� ��ɵ��� ����� �� ����մϴ�.
	// cout : console output ���� �ܼ�â�� ����� �� ����մϴ�.
	cin >> CppFloat;
	// cin : console input ���� �ܼ�â���� �Է��� �� ����մϴ�.
	cout << "�Է¹��� �Ǽ� : " << CppFloat << "\n";
	return;
}