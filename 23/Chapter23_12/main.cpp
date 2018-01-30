#include <algorithm>
#include <iostream>
using namespace std;

int main(void){
	int iArray[]={2, 0, 0, 6, 5, 26, 3, 9};
	const int len=sizeof(iArray)/sizeof(int);
	if(is_sorted(iArray, iArray + len))
		cout << "数组iArray已升序排序" << endl;
	else 
		cout << "数组iArray未按升序排序" << endl;
	return 0;
}

