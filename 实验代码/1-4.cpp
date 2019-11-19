#include<iostream>
using namespace std;
enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};
class CPU{//CPU��Ķ��� 
	public://�ⲿ�ӿ� 
		CPU(int i){
			cpu=i;
			cout<<"�ɹ�����CPU���캯��"<<endl;
		}
		~CPU(){cout<<"�ɹ�����CPU��������"<<endl;}
		private:
			float cpu;
};
class RAM{//CPU��Ķ��� 
	public://�ⲿ�ӿ� 
	RAM(int i){
		ram=i;
		cout<<"�ɹ�����RAM���캯��"<<endl;
	}
	~RAM(){
		cout<<"�ɹ�����RAM��������"<<endl;
	}
	private:
		float ram;
};
class CDROM{
	public:
		CDROM(int i){
			cdrom=i;
			cout<<"�ɹ�����CDROM���캯��"<<endl;
		}
		~CDROM(){
			cout<<"�ɹ�����CDROM��������"<<endl; 
		}
		private:
			float cdrom;
};
class Computer{//CPU��Ķ��� 
	public://�ⲿ�ӿ� 
		Computer(CPU Ncpu,RAM Nram,CDROM Ncdrom);
		void run();
		void stop();
		~Computer(){cout<<"�ɹ�����Computer����"<<endl;}
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
	cout<<"Computer ����ʼִ��"<<endl;
}
void Computer::stop()
{
	cout<<"Computer ����ִֹͣ��"<<endl;
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
