// ʵ��3 ����string��ʵ���Ӵ�����ȡ 
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
