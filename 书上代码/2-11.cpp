#include<iostream>
using namespace std;
enum GameResult{WIN,LOSE,TIE,CANCEL};
int main(){
	GameResult result;//声明变量时可以不写关键字 
	enum GameResult omit=CANCEL;//也可以在类型名前写enum 
	for(int count=WIN;count<=CANCEL;count++){//隐含类型转换
		result= GameResult(count);//显示类型转换
		if(result == omit)
			cout<<"The game was cancelled"<<endl;
			else{
				cout<<"The game was played ";
				if(result==WIN)
					cout<<"and we won!";
				if(result==LOSE)
					cout<<"but we lost.";
				cout<<endl;
			} 
	}
	return 0;
}
