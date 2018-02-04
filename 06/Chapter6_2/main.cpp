#include <vector>
#include <iostream>
int main(void){
	using namespace std;
	vector<int> v;
	v.push_back(20);
	v.push_back(26);
	v.push_back(39);
	vector<int>::iterator i,iend;
	iend=v.end();
	int j;
	for(i=v.begin(),j=0; i!=iend; i++,j++)    
		cout<<"v[" << j << "] = " << *i<< endl;
	return 0;
}