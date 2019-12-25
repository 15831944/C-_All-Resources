//演示类的基本性质，构造和析构等

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
		cout << "create a CPU!" << endl;
	}
	CPU ()
	{
		rank = P1;
		frequency = 2;
		voltage = 100;
		cout << "create a CPU!" << endl;
	}
	CPU (CPU & oldcpu)
	{
		rank = oldcpu.rank;
		frequency = oldcpu.frequency;
		voltage = oldcpu.voltage;
		cout << "copy create a CPU!" << endl;
	}
    ~CPU () { cout << "destruct a CPU!" << endl; }

	void showinfo(){
		cout<<"rank:"<<rank<<endl;
		cout<<"frequency:"<<frequency<<endl;
		cout<<"voltage:"<<voltage<<endl;
	}

    CPU_Rank GetRank() const { return rank; }
    int GetFrequency() const { return frequency; }
    float GetVoltage() const { return voltage; }

    void SetRank(CPU_Rank r) { rank = r; }
    void SetFrequency(int f) { frequency = f; }
    void SetVoltage(float v) { voltage = v; }

    //void Run() {cout << "CPU开始运行!" << endl; }
    //void Stop() {cout << "CPU停止运行!" << endl; }
};

int main()
{
	CPU a(P6,3,300); 
	
	cout<<"cpu a's parameter"<<endl;
	a.showinfo(); //显示性能参数

	CPU b; 
	cout<<"cpu b's parameter"<<endl;
	b.showinfo(); //显示性能参数

	CPU c(a); 
	cout<<"cpu c's parameter"<<endl;
	c.showinfo(); //显示性能参数
}
