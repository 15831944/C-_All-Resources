#include <iostream>
using namespace std;
void getbits(char c){
	int a = c;
	int mask = 0x0001;
	char str[32];
	for(int i=0;i<32;i++){
		if(a&mask == 1){
			str[i] = '1';	
		}else{
			str[i] = '0';
		}
		a = a>>1;
	}
	for(int i=7;i>=0;i--){
		cout<<str[i];
	}
	cout<<"\n";
}
void getbits(int a){
	int mask = 0x0001;
	char str[32];
	for(int i=0;i<32;i++){
		if(a&mask == 1){
			str[i] = '1';	
		}else{
			str[i] = '0';
		}
		a = a>>1;
	}
	for(int i=31;i>=0;i--){
		cout<<str[i];
	}
	cout<<endl;
}
void getbits(float f){
	int * p  = (int *)&f;
	getbits(*p);
}
int main(){		
	char c = 'b';
	getbits(c);
	cout<<"-----------"<<endl;
	int i = 56;
	getbits(i);
	float a = 3.14;
	getbits(a);
}
