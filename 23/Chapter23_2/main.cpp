#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ' ';
}

int main(void){
	vector<int> v;
	v.push_back(5);
	v.push_back(6);
	v.push_back(4);
	v.push_back(8);
	v.push_back(2);
	v.push_back(3);
	v.push_back(7);
	v.push_back(1);
	v.push_back(9);
	for_each(v.begin(), v.end(), print);
	cout << endl;
	//
	cout << "´´½¨¶Ñ" << endl;
	make_heap(v.begin(), v.end());
	for_each(v.begin(), v.end(), print);
	cout << endl;
	return 0;
}
