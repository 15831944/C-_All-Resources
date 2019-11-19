#include <iostream>
#include <cstdlib>
using namespace std;
/*
class b;
class a{
 void f(b b1)
 {}
};
class b
{};
*/

//class Clock
//{
//private:
//      int h,m,s;
//public:
//       
//      Clock(int h,int m,int s)
//      {
//           this->h=h; this->m=m; this->s=s;
//           cout<<"constructor is called"<<endl;       
//      }
//      //Clock(Clock &c)
////      {
////           h=c.h+1; m=c.m; s=c.s;
////           cout<<"copy constructor is called"<<endl; 
////      }
//      Clock()
//      {
//           h=0; m=0; s=0;
//           cout<<"default constructor is called"<<endl;       
//      }
//      //~Clock();
//      void showtime();      
//      void settime(int h=0,int m=0,int s=0)
//      {        
//           this->h=h; this->m=m; this->s=s;
//      }
//};
//
////Clock::~Clock()
////{
////    cout<<"deconstructor is called"<<endl;
////}
//
//void Clock::showtime()
//{cout<<h<<" "<<m<<" "<<s<<endl;}
//void f()
//{
//    extern int g;
//    Clock c1(10,10,10);
//    Clock c2(c1); // Clock c2=c1;
//    c2.showtime();    
//}
//int g;
//class B;
//class A
//{
//      B &b;
//      void method();
//};
//class B
//{
//public:
//      void f()
//      {} 
//};
//void A::method()
//{ b.f();}
//main()
//{
//    /*
//    Clock c1;
//    //c1.h=25;
//    c1.settime(9,10,11);
//    c1.showtime();
//    Clock c2;
//    c2.settime();
//    c2.showtime();
//    int i(9);
//    */
//    //Clock c3(10,10,10);
//    //c3.showtime();
//    //
////    Clock c4;
////    c4.settime(4,4,4);
////    c4.showtime();
//    //int x=2;
//    //int y(x); //int y=x; 
//    f();
//    system("pause");
//}
//
//
//class A{
//public:
//   int x;
//   void f()
//   {x=9;}
//   void g();
//};
//void A::g()
//{
//     
//}
//void main()
//{
//   A a;
//   a.x
//}

//namespace A{
//    int i;
//}
//namespace B {
//    int i;
//}
//namespace {
//    int i;
//}
/*
class A
{
    static int x;
};
void f()
{
    static int i;     
}
int g;
int main()
{    
    int j;
    f();
    f();        
}
*/
//class Point
//{
//    int x,y; 
//public:
//    Point(){ cout<<"default construct"<<endl;}
//    Point(int xx,int yy):x(xx),y(yy){}
//    friend  int Distance(Point p1,Point p2);    
//    void SetX  (int xx){x=xx;}
//    void Show() const {cout<<x<<","<<y<<endl;}
//};
//int Distance(Point p1,Point p2)
//{
//    int xx=p1.x-p2.x;
//    int yy=p1.y-p2.y;    
//}
//int main()
//{  
//    //Point p(3,4);
//    //Point ap[2]={Point(1,2),Point(3,4)};
//    Point ap[2];
//    system("pause");
//}
/*
int main()
{    
    Point p1(1,1),p2(4,5);
    int len=Distance(p1,p2);
    p1.SetX(2);
    p1.Show();
    const Point p3(3,4);
    //p3.SetX(4);
    p3.Show();
    system("pause");        
}
*/
/*
class A{
public:
    A( int x1,int y1 ){x=x1; y=y1;}
    int x;
    void f()
    {cout<<"f in A"<<endl;}
private: 
    int y;
};
class B:public A
{
public:
    B(int x1,int y1,int z1):A(x1,y1)
    { z=z1; }
    void f()
    {          
       cout<<"f in B"<<endl; 
    } 
    void g()
    { A::f();} 
private:
    int z;
};
*/
/*
class A0
{
public:
  A0(int x){}      
  int y;
};
class A: virtual public A0
{
public:
  A(int x):A0(x){} 
  int x;    
};
class B: virtual public A0
{
public:
  B(int x):A0(x){} 
  int x;
};
class C: public A, public B
{
  //int x; 
public:
   C(int x):A0(x),A(x),B(x){}       
};
*/
/*
class Matrix
{
public:
   Matrix(int * a,int r, int c)
   {
       p=new int[r*c];
       row=r; col=c;
       int i;
       for(i=0;i<r*c;i++)
        p[i]=a[i];       
   }
   ~Matrix() {delete[] p;}
   void display()
   {
       int i,j;
       for (i=0;i<row;i++){
        for(j=0;j<col;j++)
           cout<<" "<<p[i*col+j];
        cout<<endl;
       } 
   }
   void transport()
   {
        
   }
   
private:
   int * p;
   int row;
   int col;
};
int main()
{    
    int a[6]={1,2,3,4,5,6};
    Matrix m1(a,3,2);
    m1.display();
    //m1.transport();
    //m1.display();
    system("pause");        
}
*/

