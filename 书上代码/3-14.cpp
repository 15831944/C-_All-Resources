#include<iostream>
using namespace std;
const double PI=3.14159265358979;
//��������������Բ�İ뾶��������� 
inline double calArea(double radius){
	return PI*radius*radius;
}
int main(){
	double r=3.0;
	//��������������Բ�����������ʱ�˴����滻ΪcalArea���������
	double area=calArea(r);
	cout<<area<<endl; 
	return 0;
}
//�����������Լ���ϵͳ�Ŀ���
//һ�㽫Ƶ�����õ��Ǽ�̵ĺ��������������� 
