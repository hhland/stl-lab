#include <algorithm>
#include <vector>
#include <iostream>

int main(void){
	using namespace std;
	//初始化向量v1={-5, 1, 2, -6, -8, 1, 2, -11}
	vector<int> v1;
	v1.push_back(-5);
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(-6);
	v1.push_back(-8);
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(-11);
	//初始化向量v2={1, 2}
	vector<int> v2;
	v2.push_back(1);
	v2.push_back(2);
	//v1中查找最后一个子序列v2
	vector<int>::iterator iLocation;
	iLocation=find_end(v1.begin(), v1.end(), v2.begin(), v2.end());
	//打印子序列在v1的起始位置v[5]
	if(iLocation != v1.end())
		cout << "v1中找到最后一个匹配v2的子序列,位置在" 
			 << "v1[" << iLocation - v1.begin() << "]" << endl;
	return 0;
}