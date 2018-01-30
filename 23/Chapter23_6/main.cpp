#include <algorithm>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ' ';
}

int main(void){
	int iArray[]={3, 9, 6, 8, -10, 7, -11, 19, 30, 12, 23};
	const int len=sizeof(iArray)/sizeof(int);
	for_each(iArray, iArray+len, print);
	cout << endl;
	//局部排序
	int middle=5;
	partial_sort(iArray, iArray+middle, iArray+len);
	cout << "middle=" << middle << endl;
	for_each(iArray, iArray+len, print);
	cout << endl;
	//局部排序
	middle=8;
	partial_sort(iArray, iArray+middle, iArray+len);
	cout << "middle=" << middle << endl;
	for_each(iArray, iArray+len, print);
	cout << endl;
	return 0;
}
