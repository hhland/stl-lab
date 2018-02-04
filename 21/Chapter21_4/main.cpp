#include <algorithm>
#include <list>
#include <iostream>

bool parity_equal(int x, int y){
	return (x-y)%2 == 0 ? 1:0;
}

int main(void){
	using namespace std; 
	//链表初始化
	list<int> l;
	l.push_back(3);
	l.push_back(6);
	l.push_back(9);
	l.push_back(11);
	l.push_back(11);
	l.push_back(18);
	l.push_back(20);
	l.push_back(20);
	//查找邻接相等的元素
	list<int>::iterator iResult=adjacent_find(l.begin(),l.end());
	if(iResult != l.end()){
		cout << "发现链表有两个邻接的元素相等：" << endl;
		cout << *iResult << endl;
		iResult++;
		cout << *iResult << endl;
	}
	//查找奇偶性相同的邻接元素
	iResult=adjacent_find(l.begin(), l.end(), parity_equal);
	if(iResult != l.end()){
		cout << "发现有两个邻接元素的奇偶性相同: " << endl;
		cout << *iResult << endl;
		iResult++;
		cout << *iResult << endl;
	}
	return 0;
}
