#include <algorithm>
#include <iostream>

int main(void){
	using namespace std;
	char *s1="book";
	const int len1=sizeof("book")/sizeof(char);
	char* s2="house";
	const int len2=sizeof("house")/sizeof(char);
	bool result=lexicographical_compare(s1, s1+len1, s2, s2+len2);
	if(result)
		cout << "单词\"book\"在\"house\"前面" << endl;
	else 
		cout << "单词\"book\"在\"house\"后面" << endl;
	return 0;
}