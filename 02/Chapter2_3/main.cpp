#include <stdio.h>
#include <typeinfo.h>
template <class T1, class T2>
class A{
	T1 i;
	T2 j;
public:
	A(T1 t1, T2 t2){i=t1; j=t2;}
	bool comp(){return i > j;}
	void print_Type();
};

template <class T1, class T2>
void A<T1, T2>::print_Type(){
	printf("i的类型是%s\n", typeid(i).name());
	printf("j的类型是%s\n", typeid(j).name());
}

int main(void){
	A<int, double> a(3, 67.8);
	if(a.comp())
		printf("i>j \n");
	else printf("i<=j \n");
	a.print_Type();
	return 0;
}