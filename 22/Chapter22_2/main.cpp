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
	copy_backward(v.begin(), v.begin() + 3, v.end());
	for_each(v.begin(), v.end(), print);
	cout << endl;
	return 0;
}

