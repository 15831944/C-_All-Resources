#include <iostream>
using namespace std;
int max(int a, int b)
{
	if(a>b) return a; else return b;
}

int max(int a , int b, int c)
{
	int tem;
	tem=max(a,b);
	return max(tem,c);
}
void swap(int *pa,int *pb)
{
	int tem;
	tem=*pa;
	*pa=*pb;
	*pb=tem;
}
void swap(int &a,int &b) //int &a=x; int &b=y;
{
	int tem;
	tem=a; a=b; b=tem;
}
void main()
{
	int x=7;int y=5;float f;
	int &rx=x;
	//定义一个引用类型的变量(是其他变量的别名) 
	//叫做rx,在定义它的时候就治定他是x的别名
    // 注意: 引用类型的变量一定要付初值
	// 不能再改为其他变量的别名
	//swap(&x,&y);
	//rx=8;

	swap(x,y); 
	// 引用的重要用途：用引用做函数的参数，
	// 实现传址调用
	//引用好还是指针好？

	cout<<x<<" "<<y<<endl;
}
int add(int x,int y)
{
	return x+y;
}
/*
今天我们学习了
默认形参值
函数重载
引用类型
引用作形参
内联函数
你都清楚了 吗?

实验大纲:
到百度文库下载 
搜索 川师<<面向对象程序设计>>实验大纲

从实验四开始做,但建议完成实验一到实验三
*/
