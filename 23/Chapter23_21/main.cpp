#include <algorithm>
#include <iostream>
using namespace std;
void print(int x){
	cout << x << ' ';
}

int main(void){
	int A[12]={1, 2, 3, 3, 3, 4, 5, 6, 7, 8, 9, 10};
	int B[6]={2, 3, 4, 6, 8, 10};
	int C[6]={0, 0, 0, 0, 0, 0};
	set_difference(A, A+12, B, B+6, C);
	for_each(C, C+6, print);
	cout << endl;
	return 0;
}
