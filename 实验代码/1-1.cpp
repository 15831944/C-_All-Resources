#include <iostream>
using namespace std;
int Max1(int a,int b){
    if(a>b)
    return a;
    else
        return b;
}
double Max1(double x,double y){
    if(x>y)
    return x;
    else
        return y;
}
int Max1(int a,int b,int c){
    return Max1(a,Max1(b,c));
}
double Max1(double x,double y,double z){
    return Max1(x,Max1(y,z));
}
 int main(){
   int a,b,c;
     cout<<"请输入两个整数:";
	 cin>>a>>b;
     cout<<"结果是:"<<Max1(a,b)<<endl;
	 cout<<"请输入三个整数:";
	 cin>>a>>b>>c;
	 cout<<"结果是:"<<Max1(a,b,c)<<endl;
	double x,y,z;
	cout<<"请输入两个双精度数:";
	cin>>x>>y;
	cout<<"结果是:"<<Max1(x,y)<<endl;
	cout<<"请输入三个双精度数:";
	cin>>x>>y>>z;
	cout<<"结果是:"<<Max1(x,y,z)<<endl;
return 0;
}

