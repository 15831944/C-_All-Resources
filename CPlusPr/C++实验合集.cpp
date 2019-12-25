/* Note:Your choice is C IDE */
#include "stdio.h"
#include <iostream>
#include <string>
using namespace std;
/*char * strcat(char *s1,char *s2)
{
	int i=0;
	while(s1[i]!='\0') i++;
	int j=0;
	while((s1[i++]=s2[j++])!='\0') ;
	return s1;
}
void main()
{
    char s1[20]="abc";
    char s2[10]="def";
    cout<<strcat(s1,s2)<<endl;
}*/

/*void main()
{
	string s1="abc", s2="def";
	cout<<s1+s2<<endl;	
}*/

//no virtual class
/*class vehicle
{
public: //for simple
	int MaxSpeed;
	int Weight;
};
class bicycle:public vehicle
{
public:
	int Height;
};
class motorcycle:public vehicle
{
public:
	int SeatNum;
};
class motorcycle:public motorcycle, public bicycle
{
	void show()
	{
		//二义性
		//cout<<"MaxSpeed:"<<MaxSpeed<<endl;
		cout<<motorcycle::MaxSpeed<<endl;
		cout<<Height<<endl;
		
		
	}
};
void main()
{
	motorcycle mc;
	cout<<mc.motorcycle::MaxSpeed<<endl;
	cout<<mc.bicycle::MaxSpeed<<endl;
}*/

//virtual class
/*class vehicle
{
public: //for simple
	int MaxSpeed;
	int Weight;
};
class bicycle:public virtual vehicle
{
public:
	int Height;
};
class motorcycle:public virtual vehicle
{
public:
	int SeatNum;
};
class motorcycle:public motorcycle, public bicycle
{
public:
	void show()
	{
		cout<<MaxSpeed<<endl;
		cout<<Height<<endl;
	}
};
void main()
{
	motorcycle mc;
	cout<<mc.MaxSpeed<<endl;
	mc.show();
}*/


//virtual class and 继承时的构造和析构，全面综合
/*class vehicle
{
protected:
	int MaxSpeed;
	int Weight;
public:
    vehicle(int s=0,int w=0):MaxSpeed(s),Weight(w){ cout<<"vehicle created"<<endl; }
    ~vehicle(){ cout<<"vehicle dead"<<endl; }
};
class bicycle:public virtual vehicle
{
protected:
	int Height;
public:
    bicycle(int s=0,int w=0,int h=0):vehicle(s,w),Height(h){cout<<"bicycle created"<<endl; }
    ~bicycle() {cout<<"bicycle dead"<<endl; }	
};
class motorcar:public virtual vehicle
{
protected:
	int SeatNum;
public:
    motorcar(int s=0,int w=0,int st=0):vehicle(s,w),SeatNum(st){cout<<"motorcar created"<<endl; }
    ~motorcar() {cout<<"motorcar dead"<<endl; }	
};
class motorcycle:public motorcar, public bicycle
{
public:
   // motorcycle(int s=0,int w=0,int h,int st=0):motorcar(s,w,st),bicycle(s,w,h) 出错原因分析
   motorcycle(int s=0,int w=0,int h=0,int st=0):vehicle(s,w),motorcar(s,w,st),bicycle(s,w,h)
    {cout<<"motorcycle created"<<endl; }
    ~motorcycle() {cout<<"motorcycle dead"<<endl; }	    
	void show()
	{
		cout<<MaxSpeed<<endl;
		cout<<Height<<endl;
	}
};*/
/*void main()
{
	motorcycle mc(50,10,2,4);	
	mc.show();	
}*/
/*void main()
{
	motorcycle mc(50,10,2,4);	
	mc.show();
	motorcycle mc1;
	mc1.show();	
}*/
/*void main()
{
	motorcycle *pmc=new motorcycle(50,10,2,4);	
	pmc->show();
	delete pmc;
	pmc=new motorcycle;
	pmc->show();
	delete pmc;	
}*/

/*#include <iostream>
using namespace std;
class Point{
int x,  y;
public:
Point(int x1,int y1):x(x1),y(y1){}
Point operator ++();
Point operator ++(int);	
friend ostream& operator <<(ostream& out,Point &p);
};
Point Point::operator++()
{
	 (*this)++;
	 return *this;
}
Point Point::operator++(int)
{
	Point tem(*this);
	x++;
	y++;
	return tem;
}
ostream& operator <<(ostream& out,Point &p)
{
	cout<<p.x<<","<<p.y;
	return out;
}
void main()
{
   Point p(1,2);   cout<<p<<endl;
   cout<<p++<<endl;
   cout<<p<<endl;
   cout<<++p<<endl;
   cout<<p<<endl;   
}*/


//virtual class
/*class vehicle
{
public: //for simple
	int MaxSpeed;
	int Weight;
};
class bicycle:public virtual vehicle
{
public:
	int Height;
};
class motorcycle:public virtual vehicle
{
public:
	int SeatNum;
};
class motorcycle:public motorcycle, public bicycle
{
public:
	void show()
	{
		cout<<MaxSpeed<<endl;
		cout<<Height<<endl;
	}
};
void main()
{
	motorcycle mc;
	cout<<mc.MaxSpeed<<endl;
	mc.show();
}*/


