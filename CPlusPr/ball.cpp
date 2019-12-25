#include <iostream>
using namespace std;

enum Color {RED=1,Yellow,Blue,White,Black};
void printcolor(int c)
{
	Color col=(Color)c;
	switch(co+l){
	case RED: cout<<"Red"; break;
	}
}
void printacom(int i,int j,int k)
{
	printcolor(i);
	printcolor(j);
	printcolor(k);
	cout<<endl;
}
void main()
{
	
	int i,j,k;
	int count=0;
	for (i=RED;i<=Black;i++)
		for (j=i+1;j<=Black;j++)
			for (k=j+1;k<=Black;k++)
				if (i!=j && i!=k && j!=k){
					count++;
					cout<<i<<" "<<j<<" "<<k<<endl;
				}

	cout<<"count="<<count<<endl;
}