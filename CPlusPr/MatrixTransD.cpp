//6_18.cpp
#include<iostream>
using namespace std;
class Matrix
{ public:
  Matrix(int r,int c)
  {
	  row=r; col=c;
	  p=new int[r*c];
  }
  Matrix(Matrix &m1)
  {
	  row=m1.row; col=m1.col;
	  p=new int[row*col];
	  int i=0;
	  for (i=0;i<row*col;i++)
		this->p[i]=m1.p[i];
  }
  Matrix(int *p1,int r,int c)
  {
	  row=r; col=c;
	  p=new int[r*c];
	  int i;
	  for (i=0;i<r*c;i++)
		p[i]=p1[i];
  }
  ~Matrix() { delete[] p;}
  void Display()
  {
	int i,j;
	  for (i=0;i<row;i++)
		  for (j=0;j<col;j++)
		  {
			  if (j%col==0) cout<<endl; 
				cout<<p[i*col+j]<<"    ";
		  }
	  cout<<endl;			  
  }
  /*void Transport()
  {	
		int *p1=new int[col*row];
		int i,j;
	    for (i=0;i<row;i++)
		  for (j=0;j<col;j++)
		  {   p1[j*row+i]=p[i*col+j];}
		Matrix tem(p1,col,row);
		tem.Display();
		delete[] p1;
  }*/
  void Transport(Matrix &m1)
  {		
		int i,j;
	    for (i=0;i<row;i++)
		  for (j=0;j<col;j++)
		  {   m1.p[j*row+i]=p[i*col+j];}	
 }	
 Matrix Transport()
 {		
		Matrix tem(col,row);
	    int i,j;
	    for (i=0;i<row;i++)
		  for (j=0;j<col;j++)
		  {   tem.p[j*row+i]=p[i*col+j];}
		return tem;
 }	
  private:
    int *p;
	int row,col;
};

void main()
{	
	/*int *p=new int;
	delete p;
	delete p;
	return ;*/
	int a[2][3]={{1,2,3},{4,5,6}};
	Matrix m(&a[0][0],2,3);
	m.Display();
       Matrix m1(3,2);
	//m.Transport(m1);
	//Matrix m1(m.Transport());
	m.Transport();
	m.Display();

	int (*p)[3]=new int[2][3]; //p是一个指向具有三个整形元素的一位数组的指针
    
}