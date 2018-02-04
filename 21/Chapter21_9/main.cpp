#include <algorithm>
#include <vector>
#include <iostream>

bool absEqual(int a, int b){
	return (a== abs(b) || abs(a) == b) ? 1:0;
}

int main(void){
	using namespace std;
	//初始化向量v1、v2
	vector <int> v1(5);
	vector <int> v2(5);
	for(unsigned int i = 0; i < v1.size(); i++) {
		v1[i] = i;
		v2[i] = -1 * i;
	}
	//v1、v2相等检查
	if(equal(v1.begin(), v1.end(), v2.begin(), absEqual))
		cout << "v1和v2元素的绝对值完全相等" << endl;
	else
		cout << "v1和v2元素的绝对值不完全相等" << endl;
	return 0;
}

