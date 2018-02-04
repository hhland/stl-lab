#pragma warning (disable:4786)
#include <hash_map>
#include <iostream>

int main(void){
	using namespace std;
	hash_map<int, char> hm;
	typedef pair<hash_map<int, char>::iterator, bool> ReturnPair;
	typedef pair<int, char> InsertPair;
	ReturnPair p;
	InsertPair p1(10, 'a'), p2(20, 'c'), p3(80, 'e');
	//插入p1
	p=hm.insert(p1);
	if(!p.second) cout << "插入p1失败\n";
	//插入p2
	p=hm.insert(p2);
	if(!p.second) cout << "插入p2失败\n";
	//插入p3
	p=hm.insert(p3);
	if(!p.second) cout << "插入p3失败\n";
	//打印统计数据
	cout << hm.empty() << endl;          //打印是否为空(false为0)
	cout << hm.size() << endl;           //打印元素个数(3)
	cout << hm.bucket_count() << endl;   //打印表长(193)
	return 0;
}
