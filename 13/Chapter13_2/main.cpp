#include <map>
#include <iostream>

struct StudentInfo{  //学生信息结构体
	  char* name;
	  int year;
	  char* addr;
};

struct StudentRecord{        //学生记录结构体
	int id;                  //学号,作键值
	StudentInfo sf;          //学生信息,作映照数据
};

int main(void){
	using namespace std;
	//学生数据
	StudentRecord srArray[] = {  //3笔学生记录
				{ 1, "李强", 21, "北京" },
				{ 2, "王文", 29, "上海" },
				{ 3, "张三", 38, "深圳" }
	};
	//创建map容器对象m,管理学生记录
	map<int, StudentInfo> m;
	//装入3笔学生记录
	for(int j=0; j<3; j++)
		m[srArray[j].id]=srArray[j].sf;
	//反向迭代器遍历元素
	map<int, StudentInfo>::reverse_iterator i,iend;
	iend=m.rend();
	cout << "学号	" << "姓名	" << "年龄	" << "地址	" << endl;
	for(i=m.rbegin(); i!=iend; i++)
		cout << (*i).first << '	'
			 << (*i).second.name << '	'
		     << (*i).second.year << '	'
			 << (*i).second.addr << '	'
			 << endl; 
	return 0;
}