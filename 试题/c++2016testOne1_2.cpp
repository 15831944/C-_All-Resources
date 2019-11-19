#include <iostream>
#include <cmath>
using namespace std;
class CPoint{
	int x,y;
public:
	CPoint(int x1=0,int y1=0){
		x = x1; 
		y = y1;
	}
	CPoint(CPoint & p1){
		x = p1.x;
		y = p1.y;
	}
	friend class CRectange;
};
class CRectange{
	CPoint p1,p2;
	static int count;
public:
	CRectange(CPoint & a, CPoint & b):p1(a),p2(b){
		count++;	
	}
	CRectange(CRectange &l):p1(l.p1),p2(l.p2){
		count++;
	}
	int GetArea(){
		int xx = abs(p1.x - p2.x);
		int yy = abs(p1.y - p2.y);
		return xx * yy;
	}
	static int ShowCount(){
		return count;
	}
};
int CRectange::count = 0;
int main(){
 CPoint p1(1,1);
 CPoint p2(4,5);
 CRectange rec1(p1,p2);
 cout<<"The area of rec1 is: "<<rec1.GetArea()<<endl;
 CPoint p3(2,2);
 CRectange rec2(rec1);
 cout<<"The count of rectangle is: "<<CRectange::ShowCount()<<endl; 
 return 0;
}

