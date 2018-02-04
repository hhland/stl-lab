#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ' ';
}

int main(void){
	vector<int> v(10);
	for(unsigned int i=0; i<v.size(); i++)
		v[i]=i % 8;
	//
	cout << "v= ";
	for_each(v.begin(), v.end(), print);
	cout << endl;
	//
	const int n=6;  //采样个数
	int iArray[n];
	random_sample(v.begin(), v.end(), iArray, iArray+n);
	cout << n << "个采样元素为 ";
	for_each(iArray, iArray+n, print);
	cout << endl;
	return 0;
}