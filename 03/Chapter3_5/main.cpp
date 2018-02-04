#include <fstream>
#include <iostream>
using namespace std;
 
int main(void){
	ifstream rFileStream;
	rFileStream.open("d:\\水果.txt", ios::in|ios::binary);
	if(!rFileStream){
		cout << "打开文件失败" << endl;
		return 1;
	}
	char c;
	while(!rFileStream.eof()){
		rFileStream.get(c);
		cout << c;
	}
	rFileStream.close();
	return 0; 
}
