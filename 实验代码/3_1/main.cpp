#include<iostream>
#include"Matrix.h"
using namespace std;

#define W 3
#define H 3

int main()
{
	int i,j;
	int a[W][H]={1,2,3,4,5,6,7,8,9};
	int *p;
	char ch[W][H+1]={'a','b','c','d','e','f','g','h','i','j','k','l'};
	char *pp;

	cout<<"×ªÖÃÇ°¾ØÕó:"<<endl;
	for(i=0;i<W;i++)
	{
		for(j=0;j<H;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	p=ReveMatrix<int>::getReverse((int *)a,W,H);
	cout<<"×ªÖÃºó¾ØÕó:"<<endl;
	for(i=0;i<H;i++)
	{
		for(j=0;j<W;j++)
		{
			cout<<p[i*W+j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n×ªÖÃÇ°¾ØÕó:"<<endl;
	for(i=0;i<W;i++)
	{
		for(j=0;j<H;j++)
		{
			cout<<ch[i][j]<<" ";
		}
		cout<<endl;
	}
	pp=ReveMatrix<char>::getReverse((char *)ch,W,H+1);
	cout<<"×ªÖÃºó¾ØÕó:"<<endl;
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
