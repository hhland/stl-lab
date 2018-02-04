#include <algorithm>
#include <iostream>

int main(void){
	using namespace std;
	int a = 5;
	int b = 26;
	cout << "交换前 " << "a = " << a << " b = " << b << endl;
	iter_swap(&a, &b);
	cout << "交换后 " << "a = " << a << " b = " << b << endl;
	return 0;
}

