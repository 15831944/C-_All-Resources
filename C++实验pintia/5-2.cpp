#include <iostream>
using namespace std;
class Vehicle{
public:
	virtual void run(){
		cout<<"Vehicle run"<<endl;
	}
};
class Bicycle:public Vehicle
{
public:
	void run(){
		cout<<"Bicycle run"<<endl;
	}	
};
class Motorcar:public Vehicle{
public:
	void run(){
		cout<<"Motorcar run"<<endl;
	}
}; 
void run(Vehicle & vehicle){
	vehicle.run();
}
int main(int argc, char const *argv[])
{
	Vehicle veh;
	Bicycle bic;
	Motorcar mot;
	run(veh);
	run(bic);
	run(mot);
	return 0;
}
