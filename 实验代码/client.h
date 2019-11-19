#include<iostream>
#include<string>
using namespace std;
class CLIENT{
public:
	CLIENT();
	~CLIENT();
	CLIENT(int x);
	static void ChangeServerName(string s);
	static void ShowServerName();
	static void ShowClientNum();
	void getsize();
private:
	static string ServerName;
	static int ClientNum;
	int size; 
}; 
