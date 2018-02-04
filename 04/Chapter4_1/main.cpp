#pragma warning(disable: 4786)

#include <vector>
#include <iostream>  
#include <string>

int main(void) 
{
	using namespace std;
    vector<string> vec;
    vector<string>::const_iterator i;
    vec.push_back("dog");
    vec.push_back("bird");
    vec.push_back("girl");
    vec.push_back("boy");
    vec.push_back("Hello,there");
    for(i=vec.begin(); i!=vec.end(); ++i){
        cout<<(*i)<<endl;
    }
    return 0;
}
