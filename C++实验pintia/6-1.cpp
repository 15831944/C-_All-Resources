#include <iostream>
#include <string>
using namespace std;
template <typename T>
T myMax(T a,T b){
	if(a>b)
		return a;
	else
		return b;
}
int main(int argc, char const *argv[])
{
	cout<<myMax(4,5)<<endl;
	string a="ab", b="de";
	cout<<myMax(a,b)<<endl;
	return 0;
}
