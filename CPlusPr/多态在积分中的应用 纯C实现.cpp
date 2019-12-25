/*�̲�������ֵĳ��� p324*/
// ����ȫ��C�ķ���ʵ��

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// �Զ�����ֺ���
double f(double x)
{
	//return x;
	return log(1.0+x)/(1.0+x*x);
} 
// ���η��󶨻��ֺ���
// ��a��b, eps: ��С��� 
double trapz(double a,double b,double eps)
{
	int n = 1; //��������
	double h = b-a; // ���䳤��
	double tn = h*(f(a)+f(b))/2; // ���ֳ�ֵ
	double t2n; // 2������Ļ���ֵ
	// ��t2n��tn�Ĳ�ֵ�㹻Сʱ�˳�����
	bool done = false; // �Ƿ���� 
	while(!done){
		double sum = 0;
		for(int k=0;k<n;k++){ 
			double x = a+(k+0.5)*h;
			sum += f(x);
		}
		t2n = (tn+h*sum)/2; // ���Ƶ�����ʽ 
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
