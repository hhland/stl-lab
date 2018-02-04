#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << " ";
}

int main(void){
	vector<int> v1, v2;
	v1.push_back(1);
	v1.push_back(3);
	v1.push_back(5);
	v2.push_back(2);
	v2.push_back(4);
	v2.push_back(6);
	//打印v1、v2
	cout << "交换前, v1=";
	for_each(v1.begin(), v1.end(), print);
	cout << "v2=";
	for_each(v2.begin(), v2.end(), print);
	cout << endl;
	//交换v1、v2
	swap_ranges(v1.begin(), v1.end(), v2.begin());
	//打印v1、v2
	cout << "交换后, v1=";
	for_each(v1.begin(), v1.end(), print);
	cout << "v2=";
	for_each(v2.begin(), v2.end(), print);
	cout << endl;
	return 0;
}