#pragma warning(disable: 4786)
#include <map>
#include <iostream>

int main(void){
	using namespace std;
	multimap<float, char*> mm;
	mm.insert(pair<float, char*>(3.0f, "apple"));
	mm.insert(pair<float, char*>(3.0f, "pear"));
	mm.insert(pair<float, char*>(2.6f, "orange"));
	mm.insert(pair<float, char*>(1.8f, "banana"));
	mm.insert(pair<float, char*>(6.3f, "lichee"));
	//±éÀú´òÓ¡
	multimap<float, char*>::iterator i,iend;
	iend=mm.end();
	for(i=mm.begin(); i!=iend; i++)
		cout << (*i).second << ' ' << (*i).first << "Ôª/½ï\n";
	cout << endl;
	return 0;
}