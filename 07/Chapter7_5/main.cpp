#include <deque>
#include <iostream>

int main(void){
	using namespace std;
	deque<int> d;
	d.push_back(1);    
	d.push_back(3);
	d.push_back(5);
	d.push_back(7);
	d.push_back(9);
	//deque元素的前向遍历
	deque<int>::iterator i,iend;
	iend=d.end();
	for(i=d.begin(); i!=iend; i++)
		cout << *i << ' ';
	cout << endl;
	//deque元素的反向遍历
	deque<int>::reverse_iterator ri,riend;
	riend=d.rend();
	for(ri=d.rbegin(); ri!=riend; ri++)
		cout << *ri << ' ';
	cout << endl;
	return 0;
}