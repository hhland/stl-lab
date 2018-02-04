#include <set>
#include <iostream>

int main(void){
	using namespace std;
	set<int> s;
	s.insert(10);
	s.insert(15);
	s.insert(11);
	s.insert(17);
	s.insert(13);
	s.insert(19);
	s.insert(19);  //不会重复插入
	//打印二叉树的数据
	set<int>::iterator i, iend;
	iend=s.end();
	for(i=s.begin(); i!=iend; i++)
		cout << *i << ' ';
	cout << endl;
	return 0;
}

