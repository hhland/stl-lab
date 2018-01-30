#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ' ';
}

int main(void){
	vector<int> v;
	v.push_back(38);
	v.push_back(29);
	v.push_back(32);
	v.push_back(17);
	v.push_back(26);
	v.push_back(15);
	v.push_back(11);
	v.push_back(9);
	v.push_back(10);
	v.push_back(60); //入堆元素
	//将最后的元素60入堆
	push_heap(v.begin(), v.end());
	for_each(v.begin(), v.end(), print);
	cout << endl;
	return 0;
}




		