#include <map>
#include <iostream>

struct StudentRecord{  //学生记录结构体
	struct StudentInfo{
		char* name;
		int year;
		char* addr;
	};
	StudentRecord(int id_, char* name_, int year_, char* addr_){
		id=id_;
		sf.name=name_;
		sf.year=year_;
		sf.addr=addr_;
	}
	int id;           //学号,作键值
	StudentInfo sf;   //其他信息
};

int main(void){
	using namespace std;
	//创建map容器对象m
	typedef map<int, StudentRecord::StudentInfo> studentmap;
	studentmap m;
	pair<studentmap::iterator, bool > p;
	//插入第一条学生记录
	StudentRecord student1=StudentRecord(1, "焦焦", 21, "北京");
	pair<int, StudentRecord::StudentInfo> pairStudent1(student1.id, student1.sf);
	p=m.insert(pairStudent1);
	if(!p.second)
		cout << "插入学生记录失败:\n" 
				<< student1.id << '	'
				<< student1.sf.name << '	'
				<< student1.sf.year << '	'
				<< student1.sf.addr << '	'
				<< endl << endl;
	//插入第二条学生记录
	StudentRecord student2=StudentRecord(2, "敦介", 18, "上海");
	pair<int, StudentRecord::StudentInfo> pairStudent2(student2.id, student2.sf);
	p=m.insert(pairStudent2);
	if(!p.second)
		cout << "插入学生记录失败:\n" 
				<< student2.id << '	'
				<< student2.sf.name << '	'
				<< student2.sf.year << '	'
				<< student2.sf.addr << '	'
				<< endl << endl;
	//插入第三条学生记录
	StudentRecord student3=StudentRecord(3, "译尹", 20, "深圳");
	pair<int, StudentRecord::StudentInfo> pairStudent3(student3.id, student3.sf);
	p=m.insert(pairStudent3);
	if(!p.second)
		cout << "插入学生记录失败:\n" 
				<< student3.id << '	'
				<< student3.sf.name << '	'
				<< student3.sf.year << '	'
				<< student3.sf.addr << '	'
				<< endl << endl;
	//插入键值重复的学生记录,失败
	StudentRecord student4=StudentRecord(3, "李强", 26, "天津");
	pair<int, StudentRecord::StudentInfo> pairStudent4(student4.id, student4.sf);
	p=m.insert(pairStudent4);
	if(!p.second)
		cout << "插入学生记录失败:\n" 
				<< student4.id << '	'
				<< student4.sf.name << '	'
				<< student4.sf.year << '	'
				<< student4.sf.addr << '	'
				<< endl << endl;
	//记录搜索
	studentmap::iterator i=m.find(2);
	cout << "搜索出学号为2的记录:\n"
			<< (*i).first << '	'
			<< (*i).second.name << '	'
			<< (*i).second.year << '	'
			<< (*i).second.addr << '	'
			<< endl << endl;
	return 0;
}