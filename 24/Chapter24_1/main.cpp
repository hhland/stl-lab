#include <numeric>
#include <algorithm>
#include <iostream>
using namespace std;
void print(int x){
	cout << x << ' ';
}

int main(void){
	int iArray[10]; 
	iota(iArray, iArray+10, 18);
	for_each(iArray, iArray+10, print);
	cout << endl;
	return 0;
}
