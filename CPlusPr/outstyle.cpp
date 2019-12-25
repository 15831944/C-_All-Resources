




#include <iostream>
#include <cstring>
#include "iomanip"
using namespace std;

void main()
{
	char* name[5]={"牛魔王","齐天大圣","姚明","梅西"};
	double height[5]={3.34,56.3634,2.34,1.689};
	double weight[5]={564.235,123.645,269.75,140.758};
    
	cout.setf(ios::right); 

	cout<<setw(20)<<"name"<<setw(10)<<"height"<<setw(10)<<"weight"<<endl;
    int i=0; 
	cout.setf(ios::fixed);
	cout<<setprecision(2);
	for(i=0;i<4;i++)
		cout<<setw(20)<<name[i]<<setw(10)<<height[i]<<setw(10)<<weight[i]<<endl;


}

