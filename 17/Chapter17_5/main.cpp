#include <string>
#include <iostream>

int main(void){
	using namespace std;
	        //0123456789012345678901234
	string s("dog bird chicken bird cat");
	//字符串查找
	cout <<	s.find("bird") << endl;  //打印4
	cout << (int)s.find("pig") << endl;   //打印-1
	//字符查找
	cout << s.find('i',7) << endl;   //打印11
	//从字符串的末尾开始查找字符串
	cout << s.rfind("bird") << endl; //打印17
	//从字符串的末尾开始查找字符
	cout << s.rfind('i') << endl;    //打印18
	//查找第1个属于某子串的字符
	cout << s.find_first_of("13r98") << endl;  //找到字符r,打印6
	//查找第1个不属于某字符串的字符
	cout << s.find_first_not_of("dog bird 2006") << endl;  //找到字符c,打印9
	//查找最后一个属于某子串的字符
	cout << s.find_last_of("13r98") << endl;  //字符r,打印19
	//查找最后一个不属于某字符串的字符
	cout << s.find_last_not_of("tea") << endl;  //字符c,打印22
	return 0;
}