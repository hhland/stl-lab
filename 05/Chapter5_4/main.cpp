#include <vector>
#include <iostream>
#include <algorithm>   //find_if算法
#include <functional>  
 
int main(void){
	using namespace std; 
	vector<int> v;
	v.push_back(20);
	v.push_back(13);
	v.push_back(6);
	v.push_back(3);
	v.push_back(29); 
	vector<int>::iterator less7_iter=
		find_if(v.begin(),v.end(),bind1st(greater<int>(),7));
	cout << *less7_iter << endl;  //将打印数字6
	return 0;
}
