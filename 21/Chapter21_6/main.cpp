#include <algorithm>
#include <list>
#include <iostream>

int main(void){
	using namespace std;
	//
	list<int> l;
	for(int i=0; i<100; i++)
		l.push_back(i%20);
	//
	int num=0;
	int value=9;
	num=count(l.begin(), l.end(), value);
	cout << "链表中元素等于value的元素个数为: "
		 << num << endl;  //打印5
	return 0;
}