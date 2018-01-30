#include <algorithm>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ' ';
}

template <class BidirectionalIter>
void prevPermu_sort(BidirectionalIter first, BidirectionalIter last){
	while(prev_permutation(first, last)) {}  //利用较小的组合返回true
}

int main(void){
	int iArray[]={1, 3, 9, 6, 7};
	const int len=sizeof(iArray)/sizeof(int);
	cout << "原组合" << endl;
	for_each(iArray, iArray+len, print);
	cout << endl;
	cout << "新组合" << endl;
	prev_permutation(iArray, iArray+len);
	for_each(iArray, iArray+len, print);
	cout << endl;
	//
	cout << "利用较慢的prev_permutation算法排序\n";
	prevPermu_sort(iArray, iArray+len);
	for_each(iArray, iArray+len, print);
	cout << endl;
	return 0;
}