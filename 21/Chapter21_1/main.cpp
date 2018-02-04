#include <algorithm>
#include <list>
#include <iostream>
using namespace std;
struct print{
	int count; //打印的元素计数
	print(){count=0;}
	void operator()(int x){
		cout << 3*x << endl;
		count++;
	}
};

int main(void){
	//双向链表初始化
	list<int> l;
	l.push_back(29);
	l.push_back(32);
	l.push_back(16);
	l.push_back(22);
	l.push_back(27);
	//打印链表的元素
	print p=for_each(l.begin(),l.end(),print());
	//打印的元素个数
	cout << p.count << endl;
	return 0;
}