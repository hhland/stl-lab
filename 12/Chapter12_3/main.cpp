#include <set>
#include <iostream>
int main(void){
	  using namespace std;
	  multiset<int> ms;
	  ms.insert(10);
	  ms.insert(13);  //
	  ms.insert(11);
	  ms.insert(19);
	  ms.insert(13);  //
	  ms.insert(16);
	  ms.insert(13);  //
	  ms.insert(17);
	  //find搜索元素13
	  int v=19;
	  multiset<int>::iterator i_v = ms.find(v);
	  cout << *i_v << endl;
	  //equal_range搜索元素13
	  v=13;
	  pair<multiset<int>::iterator, multiset<int>::iterator> p=ms.equal_range(v);
	  cout << "大于等于" << v <<"的第一个元素为(x≥k)为 " << *p.first << endl;
	  cout << "大于" << v << "的第一个元素(x>k)为 " << *p.second << endl;
	  //打印重复键值元素13
	  multiset<int>::iterator i;
	  cout << "键值为" << v << "的所有元素为 ";
	  for(i=p.first; i!=p.second; i++)  //打印出13 13 13 
		  cout << *i << ' ';
	  cout << "\n\n\n";
	  return 0;
}
