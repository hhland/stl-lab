#include <list>
#include <iostream>

int main(void){ 
	using namespace std;
	list<int> l;
	l.push_back(6); 
	l.push_back(8);
	l.push_back(6);
	l.push_back(6);
	l.push_back(6);
	l.push_back(9);
	l.push_back(13);
	l.push_back(6);
	l.unique();
	list<int>::iterator i,iend;
	iend=l.end();
	for(i=l.begin(); i!=iend; i++)
		cout << *i << ' ';
	cout << endl;
	return 0;
}