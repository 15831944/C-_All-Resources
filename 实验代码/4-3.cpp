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
	cout<<"O�����ʼ����Ϊ:"<<endl;
	p.display();
	++p;
	cout<<"�������궼������O������:"<<endl;
	p.display();
	p++;
	cout<<"���������������O������:"<<endl;
	p.display();
	--p;
	cout<<"�������궼�Լ���O������:"<<endl;
	p.display();
	p;
	cout<<"�����Լ��������O������:"<<endl;
	p.display();
}
