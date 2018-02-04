#include <string>
#include <iostream>

int main(void){
	using namespace std;
	char* cArray="a12345678b";
	string s(cArray);
	s.erase(s.begin());
	cout << s << endl;  //打印出12345678b
	//
	s.erase(s.begin()+3, s.end()-2);
	cout << s << endl;  //打印出1238b
	//
	s.erase(0,2);
	cout << s << endl;  //打印38b
	//
	s.clear();
	return 0;
}