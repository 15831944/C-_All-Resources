#include<iostream>
#include<iomanip>
using namespace std;
class FIDDLE{
	public:
		FIDDLE(int xx=0,int yy=0)//构造函数
		{
			x=xx;
			y=yy;
		} 
		FIDDLE(FIDDLE &f);//复制构造函数
		int getX(){
			return x;
		} 
		int getY(){
			return y;
		} 
		private:
			int x,y;
};
FIDDLE::FIDDLE(FIDDLE &f)
{
	x=f.x;
	y=f.y;
	cout<<"Calling the copy constructor"<<endl;
} 
void fiddle(int a,int &b)
{
	a=a+100;
	b=b=100;
	cout<<"the values:";
	cout<<setw(5)<<a;
	cout<<setw(5)<<b<<endl;
}
int main()
{
	int a,b;
	cout<<"输入两个数:";
	cin>>a>>b;
	cout<<"a="<<a<<"   "<<"b="<<b<<endl;
	cout<<"the values:";
	cout<<setw(5)<<a;
	cout<<setw(5)<<b<<endl;
	fiddle(a,b);
	cout<<"the values:";
	cout<<setw(5)<<a;
	cout<<setw(5)<<b<<endl;
	FIDDLE c(a,b);
	FIDDLE d(c);
	cout<<d.getX()<<"  "<<d.getY()<<endl;
	return 0;
}

