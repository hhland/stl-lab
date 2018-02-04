#include <map>
#include <iostream>

int main(void){
	using namespace std;
	//创建map容器对象m
	map<const char*, float> m;
	//插入元素(水果,单价)
	m["apple"]   = 3.6f;
	m["orange"]  = 3.2f;
	m["banana"]  = 1.8f;
	m["pear"]    = 2.3f;
	m["lichee"]  = 6.3f;
	//打印元素
	cout << "苹果价格: " << m["apple"] << "元/斤\n";
	cout << "桔子价格: " << m["orange"] << "元/斤\n";
	cout << "香蕉价格: " << m["banana"] << "元/斤\n";
	cout << "雪梨价格: " << m["pear"] << "元/斤\n";
	cout << "荔枝价格: " << m["lichee"] << "元/斤\n";
	return 0;
}