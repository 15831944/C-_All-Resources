#include <iostream>
using namespace std;
struct Student{
int id;
float height;
};
//�ṹ�����ص����ݷ�״��һ��
class CTime{
	int hour; //�����ݳ�Ա�����ԣ�
	int minute;
	int second;
public:// �������� ����
	void SetTime(int h,int m,int s);//��Ա��������
	void ShowTime();
};//��
//�������ԣ�
//������ⲿ�ܷ�ֱ�ӷ�����ĳ�Ա
//�����ڶ���ĺ�������������ĵĳ�Ա����
//��ĳ�Ա�����ݳ�Ա ������Ա
//��ĺ�����Ա��ʵ��
//CTime::���������ʶ��
void CTime::SetTime(int h,int m,int s)
{
	hour=h;minute=m;second=s;
}
void CTime::ShowTime()
{
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}
class CPoint{
public: // �������� ˽��
	int x; int y;
public:
	void SetPoint(int x1,int y1);
	void ShowPoint();
	float distance(CPoint p1);
};
void CPoint::SetPoint(int x1,int y1)
{ x=x1; y=y1;}//ʵ���������xҲ�Ǻ�һ�����������
//���Ǻͷ�����õĶ������
void CPoint::ShowPoint()
{ cout<<"x="<<x<<"y="<<y<<endl;}
float CPoint::distance(CPoint p1)
{
	return (x-p1.x)*(x-p1.x)
}
void main()
{
	CPoint p; // ����ָ�������൱�е�һ������
	p.x=1;
	CPoint p1;
	p1.x=2;
	p.SetPoint(5,0);
	p1.SetPoint(3,0);
	p.ShowPoint();
	p1.ShowPoint();
	return;
	CTime t;
	t.SetTime(12,0,0);
	t.ShowTime();
}
//�಻����װ�����ݣ�����װ��Ϊ����������Ϊ������
//�����������ĳ�����Ƶ�Ŀ��
//�����࣬�ó�����ø���Ȼ��ģ������
//ʹ����Ŀɶ��Ը�ǿ��ʹ��ĳ���ģ�黮�ָ�����
//����Ƹ��Ӻ���
//��ΰ����ǵ�������Ƴ�һ���ࣨ������
//���к�˽�е�����
//��Ƶ�ʱ����Щ������Щ˽�У�
//���еĺ�����Ա Ҳ������������Ľӿڡ�
//������
//��η��ʳ�Ա��
//��η��ʽṹ���Ա�ģ�
//ͨ���������������
//Student s1;
// s1.id;
// CPoint p;
// p.SetPoint(0,0);
// ��Ͷ���Ĺ�ϵ������;��壬���ͺͱ����Ĺ�ϵ
// ��ĳ�Ա֮����Է���
