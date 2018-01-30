#include <algorithm>
#include <vector>
#include <iostream>

int main(void){
	using namespace std;
	vector<int> v;
	v.push_back(30);
	v.push_back(25);
	v.push_back(32);
	v.push_back(23);
	v.push_back(38);
	v.push_back(21);
	//
	cout << "向量容器v的最大元素为" 
		<< *max_element(v.begin(), v.end()) << endl;
	return 0;
}
