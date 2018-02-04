#include <algorithm>
#include <vector>
#include <iostream>

int main(void){
	using namespace std;
	//初始化向量v={1, 8, 8, 8, 6, 6, 8}
	vector<int> v;
	v.push_back(1);
	v.push_back(8);
	v.push_back(8);
	v.push_back(8);
	v.push_back(6);
	v.push_back(6);
	v.push_back(8);
	//查找子序列{8, 8, 8}
	vector<int>::iterator iLocation;
	iLocation=search_n(v.begin(), v.end(), 3, 8);
	if(iLocation != v.end())
		cout << "在v中找到3个连续的元素8" << endl;
	else 
		cout << "v中没有3个连续的元素8" << endl;
	//查找子序列{8, 8, 8, 8}
	iLocation=search_n(v.begin(), v.end(), 4, 8);
	if(iLocation != v.end())
		cout << "在v中找到4个连续的元素8" << endl;
	else 
		cout << "v中没有4个连续的元素8" << endl;
	//查找子序列{6, 6}
	iLocation=search_n(v.begin(), v.end(), 2, 6);
	if(iLocation != v.end())
		cout << "在v中找到2个连续的元素6" << endl;
	else 
		cout << "v中没有2个连续的元素6" << endl;
	return 0;
}
