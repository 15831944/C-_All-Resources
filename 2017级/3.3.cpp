#include <iostream>
using namespace std;
void swap(int &a,int &b){
	int t = a;
	a = b;
	b = t;
}

void swap1(int *pa,int *pb){
	int t = *pa;
	*pa = *pb;
	*pb = t;
}
/*
struct Student{
	int id;
	int age;
	int sex;
	int score;
};
*/
class Student{
public:
	int id;
	int age;
	int score;
	void eat();
private:
	int money;
};

void Student::eat(){
	if (money>100)
		cout<<id<<" 去馆子"<<endl;
	else
		cout<<id<<" 去食堂"<<endl;
}

int main(){
	Student s;
	s.id = 7;
	s.age = 20;
	cout<< s.id <<endl;
	//Student.eat();
	s.money = 120;
	s.eat();
}

/*
int main(){
	int a = 7, b = 8;
	//swap(a,b);
	//cout<<a<<" "<<b<<endl;
	swap1(&a,&b);
	cout<<a<<" "<<b<<endl;
}
*/
