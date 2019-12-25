#include <iostream>
using namespace std;
struct Student{
int id;
float height;
};
//结构体把相关的数据封状在一起
class CTime{
	int hour; //类数据成员（属性）
	int minute;
	int second;
public:// 访问属性 公有
	void SetTime(int h,int m,int s);//成员函数定义
	void ShowTime();
};//；
//访问属性？
//在类的外部能否直接访问类的成员
//在类内定义的函数，叫做该类的的成员函数
//类的成员：数据成员 函数成员
//类的函数成员的实现
//CTime::类作用域表识符
void CTime::SetTime(int h,int m,int s)
{
	hour=h;minute=m;second=s;
}
void CTime::ShowTime()
{
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}
class CPoint{
public: // 访问属性 私有
	int x; int y;
public:
	void SetPoint(int x1,int y1);
	void ShowPoint();
	float distance(CPoint p1);
};
void CPoint::SetPoint(int x1,int y1)
{ x=x1; y=y1;}//实际上这里的x也是和一个对象关联的
//总是和发起调用的对象关联
void CPoint::ShowPoint()
{ cout<<"x="<<x<<"y="<<y<<endl;}
float CPoint::distance(CPoint p1)
{
	return (x-p1.x)*(x-p1.x)
}
void main()
{
	CPoint p; // 对象：指其所属类当中的一个个体
	p.x=1;
	CPoint p1;
	p1.x=2;
	p.SetPoint(5,0);
	p1.SetPoint(3,0);
	p.ShowPoint();
	p1.ShowPoint();
	return;
	CTime t;
	t.SetTime(12,0,0);
	t.ShowTime();
}
//类不但封装了数据，还封装行为（具体体现为函数）
//引入面向对象的程序设计的目的
//做分类，让程序更好更自然的模拟问题
//使程序的可读性更强，使大的程序模块划分更清晰
//（设计更加合理）
//如何把我们的问题设计成一个类（能力）
//公有和私有的区别？
//设计的时候那些公有哪些私有？
//公有的函数成员 也称做这个类对外的接口。
//保护？
//如何访问成员？
//如何访问结构体成员的？
//通过该类对象来访问
//Student s1;
// s1.id;
// CPoint p;
// p.SetPoint(0,0);
// 类和对象的关系：抽象和具体，类型和变量的关系
// 类的成员之间可以访问
