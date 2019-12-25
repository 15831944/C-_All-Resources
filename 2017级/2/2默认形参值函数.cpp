#include <iostream>
using namespace std;

int f(double factor=1,int score){
	return score*factor;
}

int main(){
	int a=56;
	cout<<f(a)<<endl;	
}

 
