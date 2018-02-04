#include <stdio.h>
int main(void){
	try{
		printf("try块1代码执行\n");
		throw 10;
	}
	catch(int& i){
		printf("处理try块1的int类型异常对象，值为%d\n", i);
	}
	catch(double d){
		printf("处理try块1的double类型异常对象,值为%f\n", d);
	}
	//
	try{
		printf("try块2代码执行\n");
		throw 23.8;
	}
	catch(int& i){
		printf("处理try块2的int类型异常对象，值为%d\n", i);
	}
	catch(double d){
		printf("处理try块2的double类型异常对象,值为%f\n", d);
	}
	//
	printf("程序结束\n");
	return 0;
}


