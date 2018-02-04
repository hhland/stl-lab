#include <algorithm>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ' ';
}

int main(void){
	int iArray[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << "随机抖动iArray三次" << endl;
	for(int i=0; i<3; i++){
		random_shuffle(iArray, iArray+10);
		for_each(iArray, iArray+10, print);
		cout << endl;
	}
	return 0;
}
