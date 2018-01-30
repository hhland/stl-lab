#include <algorithm>
#include <iostream>
using namespace std;
void print(int x){
	cout << x << ' ';
}

int main(void){
	int A[9]={3, 6, 6, 9, 12, 13, 15, 18, 20};
	int B[5]={2, 6, 15, 20, 30};
	int C[8]={0, 0, 0, 0, 0, 0, 0, 0};
	set_symmetric_difference(A, A+9, B, B+5, C);
	for_each(C, C+8, print);
	cout << endl;
	return 0;
}
