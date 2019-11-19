//定义Point类，有坐标x,y两个私有成员变量;
//对Point类重载“+”（相加）、“-”（相减）和“==”（相等）运算符，
//实现对坐标的改变，要求用友元函数和成员函数两种方法实现。
//对Point类重载<<运算符，以使得代码 Point p; cout<<p<<endl;
//可以输出该点对象的坐标。 
#include<iostream>
using namespace std;
class Point{
private:
	int x,y;
public:
	Point(int xx,int yy):x(xx),y(yy) {};
	Point() {};
	~Point() {};
	Point operator+(const Point &a){
		Point t;
		t.x=this->x+a.x;
		t.y=this->y+a.y;
		return t;
	}
	Point operator-(const Point &a){
		Point t;
		t.x=this->x-a.x;
		t.y=this->y-a.y;
		return t;
	}
	bool operator==(const Point &a){
		return this->x == a.x && this->y == a.y;
	}
	void operator+=(const Point &a){
		x+=a.x;
		y+=a.y;
	}
	friend ostream &operator<<(ostream &output,const Point &a){
		output<<a.x<<","<<a.y;
		return output;
	}
};

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
