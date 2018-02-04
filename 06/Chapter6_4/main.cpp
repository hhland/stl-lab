#include <iostream>
#include <vector>

class MyAnimal{
public:
	char* name;  
	int age;
public:
	MyAnimal(char* name,int age){
		this->name=name;
		this->age=age;
	}
	~MyAnimal(){}
};

int main(void){
	using namespace std;
	MyAnimal* pDog=new MyAnimal("dog",1);
	MyAnimal* pMonkey=new MyAnimal("monkey",2);
	MyAnimal* pChicken=new MyAnimal("chicken",3);
	MyAnimal* pSnake=new MyAnimal("snake",4);

	vector<MyAnimal*> v;  //v将存放各对象的地址
	v.push_back(pDog);
	v.push_back(pMonkey);
	v.push_back(pChicken);
	v.push_back(pSnake);

	delete pMonkey;        //物理删除pMonkey所指的对象
	v.erase(v.begin()+1);  //删除第2个元素,即抹去了vector的pMonkey地址
	vector<MyAnimal*>::iterator i,iend;
	iend=v.end();
	for(i=v.begin();i!=iend;i++)
		cout << (*i)->name <<' ' << (*i)->age << endl;
	v.clear();  //清除所有vector元素
	cout << "执行clear()" << endl << "vector元素已全部清除" << endl;
	return 0;
}