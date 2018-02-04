#include <set>
#include <iostream>
//学生结构体	
struct Student{
	char* name;
	int year;
	char* addr;
};
//比较函数
struct StudentLess{
	bool operator()(const Student& s1, const Student& s2) const 
	{
		return s1.year < s2.year;  //比较学生年龄
	}
};
int main(void){
	using namespace std;
	//学生数据
	Student stuArray[] = {
		{ "李强", 21, "北京" },
		{ "王文", 22, "浙江" },
		{ "张天", 21, "上海" },
		{ "丁宏", 23, "深圳" },
		{ "赵庆", 30, "天津" }
	};
	//创建multiset对象ms
	multiset<Student, StudentLess> ms(stuArray, stuArray +5 , StudentLess());
	//统计
	cout << "学生人数: " << ms.size() << endl << endl;
	cout << "年龄为21岁的学生人数: " << ms.count(stuArray[0]) << endl << endl;
	//打印元素
	multiset<Student>::iterator i,iend;
	iend=ms.end();
	cout << "姓名	" << "年龄	" << "地址\n";
	for(i=ms.begin(); i!=iend; i++)
		cout << (*i).name <<'	' << (*i).year << '	' << (*i).addr << endl;
	cout << endl;
	return 0;
}