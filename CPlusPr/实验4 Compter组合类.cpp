//������ʾ������

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
		cout << "������һ��CPU!" << endl;
	}
	CPU ()
	{
		rank = P1;
		frequency = 2;
		voltage = 100;
		cout << "������һ��CPU!" << endl;
	}
	CPU (CPU & oldcpu)
	{
		rank = oldcpu.rank;
		frequency = oldcpu.frequency;
		voltage = oldcpu.voltage;
		cout << "���ƹ�����һ��CPU!" << endl;
	}
    ~CPU () { cout << "������һ��CPU!" << endl; }

	void showinfo(){
		cout<<"rank:"<<rank<<endl;
		cout<<"frequency:"<<frequency<<endl;
		cout<<"voltage:"<<voltage<<endl;		
	}

};

class RAM
{
private:
	int volumn; //����
public:
    RAM ()
	{
		volumn=1;
		cout << "������һ��RAM!" << endl; 
	}
	RAM (int v)
	{
		volumn=v;
		cout << "������һ��RAM!" << endl; 
	}
	RAM (RAM &r)
	{
		volumn=r.volumn;
		cout << "���ƹ�����һ��RAM!" << endl; 
	}
	~RAM () 
	{
		cout << "������һ��RAM!" << endl;
	}
    void showinfo(){ cout<<"volumn:"<<volumn<<" GB"<<endl; }   
};
class CDROM
{
	int speed;
public:
    CDROM () {
		speed=16;
		cout << "������һ��CDROM!" << endl; 
	}
	CDROM (int s) {
		speed=s;
		cout << "������һ��CDROM!" << endl; 
	}
	CDROM (CDROM &c) {
		speed=c.speed;
		cout << "���ƹ�����һ��CDROM!" << endl; 
	}
	~CDROM ()
	{ 
		cout << "������һ��CDROM!" << endl; 
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
		cout << "��������������һ��COMPUTER!" << endl;
	}
    COMPUTER(CPU_Rank r, int f, float v,int rv, int cds) //������
		:cpu(r,f,v),ram(rv),cdrom(cds) //��ʼ���б����ڲ�����
	{
		cout << "������������һ��COMPUTER!" << endl;
	}
    COMPUTER(COMPUTER &oldc):cpu(oldc.cpu),ram(oldc.ram),cdrom(oldc.cdrom){
		cout << "���ƹ�����һ��COMPUTER!" << endl;
	}
	~COMPUTER ()
	{ 
		cout << "������һ��COMPUTER!" << endl;

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
	COMPUTER cpt1(P6,4.0,200,60,32);  //���Դ���������
	cout<<"cpt1's parameter:"<<endl;
	cpt1.showinfo();
	cout<<"------------------------------"<<endl;
	COMPUTER cpt2; //���Բ�����������
	cout<<"cpt2's parameter:"<<endl;
	cpt2.showinfo();
	cout<<"------------------------------"<<endl;
    COMPUTER cpt3(cpt1); //���Ը��ƹ���
	cout<<"cpt3's parameter:"<<endl;
	cpt3.showinfo();
	cout<<"------------------------------"<<endl;	
}
/*
������һ��CPU!
������һ��RAM!
������һ��CDROM!
������������һ��COMPUTER!
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
������һ��CPU!
������һ��RAM!
������һ��CDROM!
��������������һ��COMPUTER!
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
���ƹ�����һ��CPU!
���ƹ�����һ��RAM!
���ƹ�����һ��CDROM!
���ƹ�����һ��COMPUTER!
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
������һ��COMPUTER!
������һ��CDROM!
������һ��RAM!
������һ��CPU!
������һ��COMPUTER!
������һ��CDROM!
������һ��RAM!
������һ��CPU!
������һ��COMPUTER!
������һ��CDROM!
������һ��RAM!
������һ��CPU!
Press any key to continue
*
ע��������˳��
���Ҫ��ʾ�豸��Ʒ�ƣ�����޸ĳ���
/