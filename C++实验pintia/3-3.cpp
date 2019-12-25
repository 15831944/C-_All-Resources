// 实验3 利用string类实现子串的提取 
#include <iostream>
#include <string> 
using namespace std;
int main(){
	string id;
	cin>>id; // 2016110105
	cout<<"year:"<<id.substr(0,4)<<endl;
	cout<<"department:"<<id.substr(4,2)<<endl;
	cout<<"class:"<<id.substr(6,2)<<endl;	
}
