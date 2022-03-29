#include "iostream"
using namespace std;
#include "string"
//子串
void test01()
{

	string str = "abcdefg";
	//从1开始 3个数
	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;

	string email = "hello@sina.com";
	int pos = email.find("@");
	int pos2 = email.find(".com");
	string username = email.substr(0, pos);
	cout << "username: " << username << endl;

}

int main() {

	test01();

	return 0;
}