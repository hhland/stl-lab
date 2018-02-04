#include <vector>
#include <iostream>
using namespace std;
void print(vector<int>& v);

int main(void){  
	using namespace std;
	vector<int> v;
	print(v);
	//添加5个元素
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5); 
	print(v);
	//再添加4个元素
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	v.push_back(9);
	print(v);
	//调整vector数据空间大小
	v.reserve(30);
	print(v);
	return 0;
}

void print(vector<int>& v){
	cout << "---------------------" << endl;
	cout << "empty = " << v.empty() << endl;
	cout << "size = " << v.size() << endl;
	cout << "max_size = " << v.max_size() << endl;
	cout << "capacity = " << v.capacity() << endl;
}