#pragma warning(disable: 4786)
#include <map>
#include <iostream>

struct CourseRecord{  //课程记录结构体
	struct CourseInfo{    //课程信息结构体
		char* course;        //课程名
		int period;          //学时
		char* required;      //必修或选修
	};
	char* teacher;   //任课教师
	CourseInfo cf;   //课程信息
	CourseRecord(char* teacher_, char* course_, int period_, char* required_){
		teacher=teacher_;
		cf.course=course_;
		cf.period=period_;
		cf.required=required_;
	}
};

int main(void){
	using namespace std;
	//创建multimap容器对象mm
	typedef multimap<char*, CourseRecord::CourseInfo > coursemmap;
	coursemmap mm;
	//插入第1条记录
	CourseRecord course1=CourseRecord("王强", "操作系统开发", 60, "必修");
	pair<char*, CourseRecord::CourseInfo> pairCourse1(course1.teacher, course1.cf);
	mm.insert(pairCourse1);
	//插入第2条记录
	CourseRecord course2=CourseRecord("李文", "编译器开发", 30, "必修");
	pair<char*, CourseRecord::CourseInfo> pairCourse2(course2.teacher, course2.cf);
	mm.insert(pairCourse2);
	//插入第3条记录
	CourseRecord course3=CourseRecord("李文", "数据结构", 20, "必修");
	pair<char*, CourseRecord::CourseInfo> pairCourse3(course3.teacher, course3.cf);
	mm.insert(pairCourse3);
	//插入第4条记录
	CourseRecord course4=CourseRecord("李文", "Java开发应用", 38, "选修");
	pair<char*, CourseRecord::CourseInfo> pairCourse4(course4.teacher, course4.cf);
	mm.insert(pairCourse4);
	//插入第5条记录
	CourseRecord course5=CourseRecord("张键", "pascal语言", 26, "选修");
	pair<char*, CourseRecord::CourseInfo> pairCourse5(course5.teacher, course5.cf);
	mm.insert(pairCourse5);
	//记录搜索
	cout << "搜索<李文老师>的任课记录:\n";
	pair<coursemmap::iterator, coursemmap::iterator> p=mm.equal_range("李文");
	//打印
	coursemmap::iterator i;
	for(i=p.first; i!=p.second; i++)
		cout << (*i).first << '	'
			<< (*i).second.course << '	'
			<< (*i).second.period << "学时   "
			<< (*i).second.required  <<	'	'
			<< endl;
	cout << endl << endl;
	return 0;
}