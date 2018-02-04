#include <list>
#include <iostream>
struct student{  
	char* name;
	int age;
	char* city;
	char* tel;
};
 

int main(void){
	student s[] = {
		{"符符", 18, "北京市", "67111111"},
		{"介介", 30, "上海市", "33939393"},
		{"贝贝", 23, "深圳市", "88883333"}
	};

	using namespace std;
	list<student> l;
	l.push_back(s[0]);
	l.push_back(s[1]);
	l.push_back(s[2]);

	list<student>::iterator i,iend;
	iend=l.end();
	cout << "姓名	年龄	城市	电话" << endl;
	cout << "----------------------------------" << endl;
	for(i=l.begin(); i!=iend; i++){
		cout << (*i).name << "	";
		cout << (*i).age <<	"	";
		cout << (*i).city << "	";
		cout << (*i).tel <<"	"<< endl;
	}
	cout << "----------------------------------" << endl<< endl;
	return 0;
}