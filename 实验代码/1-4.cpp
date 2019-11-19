#include<iostream>
using namespace std;
enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};
class CPU{//CPU类的定义 
	public://外部接口 
		CPU(int i){
			cpu=i;
			cout<<"成功调用CPU构造函数"<<endl;
		}
		~CPU(){cout<<"成功调用CPU析构函数"<<endl;}
		private:
			float cpu;
};
class RAM{//CPU类的定义 
	public://外部接口 
	RAM(int i){
		ram=i;
		cout<<"成功调用RAM构造函数"<<endl;
	}
	~RAM(){
		cout<<"成功调用RAM析构函数"<<endl;
	}
	private:
		float ram;
};
class CDROM{
	public:
		CDROM(int i){
			cdrom=i;
			cout<<"成功调用CDROM构造函数"<<endl;
		}
		~CDROM(){
			cout<<"成功调用CDROM析构函数"<<endl; 
		}
		private:
			float cdrom;
};
class Computer{//CPU类的定义 
	public://外部接口 
		Computer(CPU Ncpu,RAM Nram,CDROM Ncdrom);
		void run();
		void stop();
		~Computer(){cout<<"成功调用Computer函数"<<endl;}
	private:
		CPU cpu;RAM ram;CDROM cdrom;
};
Computer::Computer(CPU Ncpu,RAM Nram,CDROM Ncdrom):cpu(Ncpu),ram(Nram),cdrom(Ncdrom)
{
	cpu=Ncpu;
	ram=Nram;
	cdrom=Ncdrom;
	cout<<"Calling constructor of Computer"<<endl;
}
void Computer::run()
{
	cout<<"Computer 程序开始执行"<<endl;
}
void Computer::stop()
{
	cout<<"Computer 程序停止执行"<<endl;
}
int main()
{
	int i,j,k;
	cin>>i>>j>>k;
	CPU a(i);
	RAM b(j);
	CDROM c(k);
	Computer com(a,b,c);
	com.run();
	com.stop();
	return 0;
}
