// 




#include <iostream>
#include <cstring>
using namespace std;
/* 排列情况
{
	int i,j,k; int count=0;
	for (i=1;i<=5;i++)
		for (j=1;j<=5;j++)
			for(k=1;k<=5;k++){
				if(i!=j && i!=k && j!=k) {
					count+=1; cout<<i<<","<<j<<","<<k<<endl;
				}
			}
	cout<<"all methods :"<<count<<endl;
}
*/
/*
//组合情况
{
	int i,j,k; int count=0;
	for (i=1;i<=5;i++)
		for (j=i+1;j<=5;j++)
			for(k=j+1;k<=5;k++){
				if(i!=j && i!=k && j!=k) {
					count+=1; cout<<i<<","<<j<<","<<k<<endl;
				}
			}
	cout<<"all methods :"<<count<<endl;
}
*/
/*
// 提高可读性
{
	
	int i,j,k; 
	int count=0;
	for (i=RED;i<=BLACK;i++)
		for (j=i+1;j<=BLACK;j++)
			for(k=j+1;k<=BLACK;k++){
				if(i!=j && i!=k && j!=k) {
					count+=1; cout<<i<<","<<j<<","<<k<<endl;
				}
			}
	cout<<"all methods :"<<count<<endl;
}
*/

enum Color {RED=1,YELLOW,BLUE,WHITE,BLACK};
void printcolor(Color c)
{
	switch(c){
		case RED: cout<<"RED"; break;
		case YELLOW: cout<<"YELLOW"; break;
		case BLUE: cout<<"BLUE"; break;
		case WHITE: cout<<"WHITE"; break;
		case BLACK: cout<<"BLACK"; break;
	}

}
void printacom(Color i, Color j, Color k)
{
	printcolor(i); cout<<",";
	printcolor(j); cout<<",";
	printcolor(k); cout<<endl;
}
void main()
{
	
	int i,j,k; 
	int count=0;
	for (i=RED;i<=BLACK;i++)
		for (j=i+1;j<=BLACK;j++)
			for(k=j+1;k<=BLACK;k++){
				if(i!=j && i!=k && j!=k) {
					count+=1; printacom((Color)i,(Color)j,(Color)k);
				}
			}
	cout<<"all methods :"<<count<<endl;
}

