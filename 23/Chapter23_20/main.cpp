#include <algorithm>
#include <iostream>
using namespace std;
void print(int x){
	cout << x << ' ';
}

int main(void){
	int A[10]={3, 6, 6, 9, 13, 17, 18, 20, 23, 25};
	int B[7]={-2, -1, 6, 9, 18, 30, 32}; 
	//
	int C[3]={0, 0, 0}; 
	set_intersection(A, A+10, B, B+7, C);
	for_each(C, C+3, print);
	cout << endl;
	return 0;
}
