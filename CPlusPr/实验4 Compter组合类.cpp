//用于演示类的组合

#include <iostream>
using namespace std;

enum CPU_Rank {P1=1,P2,P3,P4,P5,P6,P7};
class CPU
{
private:
	CPU_Rank rank;
	int frequency;
	float voltage;
public:
      CPU (CPU_Rank r, int f, float v)
	{
		rank = r;
		frequency = f;
		voltage = v;
		cout << "构造了一个CPU!" << endl;
	}
	CPU ()
	{
		rank = P1;
		frequency = 2;
		voltage = 100;
		cout << "构造了一个CPU!" << endl;
	}
	CPU (CPU & oldcpu)
	{
		rank = oldcpu.rank;
		frequency = oldcpu.frequency;
		voltage = oldcpu.voltage;
		cout << "复制构造了一个CPU!" << endl;
	}
    ~CPU () { cout << "析构了一个CPU!" << endl; }

	void showinfo(){
		cout<<"rank:"<<rank<<endl;
		cout<<"frequency:"<<frequency<<endl;
		cout<<"voltage:"<<voltage<<endl;		
	}

};

class RAM
{
private:
	int volumn; //容量
public:
    RAM ()
	{
		volumn=1;
		cout << "构造了一个RAM!" << endl; 
	}
	RAM (int v)
	{
		volumn=v;
		cout << "构造了一个RAM!" << endl; 
	}
	RAM (RAM &r)
	{
		volumn=r.volumn;
		cout << "复制构造了一个RAM!" << endl; 
	}
	~RAM () 
	{
		cout << "析构了一个RAM!" << endl;
	}
    void showinfo(){ cout<<"volumn:"<<volumn<<" GB"<<endl; }   
};
class CDROM
{
	int speed;
public:
    CDROM () {
		speed=16;
		cout << "构造了一个CDROM!" << endl; 
	}
	CDROM (int s) {
		speed=s;
		cout << "构造了一个CDROM!" << endl; 
	}
	CDROM (CDROM &c) {
		speed=c.speed;
		cout << "复制构造了一个CDROM!" << endl; 
	}
	~CDROM ()
	{ 
		cout << "析构了一个CDROM!" << endl; 
	} 
	void showinfo(){ cout<<"speed:"<<speed<<endl; } 
};

class COMPUTER
{
private:
	CPU cpu;
	RAM ram;
	CDROM cdrom;
public:
	COMPUTER()
	{
		cout << "不带参数构造了一个COMPUTER!" << endl;
	}
    COMPUTER(CPU_Rank r, int f, float v,int rv, int cds) //带参数
		:cpu(r,f,v),ram(rv),cdrom(cds) //初始化列表构造内部对象
	{
		cout << "带参数构造了一个COMPUTER!" << endl;
	}
    COMPUTER(COMPUTER &oldc):cpu(oldc.cpu),ram(oldc.ram),cdrom(oldc.cdrom){
		cout << "复制构造了一个COMPUTER!" << endl;
	}
	~COMPUTER ()
	{ 
		cout << "析构了一个COMPUTER!" << endl;

	}
	void showinfo(){ 
		cout<<"cpu parameter:"<<endl;
		cpu.showinfo();
		cout<<"ram parameter:"<<endl;
		ram.showinfo();
		cout<<"cdrom parameter:"<<endl;
		cdrom.showinfo();
	} 
  
};


void main()
{
	COMPUTER cpt1(P6,4.0,200,60,32);  //测试带参数构造
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
/*
构造了一个CPU!
构造了一个RAM!
构造了一个CDROM!
带参数构造了一个COMPUTER!
cpt1's parameter:
cpu parameter:
rank:6
frequency:4
voltage:200
ram parameter:
volumn:60 GB
cdrom parameter:
speed:32
------------------------------
构造了一个CPU!
构造了一个RAM!
构造了一个CDROM!
不带参数构造了一个COMPUTER!
cpt2's parameter:
cpu parameter:
rank:1
frequency:2
voltage:100
ram parameter:
volumn:1 GB
cdrom parameter:
speed:16
------------------------------
复制构造了一个CPU!
复制构造了一个RAM!
复制构造了一个CDROM!
复制构造了一个COMPUTER!
cpt3's parameter:
cpu parameter:
rank:6
frequency:4
voltage:200
ram parameter:
volumn:60 GB
cdrom parameter:
speed:32
------------------------------
析构了一个COMPUTER!
析构了一个CDROM!
析构了一个RAM!
析构了一个CPU!
析构了一个COMPUTER!
析构了一个CDROM!
析构了一个RAM!
析构了一个CPU!
析构了一个COMPUTER!
析构了一个CDROM!
析构了一个RAM!
析构了一个CPU!
Press any key to continue
*
注意消亡的顺序
如果要表示设备的品牌，如何修改程序？
/