#include <algorithm>
#include <list>
#include <iostream>

int main(void){
	using namespace std;
	//双向链表初始化
	list<int> l;
	l.push_back(10);
	l.push_back(18);
	l.push_back(26);
	l.push_back(26);
	l.push_back(30);
	//查找元素26
	list<int>::iterator iLocation=find(l.begin(),l.end(),26);
	if(iLocation != l.end())
		cout << "找到元素26" << endl;
	//打印元素18
	cout << "前一个元素为" << *(--iLocation) << endl;
	return 0;
}