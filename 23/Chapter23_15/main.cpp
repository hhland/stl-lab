#include <algorithm>
#include <iostream>
int main(void){
	using namespace std;
	int iArray[]={3, 6, 9, 13, 18, 20, 27};
	const int len=sizeof(iArray)/sizeof(int);
	int *result=upper_bound(iArray, iArray + len, 13);
	cout << "数组iArray中大于13的上确界元素为" << *result << endl;
	return 0;
}
