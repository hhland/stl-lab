#include <stdio.h>
namespace NS1{
	  int a=1;
}
namespace NS2{
	  int a=8;
}
int main(void){
	  printf("NS1名字空间定义的a值为%d\n", NS1::a);  //打印a=1
	  printf("NS2名字空间定义的a值为%d\n", NS2::a);  //打印a=8
	  return 0;
}
