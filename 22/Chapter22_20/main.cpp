#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ' ';
}

int main(void){
	vector<int> v;
	v.push_back(2);
	v.push_back(6);
	v.push_back(6);
	v.push_back(6);
	v.push_back(9);
	v.push_back(6);
	v.push_back(3);
	//
	vector<int>::iterator result=unique(v.begin(), v.end());
	//¥Ú”°2 6 9 6 3
	for_each(v.begin(), result, print);
	cout << endl;
	//¥Ú”°2 6 9 6 3 6 3
	for_each(v.begin(), v.end(), print);
	cout << endl;
	return 0;
}
