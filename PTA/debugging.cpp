#include<iostream>
using namespace std;
int main(){
	int n=7;
	int &r=n;
	cout<<r;
	r=4;
	cout<<r;
	cout<<n;
	n=5;
	cout<<r;
	return 0;
}
