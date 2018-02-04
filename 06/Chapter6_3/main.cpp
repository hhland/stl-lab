#include <vector>
#include <iostream>
int main(void){
	using namespace std; 
	vector<int> v;
	v.push_back(6);   
	v.push_back(7);
	v.push_back(8);
	v.push_back(10);
	v.insert(v.begin() + 3, 9);  //在元素10的前面插入9
	v.insert(v.begin(), 5);      //插入5为首元素
	v.insert(v.end(), 11);       //插入11为末元素
	for(int i = 0; i < v.size(); i++)    
		cout << "v[" << i << "] = " << v[i] << endl; 
	return 0;
}
