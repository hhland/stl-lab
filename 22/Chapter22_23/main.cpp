#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ' ';
}

int main(void){
	vector<int> v(10);
	unsigned int i;
	for(i=0; i<v.size(); i++)
		v[i]=i+1;
	for_each(v.begin(), v.end(), print);
	cout << endl;
	//
	cout << "开始旋转,middle元素=" << *(v.begin()+7) << endl;
	rotate(v.begin(), v.begin()+7, v.end());
	for_each(v.begin(), v.end(),print);
	return 0;
}
