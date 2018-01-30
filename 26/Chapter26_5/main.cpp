#include <iterator>
#include <list>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	list<int> l;
	l.push_back(3);
	l.push_back(9);
	l.push_back(12);
	l.push_back(16);
	l.push_back(20);
	//
	reverse_bidirectional_iterator<list<int>::iterator, int> rbi_first(l.end());
	reverse_bidirectional_iterator<list<int>::iterator, int> rbi_end(l.begin());
	cout << *rbi_first << endl;    //打印20
	cout << *++rbi_first << endl;  //打印16	
	cout << *rbi_end << endl;      //打印0(end元素)
	cout << *--rbi_end << endl;    //打印3
	return 0;
}