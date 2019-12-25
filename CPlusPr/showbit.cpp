// 用于显示数字的补码， 涉及 位运算 字符串 函数重载等内容

/*
//测试向右移位
	char c=-128;
	cout<<hex;
	cout<<(int)c<<endl;
    char d=c>>1;
	cout<<(int)d<<endl; //右移最高位补符号位

	unsigned char uc=128;
	cout<<hex<<short(uc>>1)<<endl; //无符号最高位补0
    
	short s=-128;
	cout<<s<<endl;
    cout<<dec<<0xff<<endl;
*/


#include <iostream>
#include <cstring>
using namespace std;
void printstr(char *str)
{
	int len=strlen(str);
	int g=len/8;
	char asubstr[9]; asubstr[8]='\0';
	int i;
	for(i=0;i<g;i++){
		strncpy(asubstr,str+i*8,8);
		cout<<asubstr<<" ";
	}
    cout<<endl;
}

void main()
{
	void showbit( int i);
	void showbit( char i);
	void showbit( short i);
	void showbit(unsigned int i);
	void showbit(unsigned char i);
	void showbit(unsigned short i);

	int i=65535; 
	cout.setf(ios::showbase); 
	cout<<hex<<i<<endl; 
	//cout.unsetf(ios::showbase); cout<<hex<<i<<endl;
	showbit(i);
	return;
	showbit(char(i));
	showbit(short(i));
	showbit(unsigned int(i));
	showbit((unsigned char)i);
	showbit((unsigned short)i);
}

void showbit( int i)
{
	int len=sizeof(i)*8;
	char *str=0;
	str=new char[len+1]; str[len]='\0';
    unsigned int mymask=0x80000000;
	int p; 
	for (p=len; p>0; p--){
		if ((i & mymask)==0) str[len-p]='0'; else str[len-p]='1';
		mymask=mymask>>1;
	}
	cout<<str<<endl;
    printstr(str);
	delete str;
}
void showbit( char i)
{
	int len=sizeof(i)*8;
	char *str=0;
	str=new char[len+1]; str[len]='\0';
    unsigned short mymask=0x80;
	int p; 
	for (p=len; p>0; p--){
		if ((i & mymask)==0) str[len-p]='0'; else str[len-p]='1';
		mymask=mymask>>1;
	}
    cout<<str<<endl;
	delete str;
}

void showbit( short i)
{
	int len=sizeof(i)*8;
	char *str=0;
	str=new char[len+1]; str[len]='\0';
    unsigned short mymask=0x8000;
	int p; 
	for (p=len; p>0; p--){
		if ((i & mymask)==0) str[len-p]='0'; else str[len-p]='1';
		mymask=mymask>>1;
	}
    cout<<str<<endl;
	delete str;
}
void showbit(unsigned int i)
{
	showbit((int)i);
}
void showbit(unsigned char i)
{
	showbit((char)i);
}
void showbit(unsigned short i)
{
	showbit((short)i);
}

