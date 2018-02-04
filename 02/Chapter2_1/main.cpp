#include <stdio.h>
template <class T>
T max(T a, T b){
	return a > b ? a : b;
}  

int main(void){
	printf("%d\n", max<int>(3, 10));
	printf("%f\n", max<double>(16.9, 2.8)); 
	return 0;
}


