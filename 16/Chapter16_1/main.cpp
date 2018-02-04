#include <hash_map>
#include <iostream>
int main(void){
	using namespace std;
	//创建hash_map容器对象hm
	hash_map<const char*, float> hm;
	//插入元素(水果名,单价),水果名为键值,单价为映照数据
	hm["apple"]=3.6f;
	hm["orange"]=3.2f;
	hm["banana"]=1.8f;
	hm["pear"]=2.3f;
	hm["lichee"]=6.3f;
	//打印元素
	cout << "苹果价格: " << hm["apple"] << "元/斤\n";
	cout << "桔子价格: " << hm["orange"] << "元/斤\n";
	cout << "香蕉价格: " << hm["banana"] << "元/斤\n";
	cout << "雪梨价格: " << hm["pear"] << "元/斤\n";
	cout << "荔枝价格: " << hm["lichee"] << "元/斤\n";
	return 0;
}
