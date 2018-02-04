#include <vector>
#include <iostream>

int main(void){
	using namespace std;
	//初始化bv1
	bit_vector bv1;
	bv1.push_back(true);
	bv1.push_back(false);
	bv1.push_back(false);
	//初始化bv2
	bit_vector bv2(7);  //注意,不是bv2[7]
	bv2[0] = true;
	bv2[1] = false;
	bv2[2] = true;
	bv2[3] = true;
	bv2[4] = false;
	bv2[5] = true;
	bv2[6] = false;
	//打印bv1的各个bit
	bit_vector::iterator i,iend;
	iend = bv1.end();
	cout << "bv1的bit位: ";
	for(i=bv1.begin(); i!=iend; i++)
		cout << (*i ? '1':'0') << ' ';  //打印1 0 0
	cout << endl;
	//打印bv2的各个bit
	cout << "bv2的bit位: ";
	for(unsigned int j=0; j < bv2.size(); j++)
		cout << bv2[j] << ' ';
	cout << endl;
	return 0;
}