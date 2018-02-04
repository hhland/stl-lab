#include <string>
#include <iostream>

int main(void){
	using namespace std;
	string s;
	cout << s.empty() << endl;  //¿Õ×Ö·û´®,·µ»Ø1
	s+="1234567";
	cout << s.empty() << endl;  //²»Îª¿Õ,·µ»Ø0
	cout << s.size() << endl;   //7¸ö×Ö·û,·µ»Ø7
	cout << s.length() << endl; //·µ»Ø7
	//
	const char* cArray=s.c_str();
	cout << cArray[2] << endl;  //·µ»Ø×Ö·û3
	return 0;
}