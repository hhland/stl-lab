#include <slist>
#include <iostream>

int main(void){
	using namespace std;
	slist<int> sl;
	sl.push_front(11); 
	sl.push_front(23);
	sl.push_front(39);
	//打印单向链表元素
	slist<int>::iterator i,iend;
	iend=sl.end();
	for(i=sl.begin(); i!=iend; i++)
		cout << *i << ' '; 
	cout << endl; 
	return 0;
}