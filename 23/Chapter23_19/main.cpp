#include <algorithm>
#include <iostream>
using namespace std;
void print(int x){
	cout << x << ' ';
}

int main(void){
	int A[6]={3, 3, 6, 9, 10, 12};
	int B[3]={3, 8, 11};
	//
	int C[8]={0, 0, 0, 0, 0, 0, 0, 0};
	set_union(A, A+6, B, B+3, C);
	for_each(C, C+8, print);
	cout << endl;
	return 0;
}
