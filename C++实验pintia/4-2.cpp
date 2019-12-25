// 实验4 虚基类 交通工具 车  自行车  汽车  摩托车 
#include <iostream>
using namespace std;
class Vehicle{
public:
	int speed;
	int weight;
public:
	Vehicle(int speed,int weight):speed(speed),weight(weight){
	}
}; 
class Bicycle:public virtual Vehicle{
public:
	int height;
	Bicycle(int speed,int weight,int height):Vehicle(speed,weight),height(height){

	}
};
class Motorcycle:public virtual Vehicle{
public:
	int seatNum;
	Motorcycle(int speed,int weight,int seatNum):Vehicle(speed,weight),seatNum(seatNum){

	}
};
class Motorcar:public Bicycle,public Motorcycle
{
public:
	Motorcar(int speed,int weight,int height,int seatNum):Vehicle(speed,weight),Bicycle(speed,weight,height),
		Motorcycle(speed,weight,seatNum){

	}	
};
int main(){
	Motorcar  moto(30,50,120,5);
	cout<<"speed "<<moto.speed<<endl;
	cout<<"weight "<<moto.weight<<endl;
	cout<<"height "<<moto.height<<endl;
	cout<<"seatNum "<<moto.seatNum<<endl;
}
