#include <algorithm>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ' ';
}

int main(void){
	int iArray[]={1, 2, 3, 4, 5, 6, 7, 8, 9};
	const int len=sizeof(iArray)/sizeof(int);
	//
	cout << "创建堆" << endl;
	make_heap(iArray, iArray+len);
	for_each(iArray, iArray+len, print);
	cout << endl;
	//
	cout << "执行一次元素出堆" << endl;
	pop_heap(iArray, iArray+len);
	for_each(iArray, iArray+len, print);
	cout << endl;
	return 0;
}