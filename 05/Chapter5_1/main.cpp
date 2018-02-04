#include <algorithm>
#include <iostream>
int main(void){  
	  using namespace std;
	  double a[8]={0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0}; //8个元素的数组
	  double val=3.0;
	  double* result=find(a,a+8,val);  //等价于find(&a[0],&a[7]+1,val)
	  if(result==a+8)
		cout<<"数组没有一个元素的值等于"<< val << endl;
	  else
		cout<<"数组有一个元素值等于"<< val << endl;
	  return 0;
}
