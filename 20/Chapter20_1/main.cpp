#include <queue>
#include <iostream>

int main(void){
	using namespace std;
	priority_queue<int> pq;
	pq.push(7);
	pq.push(19);
	pq.push(33);
	pq.push(26);
	pq.push(29);
	while(!pq.empty()){
		cout << pq.top() << endl; //´òÓ¡³ö33 29 26 19 7
		pq.pop();
	}
	return 0;
}