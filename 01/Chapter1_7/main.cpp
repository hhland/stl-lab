#include <stdio.h>
namespace Myspace{
	int i=1;
	int j=3;
}

int main(void){
	using namespace Myspace;
	i=j+10;
	j=20;
	printf("Myspace定义的变量i的值为%d\n", i);  //打印13
	printf("Myspace定义的变量j的值为%d\n", j);  //打印20
	return 0;
}