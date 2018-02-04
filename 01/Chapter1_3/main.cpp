#include <stdio.h>
class A{
public:
	void f(){
		printf("函数f打印\n");
	}
	void g(){
		throw 12; 
	}
};

int main(void){
	A a;
	a.f();      //调用f
	try{
		a.g();  //调用g
	}
	catch(int& i){
		printf("调用函数g出现运行异常,值为%d\n", i);
	}
	return 0;
}
