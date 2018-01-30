#include <algorithm>
#include <iostream>
using namespace std;

int main(void){
	int iArray[]={2, 3, 9, 12, 13, 20, 23, 26};
	const int len=sizeof(iArray)/sizeof(int);
	if(binary_search(iArray, iArray + len, 13))
		cout << "数组iArray包含元素13" << endl;
	else
		cout << "数组iArray不包含元素13" << endl;
	return 0;
}