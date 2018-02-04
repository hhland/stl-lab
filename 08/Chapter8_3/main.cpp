#include <list>
#include <iostream>

int main(void){
	using namespace std;   
	list<int> l;
	l.push_back(5);
	l.push_back(6);
	l.push_back(7);
	l.push_back(8);
	l.push_back(9);
	l.push_back(9);
	l.push_back(9);
	l.push_back(10);
	//删除元素,剩下7、8和9
	list<int>::iterator i,iend;
	i=l.begin();
	i++;
	l.erase(i);
	l.pop_back();
	l.pop_front();
	l.remove(9);
	//打印
	iend=l.end();
	for(i=l.begin(); i!=iend; i++)
		cout << *i << ' ' ;
	cout << endl;
	return 0;
}