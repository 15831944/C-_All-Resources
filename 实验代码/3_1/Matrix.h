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
	//ת��n*m�ľ���
	static T* getReverse(T* a,int n,int m);//����ָ������
};

//��������
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

//������������n*n����ת��
class ReveMatrix
{
public:
	ReveMatrix() {}
	~ReveMatrix() {}
	//ת��n*m�ľ���
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

