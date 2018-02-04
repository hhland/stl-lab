#include <set>
#include <iostream>
int main(void){
	using namespace std;
	multiset<int> ms;
	ms.insert(10);
	ms.insert(13);
	ms.insert(11);
	ms.insert(19);
	ms.insert(13);
	ms.insert(19);
	ms.insert(19); 
	//打印数据
	multiset<int>::iterator i, iend;
	iend=ms.end();
	for(i=ms.begin(); i!=iend; i++) //打印出10 11 13 13 19 19 19
		cout << *i << ' ';
	cout << endl;
	return 0;
}
