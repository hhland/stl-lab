#include <string>
#include <iostream>

int main(void){
	using namespace std;
	string s1;
	s1.push_back('a');
	s1.push_back('b');
	s1.push_back('c');
	cout << "打印s1: " << s1 << endl;
	//
	char* cArray="efgh";
	string s2(cArray);
	cout << "打印s2: " << s2 << endl;
	//字符串的"+"操作
	cout << "打印s1+s2: " << s1 + s2 << endl;
	//字符串s1后添加字符串s2
	cout << "append后,打印s1: " << s1.append(s2) << endl;
	//在s1的第2个字符位置前插入字符'8'
	string::iterator i;
	i=s1.begin();
	i++;
	s1.insert(i,'8');
	cout << "insert后,打印s1: " << s1 << endl;
	//字符串的"+="操作
	s1+=s2;
	cout << "s1+=s2后,打印s1: " << s1 << endl;
	return 0;
}