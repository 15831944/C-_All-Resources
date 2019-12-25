// 实验4 继承 狗继承动物类 
#include <iostream>
#include <string>
using namespace std;
class Animal{
	int age;
public:
	Animal(int age):age(age){
	}
	int getAge(){
		return age;
	}
}; 
class Dog:Animal{
	string color;
public:
	Dog(int age,string color):Animal(age),color(color){
	}
	void showInfor(){
		cout<<"age:"<<getAge()<<endl;
		cout<<"color:"<<color<<endl;
	}
	
};

int main(){
	Animal ani(5);
	cout<<"age of ani:"<<ani.getAge()<<endl;
	Dog dog(5,"black");
	cout<<"infor of dog:"<<endl;
	dog.showInfor();
}
