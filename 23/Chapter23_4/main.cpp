#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ' ';
}

int main(void){
	vector<int> v;
	v.push_back(3);
	v.push_back(9);
	v.push_back(6);
	v.push_back(3);
	v.push_back(12);
	v.push_back(17);
	v.push_back(20);
	for_each(v.begin(), v.end(), print); cout << endl;
	//½¨Á¢¶Ñ
	make_heap(v.begin(), v.end());
	//¶ÑÅÅÐò
	cout << "½øÐÐ¶ÑÅÅÐò" << endl;
	sort_heap(v.begin(), v.end());
	for_each(v.begin(), v.end(), print); cout << endl;
	return 0;
}
