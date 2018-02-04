#include <iostream>
#include <iomanip>
using namespace std;
  
int main(void){
	cout << setw(20) << "hello" << endl;	
	cout << setprecision(4) << 2006.526 << endl;
	cout << setw(20) << setfill('*') << "baby" << endl;
	cout << scientific << 300.89 << endl;
	cout << oct << 9 << endl;
	cout << dec << showpos << 172 << endl;
	cout << noshowpos << 172 << endl;
	cout << boolalpha << true << endl;
	return 0;
}



