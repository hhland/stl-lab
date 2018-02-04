#include <queue>
#include <iostream>
#define QUEUE_SIZE 50
int main(void){
	  using namespace std;
	  //用双端队列deque做优先队列的底层容器
	  priority_queue<int, deque<int> > pq;
	  if(pq.size() < QUEUE_SIZE)
		pq.push(36);
	  if(pq.size() < QUEUE_SIZE)
		pq.push(51);
	  if(pq.size() < QUEUE_SIZE)
		pq.push(18);
	  //元素出队
	  while(!pq.empty()){
		cout << pq.top() << endl;  //打印51 36 18
		pq.pop();  //出队
	  }
	  return 0;
}
