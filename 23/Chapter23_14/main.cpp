#include <algorithm>
#include <iostream>

int main(void){
	using namespace std;
	int iArray[]={3, 6, 9, 13, 18, 20, 27};
	const int len=sizeof(iArray)/sizeof(int);
	int *result=lower_bound(iArray, iArray + len, 16);
	cout << "数组iArray中不小于16的下确界元素为" << *result << endl;
	return 0;
}