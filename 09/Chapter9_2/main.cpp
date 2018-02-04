#include <slist>
#include <iostream>

int main(void){
	using namespace std;
	slist<int> sl;
	//在链表尾进行插入
	slist<int>::iterator iLast=sl.previous(sl.end());  
	iLast = sl.insert_after(iLast, 61);
	iLast = sl.insert_after(iLast, 62);
	iLast = sl.insert_after(iLast, 63);
	iLast = sl.insert_after(iLast, 64);
	iLast = sl.insert_after(iLast, 65);
	//打印
	slist<int>::iterator i;
	for(i=sl.begin(); i!=sl.end(); i++)
		cout << *i << ' ';
	cout << endl;
	return 0;
}