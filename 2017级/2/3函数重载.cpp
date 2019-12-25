#include <iostream>
using namespace std;

int max(int a,int b){
	return a>b ? a: b;
}
int max(int a,int b,int c){
	int d = max(a,b);
	return max(c,d);
}

int f(int a){
}
double f(int a){
}

int main(){
	int a = 8, b = 10;
	cout<< max(a,b) <<endl;
	int c = 2;
	cout<< max(a,b,c) <<endl;
}

 
