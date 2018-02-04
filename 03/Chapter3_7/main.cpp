#include <fstream>
#include <iostream>
using namespace std;

int main(void){
	ifstream rFileStream;
	rFileStream.open("d:\\水果.txt", ios::in);
	if(!rFileStream){
		cout << "打开文件失败" << endl;
		return 1;
	}
	char str[30];
	rFileStream.getline(str, 30);   
	cout << str;
	rFileStream.close();
	return 0;
}
