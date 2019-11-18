#include<iostream>
#include<cmath>
using namespace std;
class Point{//Point�ඨ�� 
public:
	Point(int xx=0,int yy=0){
		x=xx;
		y=yy;
	}
	Point(Point &p);
	int getX(){return x;}
	int getY(){return y;}
private:
	int x,y;
};
Point::Point(Point &p){//�������캯����ʵ�� 
	x=p.x;
	y=p.y;	
}
//������ 
class Line{//Line��Ķ��� 
public://�ⲿ�ӿ�
	Line(Point xp1,Point xp2);
	Line(Line &1);
	double  getLen(){return len;}
private:
	Point p1,p2;//Point��Ķ���p1,p21
	double len; 
};
//�����Ĺ��캯��
Line::Line(Point &xp1,Point &xp2):p1(xp1),p2(xp2){
	cout<<"Calling constrctor of Line"<<endl;
	double x=(double)(p1.getX()-p2.getX());
	double y=static_cast<double>(p1.getY()-p2.getY());
	len=sqrt(x*x+y*y);
	//static_cast<double>
}
//�����Ŀ������캯��
Line::Line(Line &l):p1(l.p1),p2(l.p2){
	cout<<"Calling the copy constructor of Line" << endl;
	len=l.len;
}
int main(){
	Point myp1(1,2),myp2(4,5);//����Point��Ķ���
	Line line(myp1,myp2);//����Line��Ķ���
	Line line2(line);//���ÿ������캯������һ���¶���
	cout<<"The length of the line is:";
	cout<<"lin.getLen()"<<endl;
	cout<< "The length of the line2 is: ";
	cout << line2.getLen() << endl;
	return 0; 
} 
