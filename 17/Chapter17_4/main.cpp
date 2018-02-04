#include <string>
#include <iostream>

int main(void){
	using namespace std;
	char* cArray1="hello,boy!";
	string s(cArray1);
	//
	s.replace(6,3,"gril");  //boy替换为girl
	cout << s << endl;      //打印hello gril!
	//
	s.replace(10,1,1,'.');  //将"hello gril!"的'!'替换为'.'
	cout << s << endl;      //打印hello gril.
	//
	s.replace(s.begin(),s.begin()+5, "good morning");
	cout << s << endl;     //打印good morning girl.
	return 0;
}