#include<iostream>
#include<cmath>
#include"point.h"
using namespace std;

float lineFit(const Point POints[],int nPoint);
int main()
{
	Point p[10]={Point(6,10),Point(14,20),Point(26,30),Point(33,40),Point(46,50),Point(54,60),Point(67,70),Point(75,80),Point(84,90),Point(100,100)};
	float r=lineFit(p,10);
	cout<<"相关系数为:"<<r<<endl;
	return 0;
}

//直线线性拟合
//Points点集合，nPoint点数
float lineFit(const Point Points[],int nPoint)
{
	float avgX=0,avgY=0;
	float lxx=0,lyy=0,lxy=0;
	int i;
	for(i=0;i<nPoint;i++)//计算x，y平均值
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
	cout<<"这些点能被直线:y=ax+b拟合"<<endl;
	cout<<"a="<<lxy/lxx<<","<<endl;
	cout<<"b="<<avgY-lxy*avgX/lxx<<endl;
	return static_cast<float>(lxy/sqrt(lxx*lyy));//返回相关系数
}