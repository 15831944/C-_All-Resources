#include<iostream>
using namespace std;
class Point{
public:
	Point(int x=0,int y=0):x(x),y(y){
		count++;
	}
	Point(Point &p){
		x=p.x;
		y=p.y;
		count++;
	}
	~Point(){
		count--;
	}
	int getX(){
		return x;
	}
	int getY()
	{
		return y;
	}
	void showCount(){
		cout<<"  Object count="<<count<<endl;
	}
private:
	int x,y;
	static int count;
}; 
int Point::count=0;//静态数据成员定义和初始化，使用类名限定
int main(){
	Point a(4,5);
	cout<<"Point A:"<<a.getX()<<","<<a.getY();
	Point::showCount();//输出对象个数
	Point b(a);//定义对象b，起构造函数会使count增1
	cout<<"Point B:"<<b.getX()<<","<<b.getY();
	Point::showCount();//输出对象个数 
	return 0; 
} 

//与5-4相比，这里只是在类的定义中，讲showCount改写成为静态成员函数.于是在
//主函数中既可以使用类名也可以使用对象名来调用showCount. 
