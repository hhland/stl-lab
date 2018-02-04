#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << "  ";
}

int main(void){
	vector<int> v;
	v.push_back(2);
	v.push_back(4);
	v.push_back(3);
	v.push_back(4);
	v.push_back(8);
	//
	int iArray[6]={0, 0, 0, 0, 0, 0};
	//
	remove_copy(v.begin(), v.end(), iArray, 4);
	for_each(v.begin(), v.end(), print);
	cout << endl;
	//
	for_each(iArray, iArray+6, print);
	cout << endl;
	return 0;
}