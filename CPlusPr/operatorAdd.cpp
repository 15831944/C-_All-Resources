/* Note:Your choice is C IDE */
#include <iostream>
using namespace std;
class Point{
int x,  y;
public:
Point(int x1,int y1):x(x1),y(y1){}
Point operator ++();
Point operator ++(int);	
friend ostream& operator <<(ostream& out,Point &p);
};
Point Point::operator++()
{
	 (*this)++;
	 return *this;
}
Point Point::operator++(int)
{
	Point tem(*this);
	x++;
	y++;
	return tem;
}
ostream& operator <<(ostream& out,Point &p)
{
	cout<<p.x<<","<<p.y;
	return out;
}
void main()
{
   Point p(1,2);   cout<<p<<endl;
   cout<<p++<<endl;
   cout<<p<<endl;
   cout<<++p<<endl;
   cout<<p<<endl;   
}