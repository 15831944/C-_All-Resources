// 2010-11-1
/*
int * p;
int * *p;
void f(int *p)
int * f()
int (*p)()
int * p[3]
int (*p)[3]
const int *p
int const *p

*/
#include <iostream>
using namespace std;
/*
class Point{
int x,y;
public:
	Point(int x,int y)
	{this->x=x;this->y=y;}
	void out(){ cout<<x<<" "<<y<<endl;}
};
#include <iostream>
void main()
{
	Point p(3,4);
	p.out();
	Point p1(5,7);
}
*/
/*
this��һ����������ĳ�Ա����
�е�ָ��
����ָ������õĶ���
*/
/*
class Point{
int x,y;
public:
	Point(int x,int y)
	{this->x=x;this->y=y;}
	Point(){x=0;y=0;}
    Point( Point & p1)
	{ x=p1.x+1; y=p1.y+1;}
	
	~Point(){cout<<"Bay Bay!"<<endl;}
	void out(){ cout<<x<<" "<<y<<endl;}
};
*/
/*
void main()
{
	Point *p=new Point;
	p->out();
	delete p;
}
*/
/*
ע��:
��̬���������ʱ��
Ҫ���ö�Ӧ��Ĺ��캯��
*/
//2010-11-03
//6_20.cpp
/*
#include <iostream>
#include <vector>
using namespace std;

//��������arr��Ԫ�ص�ƽ��ֵ
double average(const vector<double> & arr) {
	double sum = 0;
	for (unsigned i = 0; i < arr.size(); i++)
		sum += arr[i];
	return sum / arr.size();
}

int main() {
	unsigned n;
	cout << "n = ";
	cin >> n;

	vector<double> arr(n);	//�����������
	cout << "Please input " << n << " real numbers:" << endl;
	for (unsigned i = 0; i < n; i++)
		cin >> arr[i];

	cout << "Average = " << average(arr) << endl;
	return 0;
}
//Ĭ�ϵĸ��ƹ��캯��
//���ܴ����Ĵ�������
�������û��ʵ���Լ��ĸ��ƹ��캯��
ϵͳ���ṩһ��Ĭ�ϵĸ��ƹ��캯������
ʵ�����ݳ�Ա�Ķ�Ӧ���ƹ���
�������ʵ���Լ��ĸ��ƹ��캯������ô
�Ͳ�����Ĭ�ϵĸ��ƹ��캯��
*/
/*
class Point{
int x,y;
public:
	Point(int x,int y)
	{this->x=x;this->y=y;}
	Point(){x=0;y=0;}
    Point( Point & p1)
	{ x=p1.x+1; y=p1.y+1;}
	
	~Point(){cout<<"Bay Bay!"<<endl;}
	void out(){ cout<<x<<" "<<y<<endl;}
};

void main()
{
	Point p1(3,4);
	Point p2(p1); //Point p2=p1;
	p2.out();
}
*/
//6_21.cpp
/*
#include <iostream>
#include <cassert>
using namespace std;

class Point {
public:
	Point() : x(0), y(0) {
		cout<<"Default Constructor called."<<endl;
	}

	Point(int x, int y) : x(x), y(y) {
		cout<< "Constructor called."<<endl;
	}

	~Point() { cout<<"Destructor called."<<endl; }

	int getX() const { return x; }

	int getY() const { return y; }

	void move(int newX, int newY) {
		x = newX;
		y = newY;
	}
private:
	int x, y;
};

//��̬������
class ArrayOfPoints {
public:
	ArrayOfPoints(int size) : size(size) {
		points = new Point[size];
	}

	~ArrayOfPoints() {
		cout << "Deleting..." << endl;
		delete[] points;     
	}

	//����±�Ϊindex������Ԫ��
	Point &element(int index) {
		assert(index >= 0 && index < size);	//��������±겻��Խ�磬������ֹ
		return points[index];
	}
private:
	Point *points;	//ָ��̬�����׵�ַ
	int size;		//�����С
};
//��̬������ڴ�
//�ͷ�֮�󲻿������ͷ�
void main() {

	int *p=new int;
	delete p;
	delete p;
	return;
	int count;
	cout << "Please enter the count of points: ";
	cin >> count;
	ArrayOfPoints pointsArray1(count);		//������������
	pointsArray1.element(0).move(5,10);
	pointsArray1.element(1).move(15,20);
	
	ArrayOfPoints pointsArray2 = pointsArray1; //�����������鸱��
	cout << "Copy of pointsArray1:" << endl;
	cout << "Point_0 of array2: " << pointsArray2.element(0).getX() << ", "
		<< pointsArray2.element(0).getY() << endl;
	cout << "Point_1 of array2: " << pointsArray2.element(1).getX() << ", "
		<< pointsArray2.element(1).getY() << endl;

	pointsArray1.element(0).move(25, 30);
	pointsArray1.element(1).move(35, 40);
	cout << "After the moving of pointsArray1:" << endl;
	cout << "Point_0 of array2: " << pointsArray2.element(0).getX() << ", "
		<< pointsArray2.element(0).getY() << endl;
	cout << "Point_1 of array2: " << pointsArray2.element(1).getX() << ", "
		<< pointsArray2.element(1).getY() << endl;

	return ;
}
//string ��
string s1="abc";
cout<<s1;
cin>>s1;
s1=s1+"def";
*/
//6_23.cpp
#include <cstring>
#include <iostream>
using namespace std;

//����value��ֵ���true��false��titleΪ��ʾ��
inline void test(const char *title, bool value) {
	cout << title << " returns " << (value ? "true" : "false") << endl;
}

int main() {
	string s1 = "DEF";
	cout << "s1 is " << s1 << endl;

	string s2;
	cout << "Please enter s2: ";
	cin >> s2;
	cout << "length of s2: " << s2.length() << endl;

	//�Ƚ�������Ĳ���
	test("s1 <= \"ABC\"", s1 <= "ABC"); 
	test("\"DEF\" <= s1", "DEF" <= s1);
	//����������Ĳ���
	s2 += s1;
	cout << "s2 = s2 + s1: " << s2 << endl;
	cout << "length of s2: " << s2.length() << endl;
	return 0;
}

