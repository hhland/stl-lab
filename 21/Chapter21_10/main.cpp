#include <algorithm>
#include <vector>
#include <iostream>

int main(void){
	using namespace std;
	//初始化向量v1={5, 6, 7, 8, 9 } 
	vector<int> v1; 
	v1.push_back(5);
	v1.push_back(6);
	v1.push_back(7);
	v1.push_back(8);
	v1.push_back(9);
	//初始化向量v2={7, 8}
	vector<int> v2;
	v2.push_back(7);
	v2.push_back(8);
	//检查v2是否构成v1的子序列
	vector<int>::iterator iterLocation;
	iterLocation=search(v1.begin(), v1.end(), v2.begin(), v2.end());
	//打印从v1[2]开始匹配
	if(iterLocation != v1.end())
		cout << "v2的元素包含在v1中,起始元素为"  
		     << "v1[" << iterLocation - v1.begin() << "]\n";
	else 
		cout << "v2的元素不包含在v1中" << endl;
	return 0;
}

