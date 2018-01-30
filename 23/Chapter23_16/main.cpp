#include <algorithm>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ',';
}

int main(void){
	int iArray[]={3, 6, 9, 10, 10, 10, 13, 16, 17, 20};
	const int len=sizeof(iArray)/sizeof(int);
	pair<int* ,int*> range=equal_range(iArray, iArray + len, 10);
	cout << "第一个可以插入10的元素为" << *range.first << endl;
	cout << "最后一个可以插入10的元素为" << *range.second << endl;
	cout << "所有可以在前面插入10的元素为";
	for_each(range.first, range.second+1, print);
	cout << endl;
	return 0;
}
