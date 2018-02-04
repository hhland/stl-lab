#include <hash_map>
#include <iostream>

template<class Key, class NameType, class YearType, class AddrType>
struct StudentRecord_tag{    //学生记录结构体
	struct StudentInfo_tag{  //学生信息结构体
		NameType name;
		YearType year;
		AddrType addr;
	};
	//提供类型信息
	typedef Key IdType;
	typedef StudentInfo_tag StudentInfo;
	//数据成员
	IdType id;              //学号,键值
	StudentInfo sf;         //学生信息,作映照数据
};

int main(void){
	  using namespace std;
	  typedef StudentRecord_tag<int, char*, int, char*> StudentRecord;
	  //学生数据
	  StudentRecord srArray[] = {  //3笔学生记录
				{ 192, "李强", 21, "北京" },
				{ 193, "王文", 29, "上海" },
				{ 191, "张三", 38, "深圳" }
	  };
	  //创建hash_map容器对象hm,管理学生记录
	  hash_map<StudentRecord::IdType, StudentRecord::StudentInfo> hm;
	  //装入3笔学生记录
	  for(int j=0; j<3; j++)
		hm[srArray[j].id]=srArray[j].sf;
	  //迭代器遍历元素
	  hash_map<StudentRecord::IdType, StudentRecord::StudentInfo>::iterator i,iend;
	  iend=hm.end();
	  cout << "学号	" << "姓名	" << "年龄	" << "地址	" << endl;  //Tab键分隔
	  for(i=hm.begin(); i!=iend; i++)
		cout << (*i).first << '	'
			 << (*i).second.name << '	'
		     << (*i).second.year << '	'
			<< (*i).second.addr << '	'
			<< endl;
	  return 0;
}
