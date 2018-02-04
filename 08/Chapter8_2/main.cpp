#include <list>
#include <iostream>

int main(void){
	using namespace std;
	list<int> l;
	l.push_back(6);
	l.push_back(8); 
	l.push_back(9);
	//插入链表元素
	list<int>::iterator i,iend;  
	i=l.begin();
	i++;
	l.insert(i,7);
	l.push_front(5);
	//打印链表元素
	iend=l.end();
	for(i=l.begin(); i!=iend; i++)
		cout << *i << ' ';
	return 0;


}