#include <string>
#include <iostream>

int main(void){
	using namespace std;
	string s1("abcdef");
	string s2("abc");
	cout << s1.compare("abcdef") << endl;  //相等,打印0
	cout << s1.compare(s2) << endl;   //s1 > s2,打印1
	cout << s1.compare("abyz") << endl; //s1 < "abyz",打印-1
	//
	cout << s1.compare(0,3,s2) << endl; //s1的前3个字符==s2,打印0
	return 0;
}