#include<iostream>
using namespace std;
enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};
class CPU{//CPU��Ķ��� 
	public://�ⲿ�ӿ�
	 	CPU (int Nrank,int Nfrequency,float Nvoltage);//���캯��
		 void run();
		 void stop();
		 ~CPU(){cout<<"�ɹ�������������"<<endl;} 
		 private:
		 	CPU_Rank rank;
		 	int frequency;
		 	float voltage;
};
void CPU::run()
{
	cout<<"����ʼִ��"<<endl;
}
void CPU::stop()
{
	cout<<"����ִֹͣ��"<<endl;
}
CPU::CPU(int Nrank,int Nfrequency,float Nvoltage)
{
	rank=(CPU_Rank)Nrank;
	frequency=Nfrequency;
	voltage=Nvoltage;
	cout<<"�ɹ����ù��캯��"<<endl;
	cout<<"�ȼ���Rank��"<<CPU_Rank(rank)<<endl;
	cout<<"Ƶ�ʣ�frequency��"<<frequency<<endl;
	cout<<"��ѹ��voltage��"<<voltage<<endl; 
}
int main()
{
	CPU_Rank rank;
	int r,f;
	float v;
	cout<<"����ȼ���Ƶ�ʣ���ѹ��";
	cin>>r>>f>>v;
	cout<<"rank="<<r<<"frequency="<<f<<"   "<<"voltage="<<v<<endl;
	CPU CPU(r,f,v);
	CPU.run();
	CPU.stop(); 
	return 0;
}

