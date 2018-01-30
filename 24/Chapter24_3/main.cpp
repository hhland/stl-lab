#include <numeric>
#include <iostream>

int add(int x, int y){
	return x + y;
}

int mul(int x, int y){
	return x * y;
}

int main(void){
	using namespace std;
	int iArray1[3]={2, 5, 4};
	int iArray2[3]={10, 6, 5};
	//用原型1计算内积
	int result=inner_product(iArray1, iArray1 + 3, iArray2, 0);
	cout << "数组iArray1与数组iArray2的内积为" << result << endl;
	//用原型2计算内积
	result=inner_product(iArray1, iArray1 +3, iArray2, 0, add, mul);
	cout << "数组iArray1与数组iArray2的内积为" << result << endl;
	return 0;
}
