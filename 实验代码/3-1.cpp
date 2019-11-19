#ifndef MATRIX_H
#define MATRIX_H

#include<string>
#include<vector>
#include<iostream>
using namespace std;

#define W 3
#define H 3

template<class T>
class ReveMatrix
{
public:
	ReveMatrix() {}
	~ReveMatrix() {}
	//转置n*m的矩阵
	static T* getReverse(T* a,int n,int m);//返回指针类型
};

//函数定义
template <class T>T* ReveMatrix <T>::getReverse(T* a,int n,int m)
{
	T temp;
	int i,j;
	vector<int>b(n*m,0);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i*n+j]=a[j*m+i];
		}
	}
	for(i=0;i<n;++i)
	{
		for(j=0;j<m;++j)
		{
			a[i*m+j]=b[i*m+j];
		}
	}
	return a;
}
#endif

//函数重载数显n*n矩阵转置
template <class T>
class ReveMatrix
{
public:
	ReveMatrix() {}
	~ReveMatrix() {}
	//转置n*m的矩阵
	static void getReverse(double* a,int n,int m);
	static void getReverse(float* a,int n,int m);
	static void getReverse(int* a,int n,int m);
	static void getReverse(char* a,int n,int m);
	static void getReverse(string* a,int n,int m);
};

void ReveMatrix::getReverse(double *a,int n,int m)
{
	double temp=0;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<m;j++)
		{
			temp=*(a+i*m+j);
			*(a+i*m+j)=*(a+j*n+i);
			*(a+j*n+i)=temp;
		}
	}
}

void ReveMatrix::getReverse(float *A,int n,int m)
{
	float temp;
	for(int i=0;i<n;i++)
	{
		for(iny j=0;j<m;j++)
		{
			temp=*(a+i*m+j);
			*(a+i*m+j)=*(a+j*n+i);
			*(a+j*n+i)=temp;
		}
	}
}

void ReveMatrix::getReverse(int *a,int n,int m)
{
	int temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			temp=*(a+i*m+j);
			*(a+i*m+j)=*(a+j*n+i);
			*(a+j*n+i)=temp;
		}
	}
}

void ReveMatrix::getReverse(char *a,int n,int m)
{
	char temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			temp=*(a+i*m+j);
			*(a+i*m+j)=*(a+j*n+i);
			*(a+j*n+i)=temp;
		}
	}
}

void ReveMatrix::getReverse(string *a,int n,int m)
{
	string temp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			temp=*(a+i*m+j);
			*(a+i*m+j)=*(a+j*n+i);
			*(a+j*n+i)=temp;
		}
	}
}

int main()
{
	int i,j;
	int a[W][H]={1,2,3,4,5,6,7,8,9};
	int *p;
	char ch[W][H+1]={'a','b','c','d','e','f','g','h','i','j','k','l'};
	char *pp;

	cout<<"转置前矩阵:"<<endl;
	for(i=0;i<W;i++)
	{
		for(j=0;j<H;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	p=ReveMatrix<int>::getReverse((int *)a,W,H);
	cout<<"转置后矩阵:"<<endl;
	for(i=0;i<H;i++)
	{
		for(j=0;j<W;j++)
		{
			cout<<p[i*W+j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n转置前矩阵:"<<endl;
	for(i=0;i<W;i++)
	{
		for(j=0;j<H;j++)
		{
			cout<<ch[i][j]<<" ";
		}
		cout<<endl;
	}
	pp=ReveMatrix<char>::getReverse((char *)ch,W,H+1);
	cout<<"转置后矩阵:"<<endl;
	for(i=0;i<H+1;i++)
	{
		for(j=0;j<W;j++)
		{
			cout<<pp[i*W+j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
