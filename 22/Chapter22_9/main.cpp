#include <algorithm>
#include <list>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ' ';
}

int main(void){
	list<int> l1;
	l1.push_back(1);
	l1.push_back(3);
	l1.push_back(1);
	l1.push_back(6);
	l1.push_back(8);
	//将l1链表元素1替换为100，然后拷贝到l2链表
	list<int> l2(5);
	replace_copy(l1.begin(), l1.end(), l2.begin(), 1, 100);
	cout << "l1保持不变: ";
	for_each(l1.begin(), l1.end(), print);
	cout << "\nl2元素为: ";
	for_each(l2.begin(), l2.end(), print);
	cout << endl;
	return 0;
}
