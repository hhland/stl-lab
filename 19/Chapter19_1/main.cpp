#include <queue>
#include <iostream>

int main(void){
	using namespace std;
	//创建queue对象
	queue<int> q;
	//元素入队
	q.push(3);
	q.push(19);
	q.push(29);
	q.push(26);
	q.push(33);
	//元素出队
	while(!q.empty()) {
		cout << q.front() << endl;  //打印队首元素(取队首)
		q.pop(); //删除队首元素
	}
	return 0;
}