#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << "  ";
}

bool even(int x){  //偶数
	return x % 2 ? 0:1;
}

int main(void){
	//初始化向量v
	vector<int> v;
	v.push_back(7);
	v.push_back(2);
	v.push_back(5);
	v.push_back(4);
	v.push_back(1);
	//初始化数组iArray
	int iArray[6]={0, 0, 0, 0, 0, 0};
	//移除v中偶数,剩余元素复制到iArray
	remove_copy_if(v.begin(), v.end(), iArray, even);
	//打印v,v没有改变
	for_each(v.begin(), v.end(), print);
	cout << endl;
	//打印iArray
	for_each(iArray, iArray+6, print);
	cout << endl;
	return 0;
}
