#include <algorithm>
#include <iostream>

int main(void){
	using namespace std;
	//定义两个字符串
	char* string1="abcdef7ghijklmn";
	char* string2="zyx3pr7ys";
	//范围查找string1于string2中
	char* result=find_first_of(string1, string1 + strlen(string1),
							   string2, string2 + strlen(string2));
	cout << "字符串string1的第一个出现在string2的字符为："
		 << *result << endl;  //打印7
	return 0;
}