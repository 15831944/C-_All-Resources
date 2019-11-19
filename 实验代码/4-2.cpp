#include<iostream>
using namespace std;
class BaseClass
{
public:
	int Number;
	BaseClass(){cout<<"BaseClass"<<endl;};
	~BaseClass(){cout<<"~BaseClass"<<endl;};
};
class DerivedClass:public BaseClass
{
public:
	DerivedClass(){cout<<"DerivedClass"<<endl;};
	~DerivedClass(){cout<<"~DerivedClass"<<endl;};
};
int main()
{
	DerivedClass DerivedClass();
	return 0;
 } 
