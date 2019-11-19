#include<iostream>
#include<string>
using namespace std;

//返回字符串从下标startpos开始的count个字符的子串
string substr(string str,int startpos,int count);

int main()
{
	string str="123456789";
	string substr1,substr2,substr3;
	cout<<"源字符串为:"<<str<<endl;
	substr1=str.substr(0,5);
	substr2=str.substr(2,5);
	substr3=substr(str,4,4);
	cout<<"子串1="<<substr1<<endl;
	cout<<"子串2="<<substr2<<endl;
	cout<<"子串3="<<substr3<<endl;
	return 0; 
 }
 
 string substr(string str,int startpos,int count)
 {
 	string sub="";
 	int i,j=startpos+count;
 	for(i=startpos;i<str.size()&&i<j;i++)
 	{
 		sub+=str[i];
	 }
	 return sub;
  } 
