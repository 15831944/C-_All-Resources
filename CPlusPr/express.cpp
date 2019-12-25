/*
express computing
�����ַ�����ʽ���沨�����ʽ
��������
�沨�����ʽ�Ľ����㷨
stl�Ķ�ջ
���ַ�������ȡ�������Ͳ�����
version1
written by yangjun yanghuajun@163.com
2010-11-14 
�����������������ݵ�����ջʱ
�����ջ������ȷ����topȡ���� �����
�Ľ�Ӧ�ò���top�������쳣
�沨�����ʽ����򵥵ģ���δ�����׺���ʽ��
��Ϊ��ϰ�������Լ�ʵ��atof�Ͷ�ջ��
stl��stack�������٣�
*/
#include "iostream"
#include "string"
#include "stack"
using namespace std;
#define MAXLEN 501
#define MAXOP 101
#define NUMBER -1
char szExpress[MAXLEN];
int p;//���Ʒ������е�λ��

int getop(char s[]);

void main()
{
	
	string strExp;
	stack<float> stkOp;//��������ջ	
    float op1,op2;
	int type;
	char s[MAXOP];
	//�������н�������������ת��Ϊ null
	cin.getline(szExpress,MAXLEN,'\n');	
	strExp=szExpress;
	while(strExp!="end"){		
		p=0; //��ʼ����һ���µı��ʽ
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
			// ���ڷ����Ƿ���ȷ���
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
    p--; //�����Ҫ����ȥ�����´ο��Զ���
	return NUMBER;    
}

