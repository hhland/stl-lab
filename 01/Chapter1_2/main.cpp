#include <stdio.h>
int main(void){
	  try{
		int a=0;
		int b=32/a;
	  }
	  catch(...){ //所有异常
		printf("异常发生\n");
	  }
	  return 0; 
}
