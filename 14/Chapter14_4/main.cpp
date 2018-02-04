#pragma warning(disable: 4786)
#include <map>
#include <iostream>

int main(void){
	using namespace std;
	multimap<int, char> mm;
	cout << mm.size() << endl;  //´òÓ¡:0
	mm.insert(pair<int, char>(3, 'a'));
	mm.insert(pair<int, char>(3, 'c'));
	mm.insert(pair<int, char>(6, 'f'));
	cout << mm.count(3) << endl; //´òÓ¡:2
	cout << mm.size() << endl;  //´òÓ¡:3
	return 0;
}