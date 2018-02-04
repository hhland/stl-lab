#include <deque>
#include <iostream>

int main(void){
	using namespace std;
	deque<int> d;
	d.push_back(6);
	d.push_back(7);   
	//头部插入
	d.push_front(5);
	for(int i=0; i<d.size(); i++)  //打印5 6 7
		cout << d[i] << ' ';
	cout << endl;
	//中间位置插入
	d.insert(d.begin() +1 ,9);     //在第2个元素前插入9,即5 9 6 7
	for(int j=0; j<d.size(); j++)
		cout << d[j] << ' ';
	cout << endl;
	return 0;
}