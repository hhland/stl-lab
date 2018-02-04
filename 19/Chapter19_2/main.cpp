#include <queue>
#include <list>
#include <iostream>
#define QUEUE_SIZE 50

int main(void){
	using namespace std;
	//用双向链表做queue队列的底层容器
	queue<int, list<int> > q;
	if(q.size() < QUEUE_SIZE)
		q.push(51);
	if(q.size() < QUEUE_SIZE)
		q.push(36);
	if(q.size() < QUEUE_SIZE)
		q.push(28);
	//元素出队
	while(!q.empty()){
		cout << q.front() << endl;  //打印51 36 28
		q.pop();  //出队
	}
	return 0;
}