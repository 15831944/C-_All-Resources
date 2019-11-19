#include<iostream>
using namespace std;
enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};
class CPU{//CPU类的定义 
	public://外部接口
	 	CPU (int Nrank,int Nfrequency,float Nvoltage);//构造函数
		 void run();
		 void stop();
		 ~CPU(){cout<<"成功调用析构函数"<<endl;} 
		 private:
		 	CPU_Rank rank;
		 	int frequency;
		 	float voltage;
};
void CPU::run()
{
	cout<<"程序开始执行"<<endl;
}
void CPU::stop()
{
	cout<<"程序停止执行"<<endl;
}
CPU::CPU(int Nrank,int Nfrequency,float Nvoltage)
{
	rank=(CPU_Rank)Nrank;
	frequency=Nfrequency;
	voltage=Nvoltage;
	cout<<"成功调用构造函数"<<endl;
	cout<<"等级（Rank）"<<CPU_Rank(rank)<<endl;
	cout<<"频率（frequency）"<<frequency<<endl;
	cout<<"电压（voltage）"<<voltage<<endl; 
}
int main()
{
	CPU_Rank rank;
	int r,f;
	float v;
	cout<<"输入等级，频率，电压：";
	cin>>r>>f>>v;
	cout<<"rank="<<r<<"frequency="<<f<<"   "<<"voltage="<<v<<endl;
	CPU CPU(r,f,v);
	CPU.run();
	CPU.stop(); 
	return 0;
}

