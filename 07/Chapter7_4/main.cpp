#include <deque>
#include <iostream>
  
int main(void){
	using namespace std;
	deque<int> d;
	d.push_back(4);
	d.push_back(5);
	d.push_back(3);
	d.push_back(3);
	d.push_back(3);
	d.push_back(6);
	for(int i=0; i<d.size(); i++)
		cout << d[i] << ' ' ;
	cout << endl;
	//头尾和任意位置删除元素
	d.erase(d.begin() +1);
	d.pop_front();
	d.pop_back();
	for(int j=0; j<d.size(); j++)
		cout << d[j] << ' ' ;
	cout << endl;
	//删除所有元素
	d.clear();
	cout << "执行clear()" <<endl << "deque元素全部清除" << endl;
	return 0;
}
