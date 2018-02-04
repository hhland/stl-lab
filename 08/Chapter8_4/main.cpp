#include <list>
#include <iostream>
using namespace std;
void print(list<int>& l);  

int main(void){
	list<int> l;
	for(int j=1; j<=10; j++)
		l.push_back(j);
	//splice()函数
	list<int> carry;
	carry.splice(carry.begin(), l, l.begin()); //carry含元素1
	//打印carry
	cout << "carry的链表元素为: " ;
	print(carry);
	cout << endl;
	//打印l
	cout << "l的链表元素为: "  ;
	print(l);
	cout << endl;
	//merge()函数用法
	list<int> x;
	x.push_back(30);
	x.push_back(31);
	x.push_back(32);
	l.merge(x);
	//打印x
	cout << "x的链表元素为: 空" ;
	print(x);
	cout << endl;
	//打印l
	cout << "l的链表元素为: " ;
	print(l);
	cout << endl;
	return 0;
}

void print(list<int>& l){
	list<int>::iterator i,iend;
	iend=l.end();
	for(i=l.begin(); i!=iend; i++)
		cout << *i << ' ';
}
