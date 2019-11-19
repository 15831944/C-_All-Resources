#include<iostream>
using namespace std;
class point{
private:
	int _x;
	int _y;
public:
	point(int x,int y)
	{
	_x=x;_y=y;
	};
	point &operator++()
	{
	_x++;
	_y++;
	return *this;
	};
	point operator++(int){
		_x++;_y++;
		++(*this);
		return *this;
	};
	point &operator--()
	{
		_x--;
		_y--;
		return *this; 
	};
	point operator--(int)
	{
		_x--;
		_y--;
		--(*this);
		return *this;
	};
	void display()
	{
		cout<<"("<<_x<<","<<_y<<")"<<endl;
	};
};
int main()
{
	point p(0,0);
	cout<<"O点的起始坐标为:"<<endl;
	p.display();
	++p;
	cout<<"横纵坐标都自增后O点坐标:"<<endl;
	p.display();
	p++;
	cout<<"重载自增运算符后O点坐标:"<<endl;
	p.display();
	--p;
	cout<<"横纵坐标都自减后O点坐标:"<<endl;
	p.display();
	p;
	cout<<"重载自减运算符后O点坐标:"<<endl;
	p.display();
}
