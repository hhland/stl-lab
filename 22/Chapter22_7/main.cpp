#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << "  ";
}

int main(void){
	vector<int> v;
	v.push_back(13);
	v.push_back(25);
	v.push_back(27);
	v.push_back(25);
	v.push_back(29);
	//将v的25全部替换为100
	replace(v.begin(), v.end(), 25, 100);
	cout << "v向量元素: ";
	for_each(v.begin(), v.end(), print);
	cout << endl;
	//将iArray的5全部替换为200
	int iArray[7]={3,6,5,9,5,5,10};
	replace(iArray, iArray+7, 5, 200);
	cout << "数组iArray元素: ";
	for_each(iArray, iArray+7, print);
	cout << endl;
	return 0;
}