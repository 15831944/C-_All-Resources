#include<iostream>
using namespace std;
template<class T>
T myMax(T x,T y){
	return x>y?x:y;
}
int main(int argc, char const *argv[])
{
	cout<<myMax(4,5)<<endl;
	string a="ab", b="de";
	cout<<myMax(a,b)<<endl;
	return 0;
}
