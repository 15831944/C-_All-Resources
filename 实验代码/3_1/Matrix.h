#ifndef MATRIX_H
#define MATRIX_H

#include<string>
#include<vector>

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

