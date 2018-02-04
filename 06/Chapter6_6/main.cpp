#include <vector>
#include <iostream>
using namespace std;
void print(vector<int>& v);

int main(void){
	//v1
	vector<int> v1;  
	v1.push_back(11);
	v1.push_back(12);
	v1.push_back(13);
	cout << "v1 = ";
	print(v1);
	//v2
	vector<int> v2;
	v2.push_back(90);
	v2.push_back(92);
	cout << "v2 = ";
	print(v2);
	//v1与v2交换
	v1.swap(v2);
	cout << "v1与v2交换后" <<endl;
	cout << "v1 = ";
	print(v1);
	cout << "v2 = ";
	print(v2);
	return 0;
}

void print(vector<int>& v){
	for(int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}
