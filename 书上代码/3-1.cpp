#include<iostream>
using namespace std;
//计算x的n次方
double power(double x,int n)
{
	double val=1.0;
	while(n--)
		val*=x;
	return val;
 } 
 int main()
 {
 	int x,n;
 	cin>>x>>n;
 	cout<<x<<" to the power "<<n<<" is "<<power(x,n)<<endl;
 	//函数作为一个表达式出现在输出语句中 
 	return 0;
 }
