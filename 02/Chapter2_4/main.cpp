#include <stdio.h>
template <class T>
void func(T a){
	printf("hello\n");
}
//函数模板完全特化
template<>
void func<int>(int a){
	printf("hello there\n");
}

int main(void){
	func(2);    //打印hello there 
	func('y');  //打印hello
	return 0;
}
