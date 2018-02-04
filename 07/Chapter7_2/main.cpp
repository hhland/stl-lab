#pragma warning(disable:4786)
#include <deque>
#include <string>
#include <iostream>

int main(void){    
	using namespace std;
	deque<string> d;
	d.push_back("±±¾©");
	d.push_back("2008");
	d.push_back("°ÂÔË");
	deque<string>::iterator i,iend;
	iend=d.end();
	int j;
	for(i=d.begin(), j=0; i!=iend; i++,j++)
		cout << *i ;
	cout << endl;
	return 0;
} 