#include <numeric>
#include <iostream>
using namespace std;

int multiply(int x, int y){
	return x * y;
}

int main(void){
	int iArray[5]={1, 2, 3, 4, 5};
	cout << "数组iArray的元素和为"
		<< accumulate(iArray, iArray+5, 0)
		<< endl;
	cout << "数组iArray的元素乘积为"
		<< accumulate(iArray, iArray+5, 1, multiply)
		<< endl;
	return 0;
}