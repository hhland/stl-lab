#include <slist>
#include <iostream>
using namespace std;
void print(slist<int>& sl);

int main(void){
	slist<int> sl;
	for(int j=10; j>=1; j--)  //链表从头到尾元素为1~10
		sl.push_front(j);
	//splice()函数
	slist<int> carry;
	carry.splice(carry.begin(), sl, sl.begin()); //carry含元素1
	//打印carry
	cout << "carry的链表元素为: " ;
	print(carry);
	cout << endl;
	//打印sl
	cout << "sl的链表元素为: "  ;
	print(sl);
	cout << endl;
	//merge()函数用法
	slist<int> x;
	x.push_front(32);
	x.push_front(31);
	x.push_front(30);
	sl.merge(x);
	//打印x
	cout << "x的链表元素为: 空" ;
	print(x);
	cout << endl;
	//打印l
	cout << "sl的链表元素为: " ;
	print(sl);
	cout << endl;
	return 0;
}

void print(slist<int>& sl){
	slist<int>::iterator i,iend;
	iend=sl.end();
	for(i=sl.begin(); i!=iend; i++)
		cout << *i << ' ';
}
