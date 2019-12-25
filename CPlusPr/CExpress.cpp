//中缀求值，利用操作数栈和操作符栈
#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <stack>
#define Debug 1
using namespace std;
const int NUMBER=-1;
class EXPRESS
{
	string exp;
	int p;
public:
    EXPRESS(string str);
    int getnextop(string &strNum);	
};
EXPRESS::EXPRESS(string str)
{
	exp=str;
	p=0;
}
/*
获得表达式的下一个操作符，
如果返回-1表示取得了一个数，数字对应字符放到strNum中
*/
int EXPRESS::getnextop(string &strNum)
{
	int c;
	int i=0;
	strNum="";
	if(!isdigit(exp[p])) 
	{if(exp[p]!='\0') return exp[p++]; else return exp[p];}
	while(isdigit(c=exp[p])) {strNum+=c; p++;}
	return NUMBER;		
}
int relation(char op1, char op2);
double calute(double n1,double n2,char op);
template<class T>
ostream& operator<<(ostream& out,stack<T> stk);

void main()
{
    string str="7*(3+4-(8-4))";
    EXPRESS exp(str);
    int type;
    string strNum;
	stack<double> stkNum;
	stack<char> stkOp;
    while((type=exp.getnextop(strNum))!='\0'){
    	switch(type){
    	case NUMBER: stkNum.push(atof(strNum.c_str()));
			if(Debug) cout<<stkNum<<endl;
			break; //cout<<strNum;break;
		case '+': case '-': case '*': case '/':
		case '(':case ')':{
			if(stkOp.empty()||type=='(') {stkOp.push(type); if(Debug) cout<<stkOp<<endl;}
			else if(relation(type,stkOp.top())==1) {stkOp.push(type);if(Debug) cout<<stkOp<<endl;}
			else if(relation(type,stkOp.top())==-1){
				char op=stkOp.top(); stkOp.pop(); if(Debug) cout<<stkOp<<endl;
				double n2=stkNum.top(); stkNum.pop(); 
				double n1=stkNum.top(); stkNum.pop(); if(Debug) cout<<stkNum<<endl;
				stkNum.push(calute(n1,n2,op)); if(Debug) cout<<stkNum<<endl;
				if (type==')') stkOp.pop();
				else stkOp.push(type);
				if(Debug) cout<<stkOp<<endl;
			}
			// 只出现在遇到')'，栈顶为'('
			else if(relation(type,stkOp.top())==0) 
				stkOp.pop();
			
			break;
		}
		default:  cout<<char(type);break;
    	}
    }
	cout<<"----------string read end----------"<<endl;
    while(!stkOp.empty()){
        if(Debug) cout<<stkNum<<endl;
		if(Debug) cout<<stkOp<<endl;
		char op=stkOp.top(); stkOp.pop(); 
		double n2=stkNum.top(); stkNum.pop(); 
		double n1=stkNum.top(); stkNum.pop(); 
		stkNum.push(calute(n1,n2,op)); 
		if(Debug) cout<<stkNum<<endl;
		if(Debug) cout<<stkOp<<endl;
    }

	//循环退出，正确情况下数据栈顶为结果
	cout<<"result="<<stkNum.top()<<endl;
}
/*
  + - * / ( )
+
-
*
/
(
)
*/
int rel[6][6]={
-1,-1,-1,-1,1,1,
-1,-1,-1,-1,1,1,
 1, 1,-1,-1,1,1,
 1, 1,-1,-1,1,1,
 1, 1, 1, 1,1,2,
 -1,-1,-1,-1,-1,-1,
};
// 比较两个运算符的优先级
int relation(char op1, char op2)
{
	int i,j;
	switch(op1){
		case '+': i=0;break;
		case '-': i=1;break;
		case '*': i=2;break;
		case '/': i=2;break;
		case '(': i=4;break;
		case ')': i=5;break;
	}
	switch(op2){
		case '+': j=0;break;
		case '-': j=1;break;
		case '*': j=2;break;
		case '/': j=2;break;
		case '(': j=4;break;
		case ')': j=5;break;
	}
	return rel[i][j];
}
/*
按照op计算两个数
*/
double calute(double n1,double n2,char op)
{
	double d;
	switch(op){
		case '+': d=n1+n2;break;
		case '-': d=n1-n2;break;
		case '*': d=n1*n2;break;
		case '/': d=n1/n2;;break;
	}
	return d;
}

//输入栈的内容，用于观察

template<class T>
ostream& operator<<(ostream& out,stack<T> stk)
{
	if(stk.empty()) { out<<"empty stack!"; return out;} 
	while(!stk.empty()){
		out<<stk.top()<<" "; stk.pop(); 
	}
	return out;
}
