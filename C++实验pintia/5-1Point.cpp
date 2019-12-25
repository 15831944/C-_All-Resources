#include <iostream>
using namespace std;
class Point
{
	int x,y;
public:
	Point(int x,int y):x(x),y(y){

	}
	Point operator + (Point p2){
		return Point(x+p2.x,y+p2.y);
	}
	Point operator - (Point p2){
		return Point(x-p2.x,y-p2.y);
	}
	Point & operator += (Point p2){
		x += p2.x;
		y += p2.y;
		return *this;
	}
	bool operator == (Point p2){
		return x==p2.x && y==p2.y;
	}
	friend ostream& operator << (ostream &os, Point & p);
	~Point(){

	}
	
};
ostream& operator << (ostream &os, Point & p){
	os<<p.x<<","<<p.y;
}
int main(int argc, char const *argv[])
{
	Point p1(2,3);
	cout<<p1<<endl;
	Point p2(4,5);
	cout<<p2<<endl;
	Point p3 = p1+p2;	
	cout<<p3<<endl;
	p3 = p2-p1;
	cout<<p3<<endl;
	p1 += p2;
	cout<<p1<<endl;
	cout<<(p1==p2)<<endl;
	return 0;
}
