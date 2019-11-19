#include"client.h"
CLIENT::CLIENT(int x)
{
	size=x;
	ClientNum++;
}
CLIENT::CLIENT()
{
	size=0;
	ClientNum++;
}
CLIENT::~CLIENT()
{
	
}
void CLIENT::ChangeServerName(string s)
{
	ServerName=s;
}
void CLIENT::ShowServerName()
{
	cout<<"ServerName="<<ServerName<<endl;
}
void CLIENT::ShowClientNum()
{
	cout<<"ClientNum="<<ClientNum<<endl;
}
void CLIENT::getsize()
{
	cout<<size<<endl;
}
string CLIENT::ServerName="a";
int CLIENT::ClientNum=0;
