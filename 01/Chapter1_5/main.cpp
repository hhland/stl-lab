#include <stdio.h>
void f(void){
	try{
		throw "abc";
	}
	catch(const char*){
		printf("执行f出现const char*异常\n");
		throw;  //继续抛出所捕捉到的异常,然后函数返回
	}
	printf("f函数打印\n");  //这条语句不会被执行
}

int main(void){
	try{
		f();
	}
	catch(const char*){
		printf("执行main出现const char*异常\n");
	}
	return 0;
}
