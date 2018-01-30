#include <iterator>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	int iArray[]={10, 18, 19, 23, 26};
	int len=sizeof(iArray)/sizeof(int);
	//
	vector<int> v;
	v.push_back(2);
	v.push_back(3);
	//将数组元素从后插入到vector容器
	copy(iArray, iArray+len, back_insert_iterator<vector<int> >(v));
	//打印vector容器元素
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, "  "));
	cout << endl;
	return 0;
}