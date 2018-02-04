#include <string>
#include <iostream>

int main(void){
	using namespace std;
	char* cArray="hello, world!";
	string s(cArray);
	//数组方式
	for(unsigned int j=0; j< s.size(); j++)
		cout << "第" << j << "个字符: " << s[j] << endl;
	//迭代器方式
	string::reverse_iterator ri, rend;
	rend=s.rend();
	cout << "反向打印字符" << endl;
	for(ri=s.rbegin(); ri!=rend; ri++)
		cout << *ri << ' ' ;
	cout << endl;
	return 0;
}