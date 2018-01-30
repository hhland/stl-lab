#include <iterator>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std; 

int main(void){
	int iArray1[5]={3, 9, 10, 13, 16};
	int iArray2[8]={1, 7, 11, 20, 33, 38, 39, 46};
	//
	set<int> s;
	merge(iArray1, iArray1 + 5, iArray2, iArray2 + 8, 
		  insert_iterator<set<int> >(s, s.begin()));
	//
	copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	return 0;
}

