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
     cout<<"��������������:";
	 cin>>a>>b;
     cout<<"�����:"<<Max1(a,b)<<endl;
	 cout<<"��������������:";
	 cin>>a>>b>>c;
	 cout<<"�����:"<<Max1(a,b,c)<<endl;
	double x,y,z;
	cout<<"����������˫������:";
	cin>>x>>y;
	cout<<"�����:"<<Max1(x,y)<<endl;
	cout<<"����������˫������:";
	cin>>x>>y>>z;
	cout<<"�����:"<<Max1(x,y,z)<<endl;
return 0;
}

