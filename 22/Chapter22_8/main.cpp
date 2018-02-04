#include <algorithm>
#include <vector>
#include <iostream>

bool odd(int x){
	return x % 2;
}

int main(void){
	using namespace std;
	vector <int> v(10);
	unsigned int i;
	for(i = 0; i < v.size(); i++) {
		v[i] = i % 7;
		cout << v[i] << ' ';
	}
	cout << endl;
	//将奇数元素替换为38
	replace_if(v.begin(), v.end(), odd, 38);
	for(i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << endl;
	return 0;
}