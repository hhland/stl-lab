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
	//搜索元素13
	int v=13;
	set<int>::iterator i_v = s.find(v);
	cout << *i_v << endl;
	//搜索不存在的元素60
	v=60;
	i_v = s.find(v);
	if(i_v != s.end())
		cout << *i_v << endl;
	return 0;
}
