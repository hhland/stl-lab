#include <vector>
#include <iostream>
int main(void){
	using namespace std;
	vector<int> v;
	v.push_back(20);
	v.push_back(26);   
	v.push_back(39);
	for(int i = 0; i < v.size(); i++)
	cout << "v[" << i << "] = " << v[i] << endl;
	return 0;
}
