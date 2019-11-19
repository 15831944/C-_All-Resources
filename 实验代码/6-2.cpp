#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream file;
	char array[6]={'1','\n','2','\n','3','\n'};
	file.open("test.dat",ios_base::out|ios_base::binary);
	file.write(reinterpret_cast<char *>(array),sizeof(array));
	file.close();
	ifstream is("test.dat");
	if(is){
		char ch;
		while((ch=is.get())!=EOF)
		cout<<ch;
	}
	return 0;
}
