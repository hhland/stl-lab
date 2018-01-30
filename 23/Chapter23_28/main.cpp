#include <algorithm>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ' ';
}

template <class BidirectionalIter>
void nextPermu_sort(BidirectionalIter first, BidirectionalIter last){
	while(next_permutation(first, last)) {}  //利用较大的组合返回true
}

int main(void){
	int iArray[]={3, 6, 2, 9, 8};
	const int len=sizeof(iArray)/sizeof(int);
	cout << "原组合" << endl;
	for_each(iArray, iArray+len, print);
	cout << endl;
	cout << "新组合" << endl;
	next_permutation(iArray, iArray+len);
	for_each(iArray, iArray+len, print);
	cout << endl;
	//
	cout << "利用较慢的next_permutation算法排序\n";
	nextPermu_sort(iArray, iArray+len);
	for_each(iArray, iArray+len, print);
	cout << endl;
	return 0;
}