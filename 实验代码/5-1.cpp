 #include<iostream>
using namespace std;

class Point{
private:
	int x,y;
public:
	Point(int x=0,int y=0):x(x),y(y){}
	Point operator+(const Point &c2) const;
	Point operator-(const Point &c2) const;
	Point operator==(const Point &c2) const;
	void display() const;
	friend Point operator+(Point &c1,Point &c2);
	friend Point operator-(Point &c1,Point &c2);
	friend Point operator==(Point &c1,Point &c2);
	friend ostream &operator<<(ostream &out,const Point &c);
};
Point Point::operator+(const Point &c2) const{
	return Point(x+c2.x,y+c2.y);
}
Point Point::operator-(const Point &c2) const{
	return Point(x-c2.x,y-c2.y);
}
Point Point::operator==(const Point &c2) const{
	return Point(x==c2.x,y==c2.y);
}
Point operator+(Point &c1,Point &c2){
	return Point(c1.x+c2.x,c1.y+c2.y);
}
Point operator-(Point &c1,Point &c2){
	return Point(c1.x-c2.x,c1.y-c2.y);
}
Point operator==(Point &c1,Point &c2){
	return Point(c1.x=c2.x,c1.y=c2.y);
}
ostream &operator<<(ostream &out,const Point &c){
	out<<"("<<c.x<<","<<c.y<<")"<<endl;
	return out;
}
int main(){
	Point c1(2,10),c2(3,5),c(1,2),c3;
	cout<<"第一个坐标为:";
	cout<<c1<<endl;
	cout<<"第二个坐标为:";
	cout<<c2<<endl;
	cout<<"第三个坐标为:";
	cout<<c<<endl;
	c3=c1+c2;
	cout<<"运算符重载相加后的坐标为:";
	cout<<c3<<endl;
	c3=c1-c2;
	cout<<"运算符重载相减后的坐标为:";
	cout<<c3<<endl;
	c3==c1;
	cout<<"运算符重载赋值后的坐标为:";
	cout<<c3<<endl;
	cout<<"Point类重载<<运算符后的坐标为:";
	cout<<c<<endl;
	return 0; 
}
