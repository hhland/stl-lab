#include <iostream>
#include <algorithm>
using namespace std;

struct print{  
	void operator()(int x){cout <<x <<' ';}
};

int main()
{
	int a[]={68, 1, 17, 6, 3, 31, 6, 5, 30};
	const int length = sizeof(a) / sizeof(int);
	//对每个数组元素进行打印
	for_each(a, a+length, print());
	cout << endl;
	return 0;
}
