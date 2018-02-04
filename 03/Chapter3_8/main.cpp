#include <fstream>
#include <iostream>
using namespace std;
  
int main(void){
	fstream rwFileStream;
	rwFileStream.open("d:\\digit.txt", ios::in|ios::out|ios::binary|ios::trunc);
	if(!rwFileStream){
		cout << "打开文件失败" << endl;
		return 1;
	}
	for(char i=0; i<26; i++)
		rwFileStream << char('a'+i);  //写入26个字母
	//
	rwFileStream.seekg(3, ios::beg);  //定位到第3个字母处(从0索引)
	char c;
	rwFileStream.get(c);
	cout << c << endl;    //打印出字符d
	rwFileStream.close();
	return 0;
}
