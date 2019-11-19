#include"client.h"
#include"iostream"
#include"string"
#include"stdlib.h"
using namespace std;
int main()
{
	string s;
	CLIENT::ShowClientNum();
	CLIENT::ShowServerName();
	cout<<"Please enter your server's name:"<<endl;
	cin>>s;
	CLIENT myserver1(32),myserver2(64);//定义两个服务器
	CLIENT::ShowClientNum();
	CLIENT::ShowServerName();
	myserver1.getsize();
	myserver2.getsize();
	system("pause");
	return 0; 
}
