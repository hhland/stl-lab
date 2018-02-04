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
	v.push_back(5);
	v.push_back(5);
	v.push_back(5);
	v.push_back(6);
	v.push_back(5);
	v.push_back(2);
	//
	int iArray[6]={0, 0, 0, 0, 0, 0};
	//
	unique_copy(v.begin(), v.end(), iArray);
	//¥Ú”°2 5 6 5 2 0
	for_each(iArray, iArray+6, print);
	cout << endl;
	return 0;
}
