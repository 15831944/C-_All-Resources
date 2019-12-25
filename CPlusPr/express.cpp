/*
express computing
解析字符串形式的逆波兰表达式
体现内容
逆波兰表达式的解析算法
stl的堆栈
从字符串中提取操作数和操作符
version1
written by yangjun yanghuajun@163.com
2010-11-14 
当遇到操作符将数据弹出堆栈时
如果堆栈不能正确弹出top取不到 会出错
改进应该捕获top产生的异常
逆波兰表达式是最简单的，如何处理中缀表达式？
作为练习，可以自己实现atof和堆栈类
stl中stack方法很少？
*/
#include "iostream"
#include "string"
#include "stack"
using namespace std;
#define MAXLEN 501
#define MAXOP 101
#define NUMBER -1
char szExpress[MAXLEN];
int p;//控制分析串中的位置

int getop(char s[]);

void main()
{
	
	string strExp;
	stack<float> stkOp;//操作数堆栈	
    float op1,op2;
	int type;
	char s[MAXOP];
	//遇到换行结束，并将换行转换为 null
	cin.getline(szExpress,MAXLEN,'\n');	
	strExp=szExpress;
	while(strExp!="end"){		
		p=0; //开始处理一个新的表达式
		int berror=0;		
		while((type=getop(s))!='\0' && !berror){
			switch(type){
			case NUMBER: stkOp.push(atof(s)); break;	
			case '+':
					op2=stkOp.top();stkOp.pop();
					op1=stkOp.top();stkOp.pop();
					stkOp.push(op1+op2);
					break;
			case '-':
					op2=stkOp.top();stkOp.pop();
					op1=stkOp.top();stkOp.pop();
					stkOp.push(op1-op2);
					break;
			case '*':
			        op2=stkOp.top();stkOp.pop();
					op1=stkOp.top();stkOp.pop();
					stkOp.push(op1*op2);
					break;
			case '/':
			        op2=stkOp.top();stkOp.pop();
					op1=stkOp.top();stkOp.pop();
					if (op2!=0.0)
						stkOp.push(op1/op2);
					else
					{cout<<"error: zero divisor"<<endl;berror=1;}
					break;				
			default:{cout<<"error: unknown command"<<s<<endl;berror=1;}
			}				
		}
		if(!berror){
			// 用于分析是否正确算出
			if (!stkOp.empty()){
				float r=stkOp.top(); stkOp.pop();
				if(stkOp.empty())
					cout<<"result="<<r<<endl;
				else 
					cout<<"error: not correct express"<<endl;
			}
			else
				cout<<"error: not correct express"<<endl;			
		}			
		while(!stkOp.empty()) stkOp.pop();			
		cin.getline(szExpress,MAXLEN,'\n');
		strExp=szExpress;
	}

}
int getop(char s[]){
	char c;
	while((c=szExpress[p++])==' '|| c=='\t')
		;
	s[0]=c;
	if(!isdigit(c)) return c;
    s[1]='\0';
	int i=0;
	while(isdigit(c=szExpress[p++]))
		s[++i]=c;
	if(c=='.'){
		s[++i]=c;
		while(isdigit(c=szExpress[p++]))
		s[++i]=c;
	}
	s[++i]='\0';
    p--; //多读的要返回去，让下次可以读到
	return NUMBER;    
}

