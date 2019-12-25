#include <iostream>
using namespace std;

class Client{
	private:
		static int clientNum;
		static char serverName;
	public:
		Client(){
			clientNum++;
		}
		~Client(){
			clientNum--;
		}
	static void changeServerName(char c){
		serverName = c;
	}
	static void show(){
		cout<<"server name:"<<serverName<<endl;
		cout<<"num of clients:"<<clientNum<<endl;
	}
};

int Client::clientNum = 0;
char Client::serverName = 'A';

int fun(){
	Client c;
	Client::show();
}
int main(){
	Client::show();
	Client c1;
	Client::show();
	//fun();
	//Client::show();
	Client::changeServerName('B');
	Client::show();
}
