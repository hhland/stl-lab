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
	//读文件
	char eName[10], cName[10];
	rFileStream >> eName >> cName;
	cout << eName << ' ' << cName << endl;
	rFileStream >> eName >> cName;
	cout << eName << ' ' << cName << endl;
	rFileStream >> eName >> cName;
	cout << eName << ' ' << cName << endl;
	rFileStream.close();
	return 0;
}