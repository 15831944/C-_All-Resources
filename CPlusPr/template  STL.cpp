//ģ�壺ģ��
//���߼���ģ��
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
//����ģ�壺��������������ģ��
//��δ���һ������ģ��
/*
template <class T,class M>
//������������Ҫʹ�õ�����
//<class T> T ��һ����������
//�����Ϳ�����ʹ������һ��ȥʹ��T
M add(T a,M b)
{
	return a+b;
}
//��ʵ�ʵ��øú���ʱ����ʵ�ʲ�����
//��������������
//��ʵ�ʲ���������ȥ�滻T
//T:���͵Ĳ���
void main()
{
	cout<<add(3,4.1)<<endl;
}
//��ģ�壺�����������ģ��
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
//ÿ��������ǰ�涼Ҫ�������Ͳ���
template <class T>
//A<T>::������A::
void A<T>::setitem(T i)
{
	item=i;
}
void main()
{
	//A<int>: ������ģ������һ����
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