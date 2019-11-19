#include<iostream>
#include<cmath>
#include"point.h"
using namespace std;

float lineFit(const Point POints[],int nPoint);
int main()
{
	Point p[10]={Point(6,10),Point(14,20),Point(26,30),Point(33,40),Point(46,50),Point(54,60),Point(67,70),Point(75,80),Point(84,90),Point(100,100)};
	float r=lineFit(p,10);
	cout<<"���ϵ��Ϊ:"<<r<<endl;
	return 0;
}

//ֱ���������
//Points�㼯�ϣ�nPoint����
float lineFit(const Point Points[],int nPoint)
{
	float avgX=0,avgY=0;
	float lxx=0,lyy=0,lxy=0;
	int i;
	for(i=0;i<nPoint;i++)//����x��yƽ��ֵ
	{
		avgX+=Points[i].getX()/nPoint;
		avgY+=Points[i].getY()/nPoint;
	}
	for(i=0;i<nPoint;i++)
	{
		lxx+=(float)pow((Points[i].getX()-avgX),2);
        lyy+=(float)pow((Points[i].getY()-avgY),2);
		lxy+=(Points[i].getX-avgX)*(Points[i].getY-avgY);
	}
	cout<<"��Щ���ܱ�ֱ��:y=ax+b���"<<endl;
	cout<<"a="<<lxy/lxx<<","<<endl;
	cout<<"b="<<avgY-lxy*avgX/lxx<<endl;
	return static_cast<float>(lxy/sqrt(lxx*lyy));//�������ϵ��
}