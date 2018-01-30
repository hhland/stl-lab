#include <algorithm>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ' ';
}

int main(void){
	int iArray1[3]={20, 23, 38};
	int iArray2[6]={2, 9, 13, 18, 26, 30};
	//ÉýÐò¹é²¢
	int result[9];
	merge(iArray1, iArray1+3, iArray2, iArray2+6, result);
	for_each(result, result+9, print);
	cout << endl;
	//½µÐò¹é²¢
	int iArray3[5]={30, 20, 17, 8, 6};
	int iArray4[4]={10, 5, 2, 0};
	merge(iArray3, iArray3+5, iArray4, iArray4+4, result, greater<int>());
	for_each(result, result+9, print);
	cout << endl;
	return 0;
}
