#ifndef POINT_H
#define POINT_H

class Point
{
public:
	Point(float xx=0,float yy=0):x(xx),y(yy){}
	float getX() const{return x;}
	float getY() const{return y;}
private:
	float x,y;
};
#endif
