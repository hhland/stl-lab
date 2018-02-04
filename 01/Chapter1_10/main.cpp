#include <stdio.h>
class A{
	int i;
public:
	A(int i_){i=i_;}  //构造函数定义为内联函数
	void print();
};

inline void A::print(){  //print函数定义为内联函数
	printf("i的值为%d\n", i);
}

int main(void){
	A a(3);
	a.print();
	return 0;
}