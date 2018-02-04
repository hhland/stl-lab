#include <stdio.h>
class B;
class A{
	bool bfinish;
	friend bool check(A a, B b); //声明check为类A的友员函数
public:
	A(bool b){bfinish=true;}
};
class B{
	bool bfinish;
	friend bool check(A a, B b);  //声明check为类B的友员函数
public:
	B(bool b){bfinish=b;}
};

bool check(A a, B b){  //定义友员函数
	if(a.bfinish && b.bfinish) return true;
	else return false;
}

int main(void){
	A a(true);
	B b(false);
	if(check(a, b)) printf("bfinish都是true\n"); //调用友员函数
	else printf("bfinish不都是true\n");
	return 0;
}
