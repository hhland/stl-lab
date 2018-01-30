#include <memory>
#include <iostream>
using namespace std;

class A{
public:
	A(int i_):i(i_){}
	operator int() const { return i; }  //转换为int打印
private:
	int i;
};

int main(void){
	//分配10个对象空间
	allocator<A> alloc;
	A* p=alloc.allocate(10);  
	//用原始存储迭代器赋值
	int i;
	raw_storage_iterator<A*, A> rsi(p);
	for(i=0; i<10; i++)
		*rsi++=A(i);
	//打印
	for(i=0; i<10; i++)
		cout << static_cast<int>(*p++) << " ";
	//释放空间
	alloc.deallocate(p, 10);  
	return 0;
}


 
