/*  HELLO.C -- Hello, world */

#include "stdio.h"
#include "conio.h"
class CLine;
class CPoint{
   double x;
   double y;
public:
   CPoint(double x1=0,double y1=0);
   double Distance(const CPoint &p1);
   friend CLine;
};
CPoint:: CPoint(double x1,double y1)
{
    x=x1; y=y1;
}
double CPoint::Distance(const CPoint &p1)
{
    return sqrt((x-p1.x)*(x-p1.x)+(y-p1.y)*(y-p1.y));
}
class CLine{
   CPoint p1,p2;
   public:
   CLine(const CPoint &pa,const CPoint &pb){
   p1=pa; p2=pb;
   }
   bool IncludePoint(const CPoint &p);
   bool Cross(const CLine &l1);
   bool Parrell(const CLine &l1);

};
bool CLine::IncludePoint(const CPoint &p)
{
   bool bInclude=false;
   if ((p.y-p1.y)*(p2.x-p1.x)==(p2.y-p1.y)*(p.x-p1.x)){
      double pp1=p.Diatance(p1);
      double pp2=p.Diatance(p2);
      double p1p2=p1.Diatance(p2);
      if ((pp1<=p1p2)&&(pp2<=p1p2))  bInclude=true;
   }
   return bInclude;
}
bool CLine::Parrell(const CLine &l1){
   return (l1.p2.y-l1.p1.y)*(p2.x-p1.x)==(p2.y-p1.y)*(l2.p2.x-l2.p1.x);
}

bool CLine::Cross(const CLine &l1){
   bool bCross=false;
   if (Parrell(l1)){
      if ((IncludePoint(l1.p1))||(IncludePoint(l1.p2))) return  bCross=true;
   }else{
   double cx,cy; double k;
   if ((p2.x-p1.x)==0){
      cx=p1.x;
      k=(l1.p2.y-l1.p1.y)/(l1.p2.x-l1.p1.x);
      cy=k*(cx-l1.p1.x) + l1.p1.y;
   }else if ((l1.p2.x-l1.p1.x)==0 ){
      cx=l1.p1.x;
      k=(p2.y-p1.y)/(p2.x-p1.x);
      cy=k*(cx-p1.x)+p1.y;
   }else if
   {
      double
   }

   }
}
void main()
{

    CPoint p(6,9);
    CPoint p1(2,5); CPoint p2(6,3);
    CLine l(p1,p2);
    cout<<l.IncludePoint(p)<<endl;
    getch();
}
