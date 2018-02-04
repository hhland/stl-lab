#pragma warning (disable:4786)
#include <algorithm>
#include <map>
#include <iostream>
using namespace std;

struct StudentRecord{
	struct StudentInfo{
		char* name;
		int year;
		char* addr;
	};
	int id;  //学号
	StudentInfo sf; //学生信息
	StudentRecord(int id_, char* name_, int year_, char* addr_){
		id=id_;
		sf.name=name_;
		sf.year=year_;
		sf.addr=addr_;
	}
};

bool setRange20_30(pair<int, StudentRecord::StudentInfo>  s){  // 20< x <30
	if( s.second.year > 20 && s.second.year < 30) return 1;
	return 0;
}
	

int main(void){
	//学生数据
	StudentRecord st1=StudentRecord(1, "李强", 21, "北京");
	StudentRecord st2=StudentRecord(2, "李文", 29, "上海");
	StudentRecord st3=StudentRecord(3, "敦介", 12, "浙江");
	StudentRecord st4=StudentRecord(4, "王强", 23, "山东");
	StudentRecord st5=StudentRecord(5, "王文", 31, "江苏");
	//映照容器
	map<int, StudentRecord::StudentInfo> m;
	//插入5条学生记录
	pair<int, StudentRecord::StudentInfo> pairSt1(st1.id, st1.sf);
	m.insert(pairSt1);
	pair<int, StudentRecord::StudentInfo> pairSt2(st2.id, st2.sf);
	m.insert(pairSt2);
	pair<int, StudentRecord::StudentInfo> pairSt3(st3.id, st3.sf);
	m.insert(pairSt3);
	pair<int, StudentRecord::StudentInfo> pairSt4(st4.id, st4.sf);
	m.insert(pairSt4);
	pair<int, StudentRecord::StudentInfo> pairSt5(st5.id, st5.sf);
	m.insert(pairSt5);
	//条件统计
	int num=0;
	num=count_if(m.begin(), m.end(), setRange20_30);
	cout << "年龄介于20至30岁之间的学生人数为: " 
		 << num << endl;  //打印3
	return 0;
}