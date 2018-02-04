#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ' ';
}

int main(void){
	vector<int> v(5);
	fill(v.begin(), v.end(), 30);
	for_each(v.begin(), v.end(), print);
	cout << endl;
	return 0;
}