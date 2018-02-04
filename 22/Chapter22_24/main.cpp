#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ' ';
}

int main(void){
	vector<int> v(10);
	for(unsigned int i=0; i<v.size(); i++)
		v[i]=i+1;
	//
	int iArray[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	//
	cout << "开始旋转复制，*middle选为" << *(v.begin()+7) << endl;
	rotate_copy(v.begin(), v.begin()+7, v.end(), iArray);
	for_each(iArray, iArray+10, print);
	cout << endl;
	return 0;
}
