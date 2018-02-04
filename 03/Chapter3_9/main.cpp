#include <iostream>
using namespace std;
 
int main(void){
	cout.setf(ios::scientific | ios::uppercase);
	cout << 2006.5 << endl;
	//
	cout.setf(ios::floatfield,ios::fixed | ios::showpos);
	cout << 2006.5 << endl;  
	//
	cout.setf(ios::showpos);
	cout << 2006.5 << endl;
	return 0;  
}