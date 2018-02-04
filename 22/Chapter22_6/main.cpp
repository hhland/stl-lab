#include <algorithm>
#include <vector>
#include <list>
#include <iostream>
using namespace std;

int square(int x){
	return x*x;
}

void print(int x){
	cout << x << "  ";
}

int main(void){
	//vector初始化	
	vector<int> v;
	v.push_back(5);
	v.push_back(15);
	v.push_back(25);
	//list初始化
	list<int> l(3);
	//对vector容器元素执行平方运算，放入list容器
	transform(v.begin(), v.end(), l.begin(), square);
	//打印链表元素
	for_each(l.begin(), l.end(), print);
	cout << endl;
	return 0;
}