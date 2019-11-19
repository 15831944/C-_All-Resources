#include<iostream>
using namespace std;
class Animal{
public:
	int age;
};
class dog:public Animal{
public:
	void SetAge(int n){
		age=n;
		cout<<"age="<<age<<endl;
	}
};
int main()
{
	dog A;
	A.SetAge(1);
	return 0;
}
