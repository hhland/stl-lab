#include <hash_set>
#include <iostream>

int main(void){
	using namespace std;
	hash_set<int> hs;
	hs.insert(31);
	hs.insert(193);
	hs.insert(23);
	//遍历打印哈希集合元素
	hash_set<int>::iterator i,iend;
	iend = hs.end();
	for(i=hs.begin(); i!=iend; i++)
		cout << *i << ' ';
	cout << endl;
	return 0;
}


