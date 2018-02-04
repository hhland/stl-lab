#include <stdio.h>
//类模板A
template <class T>
class A{
	  T i;
public:
	  A(T t){ i=t; }
	  T compute(){ return i*i; }
};

//类模板A的完全特化
template<> class A<int>{
	  int i;
	  int k;  //添加新数据成员
public:
	  A(int t){ i=t; printf("hello\n");}  //添加打印
	  int compute(){ return i*i*i; }  //改为立方计算
	  void f(){} //添加新成员函数
};

int main(void){
	  A<double> dObj(2.5);
	  A<int> iObj(5); //打印hello
	  printf("%f\n", dObj.compute());  //平方计算6.25
	  printf("%d\n", iObj.compute());  //立方计算125
	  return 0;
}
