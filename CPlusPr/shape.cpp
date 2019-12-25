#include <iostream>
#include <cmath>
using namespace std;
class shape{
private:
	int x,y;
public:
	shape(int x,int y):x(x),y(y){}
	virtual float GetArea() = 0;
	friend float Distance(shape &s1,shape &s2);
};
class circle: public shape{
private:
	int r;
public:
	circle(int x,int y,int r):shape(x,y),r(r){}
	float GetArea(){ return 3.14*r*r; }	
};

class rectangle: public shape{
private:
	int w,h;
public:
	rectangle(int x,int y,int w,int h):shape(x,y),w(w),h(h) {}
	float GetArea(){ return w*h; }
};
float Distance (shape &s1,shape &s2)
{
	float x = s1.x-s2.x;
	float y = s1.y-s2.y;
	return sqrt( x*x+y*y );
}
void main()
{
	rectangle r(100,100,10,10);
	circle c(105,105,5);
	circle c1(106,106,5);
	cout<< r.GetArea()<<endl;
	cout<< c.GetArea()<<endl;
	cout<< Distance(r,c)<<endl;
	cout<< Distance(c1,c)<<endl;
}