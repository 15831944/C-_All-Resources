//6_4.cpp
#include<iostream>
#include<cmath>
using namespace std;
class Matrix;
class Matrix
{
public:
	Matrix(int b[3][3]){
		int i,j;
		for(i=0;i<3;i++)
			for (j=0;j<3;j++)
				a[i][j]=b[i][j];
	}
	void display()
	{
		int i,j;
		for(i=0;i<3;i++)
			for (j=0;j<3;j++){
				cout<<a[i][j]<<"  ";
				if (j==2) cout<<endl;
			}
	}
	Matrix transform();
private:
	int a[3][3];
};

Matrix Matrix::transform(){
		int i,j;
		int b[3][3];
		for(i=0;i<3;i++)
			for (j=0;j<3;j++){
				b[i][j]=a[j][i];
			}
		Matrix m1(b);
		return  m1;
	}
void main()
{
	int t[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	Matrix m(t);
	m.display();
	//int b[3][3];
	//m.transform();
	//Matrix m1(m.transform());
	Matrix m1(m.transform());
	m1.display();
}