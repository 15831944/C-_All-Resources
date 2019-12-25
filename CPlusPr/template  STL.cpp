//模板：模具
//更高级的模具
#include <iostream>
using namespace std;
/*
int add(int a,int b)
{
	return a+b;
}
double add(double a,double b)
{
	return a+b;
}
*/
//函数模板：用来生产函数的模具
//如何创建一个函数模板
/*
template <class T,class M>
//声明函数可能要使用的类型
//<class T> T 是一个数据类型
//函数就可以象使用整型一样去使用T
M add(T a,M b)
{
	return a+b;
}
//当实际调用该函数时根据实际参数的
//类型来生产函数
//用实际参数的类型去替换T
//T:类型的参数
void main()
{
	cout<<add(3,4.1)<<endl;
}
//类模板：用来生产类的模具
*/
/*
template <class T>
class A
{
public:
	T item;
	T getitem(){ return item;}
	void setitem(T i);
};
//每个函数的前面都要声名类型参数
template <class T>
//A<T>::而不是A::
void A<T>::setitem(T i)
{
	item=i;
}
void main()
{
	//A<int>: 根据类模板生产一个类
	//A<double>
	//A<Point>
	A<int> a;
	a.setitem(4);
	cout<<a.getitem()<<endl;
}
*/
#include <vector>
void main()
{
	vector<int> v(10);
	v.push_back(8);
	vector<int>::iterator it;
	it=v.begin();
	v.insert(it,3);
	for(it=v.begin();it<v.end();it++)
		cout<<*it<<endl;
	cout<<v.size()<<endl;
}
yanghuajun.blog.163.com