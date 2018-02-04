#include <stdio.h>
class B;
class A{
	int i;
public:
	A(int i_){i=i_;}
	friend bool operator>(A& a, B& b);
};

class B{
	double d;
public:
	B(double d_){d=d_;}
	friend bool operator>(A& a, B& b);
};

bool operator>(A& a, B& b){
	return a.i > b.d;
}

int main(void){
	A a(19);
	B b(13.2);
	if(a>b) printf("a>b \n");
	else printf("a<=b \n");
	return 0;
}
