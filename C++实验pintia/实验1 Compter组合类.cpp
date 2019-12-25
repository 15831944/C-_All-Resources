//用于演示类的组合

#include <iostream>
using namespace std;

class CPU
{
private:
	int rank;
	int frequency;
	float voltage;
public:
      CPU (int r, int f, float v)
	{
		rank = r;
		frequency = f;
		voltage = v;
		cout << "create a CPU!" << endl;
	}
	CPU ()
	{
		rank = 1;
		frequency = 2;
		voltage = 100;
		cout << "create a CPU!" << endl;
	}
	CPU (CPU & oldcpu)
	{
		rank = oldcpu.rank;
		frequency = oldcpu.frequency;
		voltage = oldcpu.voltage;
		cout << "create a CPU by copy!" << endl;
	}
    ~CPU () { cout << "desturct a CPU!" << endl; }

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
		cout << "create a RAM!" << endl; 
	}
	RAM (int v)
	{
		volumn=v;
		cout << "create a RAM!" << endl; 
	}
	RAM (RAM &r)
	{
		volumn=r.volumn;
		cout << "create a RAM by copy!" << endl; 
	}
	~RAM () 
	{
		cout << "desturct a RAM!" << endl;
	}
    void showinfo(){ cout<<"volumn:"<<volumn<<" GB"<<endl; }   
};
class CDROM
{
	int speed;
public:
    CDROM () {
		speed=16;
		cout << "create a CDROM!" << endl; 
	}
	CDROM (int s) {
		speed=s;
		cout << "create a CDROM!" << endl; 
	}
	CDROM (CDROM &c) {
		speed=c.speed;
		cout << "create a CDROM by copy!" << endl; 
	}
	~CDROM ()
	{ 
		cout << "destruct a CDROM!" << endl; 
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
		cout << "no para to create a COMPUTER!" << endl;
	}
    COMPUTER(int r, int f, float v,int rv, int cds) //带参数
		:cpu(r,f,v),ram(rv),cdrom(cds) //初始化列表构造内部对象
	{
		cout << "create a COMPUTER with para!" << endl;
	}
    COMPUTER(COMPUTER &oldc):cpu(oldc.cpu),ram(oldc.ram),cdrom(oldc.cdrom){
		cout << "create a COMPUTER by copy!" << endl;
	}
	~COMPUTER ()
	{ 
		cout << "destruct a COMPUTER!" << endl;

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

