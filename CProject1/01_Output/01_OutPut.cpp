#include <iostream>
// iostream : cpp에서 사용하는 기능
using namespace std;
// using namespace std : iostream 을 사용할 때 작성을 하면 출력을 할때나 
// 코드를 쓸때 std:: 를 앞에 꼭 붙여서 사용해야 함으로 편의성을 위해 사용함
#pragma warning (disable : 4996)

void main()
{
	float CppFloat = 0.0f;
	cout << "실수를 입력하세요 : \n ";
	// std:: : cpp 에서 제공하는 기능들을 사용할 때 사용합니다.
	// cout : console output 으로 콘솔창에 출력할 떄 사용합니다.
	cin >> CppFloat;
	// cin : console input 으로 콘솔창에서 입력할 때 사용합니다.
	cout << "입력받은 실수 : " << CppFloat << "\n";
	return;
}