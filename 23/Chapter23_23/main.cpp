#include <algorithm>
#include <iostream>

bool strComp(const char* s1, const char* s2){
  return strcmp(s1, s2) < 0 ? 1 : 0;
}

int main(void){
	using namespace std;
	cout << min((char*)"green", (char*)"girl", strComp) << endl;
	cout << min(100, 30) << endl;
	return 0;
}




