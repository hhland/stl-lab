#include <algorithm>
#include <vector>
#include <list>
#include <iostream>
using namespace std;

bool odd(int x){
	return x % 2;
}

int main(void){
	using namespace std;
	vector <int> v(10);
	unsigned int i;
	for(i = 0; i < v.size(); i++) {
		v[i] = i % 7;
		cout << v[i] << ' ';
	}
	cout << endl;
	//将向量v中奇数元素替换为38后,拷贝到链表l
	list<int> l(10);
	replace_copy_if(v.begin(), v.end(), l.begin(), odd, 38);
	list<int>::iterator list_iter;
	for(list_iter=l.begin(); list_iter!=l.end(); list_iter++)
			cout << *list_iter << ' ';
	cout << endl;
	return 0;
}