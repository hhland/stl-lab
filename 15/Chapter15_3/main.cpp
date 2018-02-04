#include <hash_set>
#include <iostream>

int main(void){
	using namespace std;
	hash_set<int> hs;
	hs.insert(10);
	hs.insert(20);
	hs.insert(80);
	hs.insert(90);
	hs.insert(100);
	//打印统计数据
	cout << hs.empty() << endl;
	cout << hs.size() << endl;
	cout << hs.bucket_count() << endl;
	return 0;
}