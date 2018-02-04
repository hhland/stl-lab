#include <slist>
#include <iostream>

int main(void){
	using namespace std; 
	slist<int> sl;
	//链入15、16、5、5、5、17和18
	sl.push_front(18);
	sl.push_front(17);
	sl.push_front(5);
	sl.push_front(5);
	sl.push_front(5);
	sl.push_front(16);
	sl.push_front(15);
	//删除元素,剩余17和18
	slist<int>::iterator i,iend;
	i=sl.begin();
	i++;
	sl.erase(i);      //删除15
	sl.pop_front();   //删除16
	sl.remove(5);     //删除所有的5
	//打印
	iend=sl.end();
	for(i=sl.begin(); i!=iend; i++)  //打印17 18
		cout << *i << ' ' ;
	cout << endl;
	return 0;
}
