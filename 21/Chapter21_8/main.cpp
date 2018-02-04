#include <algorithm>
#include <vector>
#include <iostream>

bool strEqual(const char* s1, const char* s2){
	return strcmp(s1, s2) == 0 ? 1 : 0;
}

int main(void){
	using namespace std;
	//初始化向量v1、v2
	vector<int> v1, v2;
	v1.push_back(2);
	v1.push_back(0);
	v1.push_back(0);
	v1.push_back(6);

	v2.push_back(2);
	v2.push_back(0);
	v2.push_back(0);
	v2.push_back(7);
	//v1和v2不匹配检查
	pair<vector<int>::iterator, vector<int>::iterator> result1=
		mismatch(v1.begin(), v1.end(), v2.begin());
	if(result1.first == v1.end() && result1.second == v1.end())
		cout << "v1和v2完全相同" << endl;
	else
		cout << "v1和v2不相同,不匹配的数是:\n"
			 << *result1.first << endl
			 << *result1.second << endl << endl;
	//初始化字符串s1、s2
	char* s1[] = {"apple", "pear", "watermelon", "banana", "grape"};
	char* s2[] = {"apple", "pears", "watermelons", "banana", "grape"};
	//s1和s2不匹配检查
	pair<char**, char**> result2=mismatch(s1, s1+5, s2, strEqual);
	if(result2.first == s1+5 && result2.second ==s2+5)
		cout << "s1和s2完全相同" << endl;
	else
		cout << "s1与s2不相同,不匹配的字符串为:\n" 
		     << s1[result2.first -s1] << endl
			 << s2[result2.second -s2] << endl << endl;
	return 0;
}
