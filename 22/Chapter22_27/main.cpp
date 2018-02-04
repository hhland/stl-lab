#include <algorithm>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ' ';
}

bool less10(int x){
	return x < 10 ? 1 : 0;
}

int main(void){
	int iArray[10]={16, -1, 3, 11, 2, 5, 8, 20, 9, 3};
	int *result=partition(iArray, iArray+10, less10);
	cout << "按小于10进行分割" << endl;
	for_each(iArray, iArray+10, print);
	cout << endl;
	//
	cout << "partition算法返回的分界元素为 " << *result <<endl;
	return 0;
}
