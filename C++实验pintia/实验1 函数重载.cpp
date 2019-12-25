#include <iostream>
using namespace std;

int myMax(int x,int y){
	if(x>y)
		return x;
	else
		return y;
}
int myMax(int x,int y,int z){
	return myMax(myMax(x,y),z);
}

double myMax(double x,double y){
	if(x>y)
		return x;
	else
		return y;
}

int main(){
	cout<<myMax(3,4)<<endl;
	cout<<myMax(3,4,5)<<endl;
	cout<<myMax(4.3,3.4)<<endl;
}
