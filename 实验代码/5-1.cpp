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
	cout<<"��һ������Ϊ:";
	cout<<c1<<endl;
	cout<<"�ڶ�������Ϊ:";
	cout<<c2<<endl;
	cout<<"����������Ϊ:";
	cout<<c<<endl;
	c3=c1+c2;
	cout<<"�����������Ӻ������Ϊ:";
	cout<<c3<<endl;
	c3=c1-c2;
	cout<<"�������������������Ϊ:";
	cout<<c3<<endl;
	c3==c1;
	cout<<"��������ظ�ֵ�������Ϊ:";
	cout<<c3<<endl;
	cout<<"Point������<<������������Ϊ:";
	cout<<c<<endl;
	return 0; 
}