//class complex
//{
//private:
//    int real,image;
//public:
//    complex(int r=0,int i=0){real=r; image=i;}
//    void display()
//    {cout<<"("<<real<<","<<image<<")";}
//    /*
//    complex operator +(complex c2)
//    {
//        //complex temp;
//        //temp.real=this->real+c2.real;
//        //temp.image=this->image+c2.image;
//        //return temp;  
//        return complex(this->real+c2.real,
//        this->image+c2.image);  
//    }
//    */
//    friend complex operator +(complex c1,complex c2);
//    friend void operator <<(ostream& out,complex c);
//};
//complex operator +(complex c1,complex c2)
//{
//   return complex(c1.real+c2.real,
//        c1.image+c2.image); 
//}
//ostream& operator <<(ostream& out,const complex &c)
//{
//    out<<"("<<c.real<<","<<c.image<<")";
//    return out; 
//}
//int main()
//{    
//    complex c1(2,3),c2(3,4);
//    complex c3;    
//    c3=c1+c2; 
//    //c3= c1.operator +(c2); 
//    //c3= operator +(c1,c2);
//    //c3.display();
//    cout<<c3<<endl; // operator <<(cout,c3);
//    //char s1[10]="abc";
//    //char s2[10]="def";
//    //cout<<s1>s2<<endl;
//    //string s1="abc";
//    //string s2="def";
//    //cout<<s1+s2<<endl; // 运算符重载的技术 
//    system("pause");        
//}
/*
class shape
{
protected:
   int x,y;
public:
   virtual  float Area()=0;
};
class circle: public shape
{
protected:
   int r;
public:
   float Area(){cout<<"circle area"<<endl;}
};
class rectangle: public shape
{
protected:
   int h,w;
public:
   float Area(){cout<<"rectangle area"<<endl;}
};
bool compare(shape &s1,shape &s2)
{
   float a1=s1.Area();
   float a2=s2.Area();  
}

int main()
{    
//    shape *p;
    shape s;
//    p=&s;
//    p->Area();
    circle c;
//    p=&c;
//    p->Area();
    rectangle r;
    
    shape* a[2]={&c,&r};
    int i;
    for (i=0;i<2;i++)
    {
        a[i]->Area();
    } 
    compare(c,r);   
    system("pause");        
}
*/
/*
float add(float x,float y)
{
    return x+y;
}
int addd(int x,int y)
{
    return x+y;
}
*/
/*
template <class T>
T add(T x,T y)
{
   return x+y;
}
template <class T>
T sub(T x,T y)
{
   return x-y;
}
template <typename T>
class A
{
private:
   T item;
};
int main()
{   //cout<< add(1,2)<<endl;
    //cout<< add(1.1,2.2)<<endl; 
    A<int> a;   
    system("pause");        
}
*/
/*
#include <fstream>
int main()
{   
 //   ofstream ofs;
//    ofs.open("aa.txt");
//    //ofs.put('a');
//    //cout<<"李小龙"<<" "<<70<<endl;
//    ofs<<"李小龙"<<" "<<70<<endl;
//    ofs<<"小马哥"<<" "<<80<<endl;
//    ofs.close();

    
    ifstream ifs;
    ifs.open("aa.txt");
    ofstream ofs("bb.txt");
    if (!ifs) // ifs.fail()
    {
       cout<<"file open error!"<<endl;
       system("pause");
       return 0;
    }
    //c=ifs.get()
    //char name[20]; int score;
    char name[50];
    //ifs>>name>>score;
    ifs.getline(name,50);
    int nline=1;
    while(!ifs.eof()) // end of file
    {      
      //cout<<name<<" "<<score<<endl;
      //ofs<<nline++<<name<<" "<<score<<endl;
      cout<<name<<endl;
      ofs<<nline++<<" : "<<name<<endl;
      //ifs>>name>>score;
      ifs.getline(name,50);
    }    
    ifs.close(); 
    ofs.close();
    system("pause");        
}
*/
#include <fstream>
/*
struct student
{
  char name[20];
  int score;     
};
int main()
{   
    struct student s1;
    strcpy(s1.name,"aa");
    s1.score=60;
    fstream ofs;
    ofs.open("student.yangjun",ios_base::binary|ios_base::out);
    //ofs.write((char *)&s1,sizeof(s1));
    ofs.write(reinterpret_cast<char *>(&s1),sizeof(s1));
    ofs.close();
    struct student s2;
    ifstream ifs;
    ifs.open("student.yangjun",ios_base::binary);
    ifs.read((char *)&s2,sizeof(s2));
    cout<<s2.name<<" "<<s2.score<<endl;
    ifs.close();    
    system("pause");        
}
*/
/*
int f()
{
    int a=10,b=1;
    int c;
    //if (b!=0)
//       c=a/b;
//    else
//       cout<<"divide error"<<endl;
    try{
       if (b==0) throw b;
       c=a/b;
       cout<<"success"<<endl;
       return c;    
    }
    catch( int x)
    {
       cout<<"divide error"<<endl;
    }    
}
*/
/*
int f()
{
    int a=10,b=0;
    int c;
    if (b==0) throw 100;
    return a/b;   
}
int f1()
{
    int a=10,b=0;
    int c;
    if (b==0) throw b;
    return a/b;     
}
int main()
{   
    try{
       cout<<f()<<endl; 
       cout<<f1()<<endl;   
    }
    catch( int x )
    {
       cout<<x<<endl;
       cout<<"divide error"<<endl;
    } 
    system("pause");        
}
*/
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
using namespace std;
/*
int main()
{   
    int a[5]={1,2,3,4,5};
    vector<int> s(a,a+5);
    //int s[5];
    //int i;
    //for(i=0;i<5;i++)
    //   s[i]=i;
    ostream_iterator<int> oit(cout,",");
    negate<int> f;
    //transform(s,s+5,oit);
    vector<int>::iterator vit= s.begin();
    s.insert(s.begin()+2,6);
    //sort(s.begin(),s.end(),greater<int>());
    //copy(a,a+5,s.begin());
    copy(s.begin(),s.end(),oit);
    //transform(s.begin(),s.end(),oit,f);
    //transform(s.begin(),s.end(),
    //ostream_iterator<int>(cout," "),
    //negate<int>());
    cout<<endl;
    vit=find(s.begin(),s.end(),7);
    if(vit==s.end()){
       cout<<"not find"<<endl;
    }else
       cout<<"find in "<<vit-s.begin()+1<<endl;
    system("pause");        
}
*/
#include <queue>
using namespace std;
int main()
{   
    queue<int> q; int a;
    cout<<q.empty()<<endl;
    q.push(5); cout<<q.empty()<<endl;
    q.push(3); cout<<q.size()<<endl;
    cout<<(a=q.front())<<endl; q.pop(); 
    cout<<q.size()<<endl;
    
    system("pause");        
}

