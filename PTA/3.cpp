#include<iostream>
using namespace std;
int myMax(int a,int b){
	return a>b?a:b;
}
int myMax(int a,int b,int c){
	return myMax(a,myMax(b,c));
}
double myMax(double a,double b){
	return a>b?a:b;
}
double myMax(double a,double b,double c){
	return myMax(a,myMax(b,c));
}
int main(){
	cout<<myMax(3,4)<<endl;
	cout<<myMax(3,4,5)<<endl;
	cout<<myMax(4.3,3.4)<<endl;
}
