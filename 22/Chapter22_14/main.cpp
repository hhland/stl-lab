#include <algorithm>
#include <vector>
#include <iostream>

int main(void){
	using namespace std;
	vector<int> v(10);
	//生成3个伪随机数
	generate_n(v.begin(), 3, rand);
	for(unsigned int i=0; i<v.size(); i++)
		cout << v[i] << ' ';
	cout << endl;
	return 0;
}