#include<iostream>
#include<iomanip>
using namespace std;
void fiddle(int a,int &b)
{
	a=a+100;
	b=b=100;
	cout<<"the values:";
	cout<<setw(5)<<a;
	cout<<setw(5)<<b<<endl;
}
int main(){
	int a,b;
	cout<<"������������";
	cin>>a>>b;
	cout<<"a="<<a<<"  "<<"b="<<b<<endl;
	cout<<"the values:";
	cout<<setw(5)<<a;
	cout<<setw(5)<<b<<endl;
	fiddle(a,b);
	cout<<"the values:";
	cout<<setw(5)<<a;
	cout<<setw(5)<<b<<endl;
	return 0;
}

