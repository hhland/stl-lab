#include <iterator>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	vector<int> v;
	v.push_back(3);
	v.push_back(9);
	v.push_back(12);
	v.push_back(16);
	v.push_back(18);
	//vectorÔªËØ´òÓ¡
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, "  "));
	cout << endl;
	return 0;
}
