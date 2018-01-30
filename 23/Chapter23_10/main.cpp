#include <algorithm>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ' ';
}

int main(void){
	int iArray1[]={2, 4, 6, 8, 10, 1, 3, 5, 7, 9, 11, 13};
	const int len1=sizeof(iArray1)/sizeof(int);
	//升序内部归并
	inplace_merge(iArray1, iArray1 + 5, iArray1 + len1);
	for_each(iArray1, iArray1 + len1, print);
	cout << endl;
	//降序内部归并
	int iArray2[]={100, 80, 60, 40, 20, 10, 90, 70, 50, 30};
	const int len2=sizeof(iArray2)/sizeof(int);
	inplace_merge(iArray2, iArray2 + 6, iArray2 + len2, greater<int>());
	for_each(iArray2, iArray2 + len2, print);
	cout << endl;
	return 0;
}
