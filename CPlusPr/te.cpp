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
	//����һ���������͵ı���(�����������ı���) 
	//����rx,�ڶ�������ʱ����ζ�����x�ı���
    // ע��: �������͵ı���һ��Ҫ����ֵ
	// �����ٸ�Ϊ���������ı���
	//swap(&x,&y);
	//rx=8;

	swap(x,y); 
	// ���õ���Ҫ��;���������������Ĳ�����
	// ʵ�ִ�ַ����
	//���úû���ָ��ã�

	cout<<x<<" "<<y<<endl;
}
int add(int x,int y)
{
	return x+y;
}
/*
��������ѧϰ��
Ĭ���β�ֵ
��������
��������
�������β�
��������
�㶼����� ��?

ʵ����:
���ٶ��Ŀ����� 
���� ��ʦ<<�������������>>ʵ����

��ʵ���Ŀ�ʼ��,���������ʵ��һ��ʵ����
*/
