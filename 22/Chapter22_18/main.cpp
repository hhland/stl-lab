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
	//移除偶数
	vector<int>::iterator result=remove_if(v.begin(), v.end(), even);
	//打印7 5 1
	for_each(v.begin(), result, print);
	cout << endl;
	//打印7 5 1 4 1
	for_each(v.begin(), v.end(), print);
	cout << endl;
	return 0;
}
