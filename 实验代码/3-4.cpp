#include<iostream>
#include<string>
using namespace std;

//�����ַ������±�startpos��ʼ��count���ַ����Ӵ�
string substr(string str,int startpos,int count);

int main()
{
	string str="123456789";
	string substr1,substr2,substr3;
	cout<<"Դ�ַ���Ϊ:"<<str<<endl;
	substr1=str.substr(0,5);
	substr2=str.substr(2,5);
	substr3=substr(str,4,4);
	cout<<"�Ӵ�1="<<substr1<<endl;
	cout<<"�Ӵ�2="<<substr2<<endl;
	cout<<"�Ӵ�3="<<substr3<<endl;
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
