#include <iostream>

using namespace std;

class Client{
    public:
    static char ServerName;
    static int ClientNum;
    static void changeServerName(char a){ServerName = a;}
    static void show(){cout << "server name:" << ServerName << endl << "num of clients:" << ClientNum << endl;}
    Client(){ClientNum++;}


};
char Client::ServerName = 'A';
int Client::ClientNum = 0;

int main(){
	Client::show();
	Client c1;
	Client::show();
	Client::changeServerName('B');
	Client::show();
}
