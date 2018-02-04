#include <stack>
#include <iostream>

int main(void){
	using namespace std;
	//创建堆栈对象
	stack<int> s;
	//元素入栈
	s.push(3);
	s.push(19);
	s.push(23);
	s.push(36);
	s.push(50);
	//元素依次出栈
	while(!s.empty()) {
		cout << s.top() << endl;  //打印栈顶元素
		s.pop();  //出栈
	}
	return 0;
}