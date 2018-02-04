#include <iterator>
#include <iostream>
#include <vector>  
 
int main(void){
	using namespace std;
	vector<int> v;
	v.push_back(3);
	v.push_back(6); 
	v.push_back(9);
	reverse_iterator<vector<int>::iterator,int> rfirst(v.end());
	reverse_iterator<vector<int>::iterator,int> rend(v.begin());
	while(rfirst != rend){
		cout << *rfirst << ' ';
		++rfirst;
	}
	return 0;
}