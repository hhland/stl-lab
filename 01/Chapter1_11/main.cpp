#include <stdio.h>
class A{
	static int i;  //声明为静态变量
	static int j;
	int k;
public:
	A(int k_){k=k_;}
	static void setj(int j_);
	static void print_static();
	void print();
};

int A::i=10;  //直接定义静态成员变量

int A::j;  //必须先定义,再用函数初始化
void A::setj(int j_){
	j=j_;
}

void A::print_static(){
	printf("静态成员变量i和j值为%d和%d\n", i, j);
}

void A::print(){
	printf("成员变量k的值为%d\n", k);
}

int main(void){
	A::setj(20);
	A a(3); 
 	A::print_static(); //也可使用a.print_static()形式
	a.print(); 
	return 0;
}




