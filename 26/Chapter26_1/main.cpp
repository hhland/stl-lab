#include <iterator>
#include <deque>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	deque<int> d;
	d.push_back(12);
	d.push_back(13);
	//
	front_insert_iterator<deque<int> > fii(d);
	*fii++=11;
	*fii++=10;
	*fii++=9;
	//
	copy(d.begin(), d.end(), ostream_iterator<int>(cout, "  "));
	cout << endl;
	return 0;
}
