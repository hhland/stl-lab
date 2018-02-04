#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

//µÈ²îÊıÁĞan+1=an + 3
class sequence{
public:
	int a;
	sequence(){a=0;}
	inline int operator()(){
		a=a + 3;
		return a;
	}
};

void print(int x){
	cout << x << endl;
}

int main(void){
	vector<int> v(10);
	sequence an;
	generate(v.begin(), v.end(), an);
	for_each(v.begin(), v.end(), print);
	cout << endl; 
	return 0;
}
