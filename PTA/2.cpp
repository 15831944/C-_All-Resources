#include<iostream>
using namespace std;
enum CPU_Rank {P1 = 1, P2, P3, P4, P5, P6, P7};
class CPU{
private:
	CPU_Rank rank;
	int frequency;
	float voltage;
public:
	CPU(int r,int f,double v):rank((CPU_Rank) r),frequency(f),voltage(v){
		cout<<"create a CPU!"<<endl;
	}
	CPU(){
		rank=P1;
		frequency=2;
		voltage=100;
		cout<<"create a CPU!"<<endl;
		}
		CPU(CPU &a){
			rank=a.rank;
			frequency=a.frequency;
			voltage=a.voltage;
			cout<<"create a CPU by copy!"<<endl; 
		}
		~CPU(){cout<<"desturct a CPU!"<<endl;}
		void showinfo();
};
void CPU::showinfo(){
			cout<<"cpu parameter:"<<endl;
			cout<<"rank"<<rank<<endl;
			cout<<"frequency"<<frequency<<endl;
			cout<<"voltage"<<voltage<<endl;
		}
		
class RAM{
private:
	int volumn;
public:
	RAM(int p):volumn(p){
		cout<<"create a RAM!"<<endl;
	}
	RAM(){
		volumn=1;
		cout<<"create a RAM!"<<endl;
	}
	RAM(RAM &a){
		volumn=a.volumn;
		cout<<"create a RAM by copy!"<<endl;
	}
	~RAM(){cout<<"desturct a RAM!"<<endl;}
	void showinfo();
};
void RAM::showinfo(){
	cout<<"ram parameter:"<<endl;
	cout<<"volumn:"<<volumn<<" GB";
}
class CDROM{
private:
	int speed;
public:
	CDROM(int p):speed(p){
		cout<<"create a CDROM!"<<endl;
	}
	CDROM(){
		speed=1;
		cout<<"create a CDROM!"<<endl;
	}
	CDROM(CDROM &a){
		speed=a.speed;
		cout<<"create a CDROM by copy!"<<endl;
	}
	~CDROM(){cout<<"destruct a CDROM!"<<endl;}
	void showinfo();
};
void CDROM::showinfo(){
	cout<<"cdrom parameter:"<<endl;
	cout<<"speed:"<<speed<<endl;
}
class COMPUTER{
private:
	CPU cpu;
	RAM ram;
	CDROM cdrom;
public:
	COMPUTER(int r,int f,float v,int p1,int p2):cpu(r,f,v),ram(p1),cdrom(p2){
		cout<<"create a COMPUTER with para!"<<endl;
	}
	COMPUTER():cpu(1,2,100),ram(1),cdrom(16){
		cout<<"no para to create a COMPUTER!"<<endl;
	}
	COMPUTER(COMPUTER &a):cpu(a.cpu),ram(a.ram),cdrom(a.cdrom){
		cout<<"create a COMPUTER by copy!"<<endl;
	}
	~COMPUTER(){cout<<"destruct a COMPUTER!"<<endl;}
	void showinfo();
};
void COMPUTER::showinfo(){
	cpu.showinfo();
	ram.showinfo();
	cdrom.showinfo();
}
int main()
{
	COMPUTER cpt1(6,4.0,200,60,32);  //测试带参数构造
	cout<<"cpt1's parameter:"<<endl;
	cpt1.showinfo();
	cout<<"------------------------------"<<endl;
	COMPUTER cpt2; //测试不带参数构造
	cout<<"cpt2's parameter:"<<endl;
	cpt2.showinfo();
	cout<<"------------------------------"<<endl;
    COMPUTER cpt3(cpt1); //测试复制构造
	cout<<"cpt3's parameter:"<<endl;
	cpt3.showinfo();
	cout<<"------------------------------"<<endl;	
}


