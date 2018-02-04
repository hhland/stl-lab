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
	//反向遍历打印
	multimap<float, char*>::reverse_iterator r_i,r_iend;
	r_iend=mm.rend();
	for(r_i=mm.rbegin(); r_i!=r_iend; r_i++) 
		cout << (*r_i).second << ' ' << (*r_i).first << "元/斤\n";
	return 0;
}