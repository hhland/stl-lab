#include <stdio.h>
template <class T>
void func(T a){
	printf("使用func(T a)模板\n");
}
//函数模板的重载
template<class T1, class T2>
int func(T1 t1, T2 t2){
	printf("使用func(T1 t1, T2 t2)模板\n");
	return 1;
}

int main(void){
	func(30, 60);  //使用重载的函数模板
	func(19);
	return 0;
}
