#include <hash_set>
#include <iostream>

struct strequal{
  bool operator()(const char* s1, const char* s2) const  {
    return strcmp(s1, s2) == 0;
  }
};

int main(void){
	using namespace std;
	hash_set<char*, hash<char*>, strequal> hs;
	hs.insert("apple");
	hs.insert("pear");
	hs.insert("banana");
	hs.insert("lichee");
	hs.insert("orange");
	//
	hash_set<char*, hash<char*>, strequal>::iterator i;
	i=hs.find("banana");
	cout << "查找的水果名称是:" << *i << endl; 
	return 0;
}
