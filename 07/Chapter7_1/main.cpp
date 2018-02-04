#include <deque>
#include <iostream>	

int main(void){
	using namespace std; 
	deque<int> d;
	d.push_back(13);
	d.push_back(32);
	d.push_back(29);
	for(int i=0; i < d.size(); i++)
		cout << "d[" << i << "] = " << d[i] << endl;  
	return 0;
}