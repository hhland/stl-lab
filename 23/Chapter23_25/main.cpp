#include <algorithm>
#include <list>
#include <iostream>

int main(void){
	using namespace std;
	list<int> l;
	l.push_back(13);
	l.push_back(6);
	l.push_back(9);
	l.push_back(3);
	l.push_back(20);
	//
	cout 
		<< "链表l的最小元素为" 
		<< *min_element(l.begin(), l.end())
		<< endl;
	return 0;
}
