#include <iterator>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	//源文件的输入流
	ifstream rFileStream;
	rFileStream.open("d:\\水果.txt", ios::in);
	if(!rFileStream){
		cout << "打开文件失败\n";
		return 1;
	}
	rFileStream >> noskipws;  //读入空格
	//目标文件的输出流
	ofstream wFileStream;
	wFileStream.open("d:\\水果2.txt", ios::out);
	if(!wFileStream){
		cout << "打开文件失败\n";
		return 1;
	}
	//copy算法使用输入流迭代器进行文件复制
	istream_iterator<char> iter_iFile(rFileStream);
	ostream_iterator<char> iter_oFile(wFileStream);
	copy(iter_iFile, istream_iterator<char>(), iter_oFile);
	rFileStream.close();
	wFileStream.close();
	return 0;
}