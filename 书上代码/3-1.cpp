#include<iostream>
using namespace std;
//����x��n�η�
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
 	//������Ϊһ�����ʽ�������������� 
 	return 0;
 }
