#pragma warning(disable:4786)
#include <deque>
#include <string>
#include <iostream>

int main(void){  
	using namespace std;
	deque<string> d;
	//打印deque为空
	cout << "d是否为空: " << d.empty() << endl;
	//装入元素
	d.push_back("红楼梦");
	d.push_back("源氏物语");
	d.push_back("教父");
	d.push_back("水浒传");
	d.push_back("24史");
	//打印deque所有元素
	deque<string>::iterator i,iend;
	iend=d.end();
	for(i=d.begin(); i!=iend; i++)
		cout <<  *i << "   ";
	cout << endl;
	//打印首元素
	cout << "deque首元素为: " << d.front() << endl;
	//打印末元素
	cout << "deque末元素为: " << d.back() << endl;
	//打印元素个数
	cout << "deque元素个数为: " << d.size() << endl;
	//打印可支持的最大deque元素个数
	cout << "deque最大元素个数为: " << d.max_size() << endl;
	return 0;
}
