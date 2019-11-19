#include<iostream>
using namespace std;
class vehicle{
public:
	virtual void Run()
	{
		cout<<"vehicle Run::display()"<<endl;
	}
	virtual void Stop()
	{
		cout<<"vehicle Stop::display()"<<endl;
	}
};
class bicycle:virtual public vehicle{
public:
	void Run()
	{
		cout<<"bicycle Run::display()"<<endl;
	}
	void Stop()
	{
		cout<<"bicycle Stop::display()"<<endl;
	}
};
class motorcar:virtual public vehicle{
public:
	void Run()
	{
		cout<<"motorcar Run::display()"<<endl;
	}
	void Stop()
	{
		cout<<"motorcar Stop::display()"<<endl;
	}	
};
class motorcycle:public bicycle,public motorcar{
public:
	void Run()
	{
		cout<<"motorcycle Run::display()"<<endl;
		}
		void Stop()
		{
			cout<<"motorcycle Stop::display()"<<endl;
			}	
};
void fun(vehicle *prt)
{
	prt->Run();
	prt->Stop();
}
int main()
{
	vehicle vehicle1,*p;
	bicycle bicycle1;
	motorcar motorcar1;
	motorcycle motorcycle1;
	p=&vehicle1;
	fun(p);
	p=&bicycle1;
	fun(p);
	p=&motorcar1;
	fun(p);
	p=&motorcycle1;
	fun(p);
}
	
