#include<iostream>
using namespace std;

template<typename T>
T max(T x,T y,T z){
	if(x>y){
		if(x>z) return x;
		else return z;
	}
}

int main(){
	cout<<"max(2,8,6)最大值为:"<<max(2,8,6)<<endl;
	return 0;
}
