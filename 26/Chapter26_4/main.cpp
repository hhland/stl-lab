#include <iterator>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	vector<int> v;
	back_insert_iterator<vector<int> > bii(v);
	*bii++=3;
	*bii++=9;
	*bii++=12;
	*bii++=16;
	*bii++=18;
	//
	reverse_iterator<vector<int>::iterator, int> rfirst(v.end());
	reverse_iterator<vector<int>::iterator, int> rend(v.begin());
	copy(rfirst, rend, ostream_iterator<int>(cout, " "));
	cout << endl;
	return 0;
}