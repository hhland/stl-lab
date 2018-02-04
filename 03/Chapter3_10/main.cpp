#include <iostream>
using namespace std;

int main(void){
	cout.width(20);
	cout << "hello" << endl;  //右对齐输出hello,占20个字符
	//  
	cout.precision(4);
	cout << 2006.526 << endl; //输出2007
	//
	cout.precision(5);
	cout << 2006.526 << endl;  //输出2006.5
	//
	cout.precision(7);
	cout << 2006.526 << endl;  //输出2006.526
	//
	cout.width(20);
	cout.fill('*');
	cout << "baby" << endl;    //输出**************baby
	return 0;
}