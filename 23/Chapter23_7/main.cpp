#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ' ';
}

int main(void){
	int iArray[]={3, 9, 6, 2, 11, 23, 80, 27, 1, 62, 55};
	const int len=sizeof(iArray)/sizeof(int);
	//
	vector<int> v1(6);
	partial_sort_copy(iArray, iArray+len, v1.begin(), v1.end());
	for_each(v1.begin(), v1.end(), print);
	cout << endl;
	//
	vector<int> v2(len);
	partial_sort_copy(iArray, iArray+len, v2.begin(), v2.end());
	for_each(v2.begin(), v2.end(), print);
	cout << endl;
	return 0;
}