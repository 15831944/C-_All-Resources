/*教材上求积分的程序 p324*/
// 先完全用C的方法实现

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// 自定义积分函数
double f(double x)
{
	//return x;
	return log(1.0+x)/(1.0+x*x);
} 
// 梯形法求定积分函数
// 从a到b, eps: 最小误差 
double trapz(double a,double b,double eps)
{
	int n = 1; //区间数量
	double h = b-a; // 区间长度
	double tn = h*(f(a)+f(b))/2; // 积分初值
	double t2n; // 2分区间的积分值
	// 当t2n和tn的差值足够小时退出迭代
	bool done = false; // 是否完成 
	while(!done){
		double sum = 0;
		for(int k=0;k<n;k++){ 
			double x = a+(k+0.5)*h;
			sum += f(x);
		}
		t2n = (tn+h*sum)/2; // 递推迭代公式 
		double dis = fabs(t2n-tn);
		if(dis<eps)
			done = true;
		else{
			n = 2*n;
			tn = t2n;
			h = h/2;
		}
	}
	return t2n;	 
} 
#define EPS 1e-7
int main()
{
	double result=0;
	result = trapz(0,2,EPS);
	printf("%f\n",result);
	system("pause");
}
