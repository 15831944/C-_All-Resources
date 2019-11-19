#include<iostream>
using namespace std;
class vehicle{
public:
	vehicle(){}
	~vehicle(){}
	virtual void Run() const{
	cout<<"vehicle start running..."<<endl;
	}
	virtual void Stop() const{
	cout<<"vehicle stop running..."<<endl;
	}	
};
class bicycle:public vehicle{
	public:
		void Run() const{cout<<"bicycle start running..."<<endl;}
		void Stop() const{cout<<"bicycle stop running..."<<endl;}
};
class motorcar:public vehicle{
	public:
		void Run() const{cout<<"motorcar start running..."<<endl;}
		void Stop() const{cout<<"motorcar stop running..."<<endl;}
};
void fun(vehicle *ptr){
		ptr->Run();
		ptr->Stop();
}
int main(){
	vehicle v;
	bicycle b;
	motorcar m;
	fun(&v);
	fun(&b);
	fun(&m);
	return 0;
}
