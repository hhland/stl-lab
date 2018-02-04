#include <algorithm>
#include <vector>
#include <iostream>

bool divby5(int x){
	return x % 5 ? 0 : 1;
}

int main(void){
	using namespace std;
	//初始化vector
	vector<int> v(20);
	for(unsigned int i=0; i<v.size(); i++)
		v[i]=(i+1)*(i+3);
	vector<int>::iterator iLocation;
	iLocation=find_if(v.begin(), v.end(), divby5);
	if(iLocation != v.end())
		cout << "找到第一个能被5整除的元素" 
			 << *iLocation << endl   //打印10
			 << "元素的索引位置为"
			 << iLocation - v.begin() << endl; //打印3
	return 0;
}
 