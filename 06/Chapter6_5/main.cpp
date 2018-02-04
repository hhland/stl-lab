#include <vector>
#include <iostream>
int main(void){
	using namespace std;    
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(5);
	v.push_back(7);
	v.push_back(9);
	vector<int>::reverse_iterator ri,riend;
	riend=v.rend();
	for(ri=v.rbegin();ri!=riend;ri++)
		cout << *ri << endl;
	return 0;
}