//virtual class and virtual function
class vehicle
{
protected:
	int MaxSpeed;
	int Weight;
public:
    vehicle(int s=0,int w=0):MaxSpeed(s),Weight(w){ cout<<"vehicle created"<<endl; }
    ~vehicle(){ cout<<"vehicle dead"<<endl; }
    virtual void run(){ cout<<"vehicle run"<<endl; }
};
class bicycle:public virtual vehicle
{
protected:
	int Height;
public:
    bicycle(int s=0,int w=0,int h=0):vehicle(s,w),Height(h){cout<<"bicycle created"<<endl; }
    ~bicycle() {cout<<"bicycle dead"<<endl; }
    void run() {cout<<"bicycle run"<<endl; }
};
class motorcar:public virtual vehicle
{
protected:
	int SeatNum;
public:
    motorcar(int s=0,int w=0,int st=0):vehicle(s,w),SeatNum(st){cout<<"motorcar created"<<endl; }
    ~motorcar() {cout<<"motorcar dead"<<endl; }	
    void run()  {cout<<"motorcar run"<<endl; }	
};
class motorcycle:public motorcar, public bicycle
{
public:
   // motorcycle(int s=0,int w=0,int h,int st=0):motorcar(s,w,st),bicycle(s,w,h) 出错原因分析
   motorcycle(int s=0,int w=0,int h=0,int st=0):vehicle(s,w),motorcar(s,w,st),bicycle(s,w,h)
    {cout<<"motorcycle created"<<endl; }
    ~motorcycle() {cout<<"motorcycle dead"<<endl; }	    
	void show()
	{
		cout<<MaxSpeed<<endl;
		cout<<Height<<endl;
	}
	void run() {cout<<"motorcycle run"<<endl; }
};
void main()
{
	vehicle v;
	bicycle b;
	motorcar m;
	motorcycle mc;
	vehicle *pv;
	pv=&v; pv->run();
	pv=&b; pv->run();
	pv=&m; pv->run();
	pv=&mc; pv->run();
}





//template fuction
/*int Max1(int n1, int n2)
{
	if(n1>n2) return n1; else return n2;
}*/
/*template <class T>
T Max1(T n1, T n2)
{
	if(n1>n2) return n1; else return n2;
}
void main()
{
	int i1=9,i2=7;
	cout<<Max1(i1,i2)<<endl;
	float f1=9.5,f2=4.8;
	cout<<Max1(f1,f2)<<endl;		
}*/

//STL
//test queue
/*#include<queue>
void main()
{
	queue<int> que;
	que.push(3); que.push(4); que.push(5);
	cout<<"first:"<<que.front()<<endl;
	cout<<"back:"<<que.back()<<endl;
	cout<<"size:"<<que.size()<<endl;
	int i;
	que.pop();
	cout<<"size:"<<que.size()<<" first:"<<que.front()<<endl;
	cout<<"empty:"<<que.empty()<<endl;
}*/

//test 
/*#include<algrithem>
void main()
{

}
*/

//out style control file
/*#include<fstream>
#include<iostream>
using namespace std;
#define D(a) T<<#a<<endl;a  //# 产生字符串, 可输出语句字符串，然后执行语句

#define T cout
//ofstream T("output.out"); //文件对象名叫做T

void main(){
	D(int i=53;)
	D(float f=4700113.141593;)
	char*s="Is there any more?";
	
	D(T.setf(ios::unitbuf);)	
	D(T.setf(ios::showbase);)
	D(T.setf(ios::uppercase);)
	D(T.setf(ios::showpos);)
	D(T<<i<<endl;)
	D(T.setf(ios::hex,ios::basefield);)
	D(T<<i<<endl;)
	D(T.unsetf(ios::uppercase);)
	D(T.setf(ios::oct,ios::basefield);)
	D(T<<i<<endl;)
	D(T.setf(ios::showbase);)
	D(T.setf(ios::dec,ios::basefield);)
	D(T.setf(ios::left,ios::adjustfield);)
	D(T.fill('0');)
	D(T<<"fill char:"<<T.fill()<<endl;)
	D(T.width(8);)
	T<<i<<endl;
	D(T.setf(ios::right,ios::adjustfield);)
	D(T.width(8);)
	T<<i<<endl;
	D(T.setf(ios::internal,ios::adjustfield);)
	D(T.width(8);)
	T<<i<<endl;
	D(T<<i<<endl;)//Without width(10)
	cout<<"================================"<<endl;
	D(T.unsetf(ios::showpoint);)
	D(T.setf(ios::showpoint);)
	D(T<<"prec="<<T.precision()<<endl;)
	D(T.setf(ios::scientific,ios::floatfield);)
	D(T<<endl<<f<<endl;)
	D(T.setf(ios::fixed,ios::floatfield);)
	D(T<<f<<endl;)
	D(T.setf(0,ios::floatfield);)//Automatic
	D(T<<f<<endl;)
	D(T.precision(6);)
	D(T<<"prec="<<T.precision()<<endl;)
	D(T<<endl<<f<<endl;)
	D(T.precision(2);)
	D(T.setf(ios::fixed,ios::floatfield);)	
	D(T<<f<<endl;)
	cout<<"================================"<<endl;
	D(T.width(8);)
	T<<s<<endl;
	D(T.width(36);)
	T<<s<<endl;
	D(T.setf(ios::left,ios::adjustfield);)
	D(T.width(36);)
	T<<s<<endl;
	
	D(T.unsetf(ios::showpoint);)
	D(T.unsetf(ios::unitbuf);)		
}*/

// file add line number
/*#include<fstream>
#include<iostream>
using namespace std;
void main()
{
	ifstream ifs("test.txt");
	char str[100];
	if(ifs){
		int i=1;
		ofstream ofs("out.txt");
		while(!ifs.eof()){
			ifs.getline(str,100);
			ofs<<i++<<":"<<str<<endl;
		}
		ofs.close();
	}
	ifs.close();	
}
*/


