//#include<iostream>
//using namespace std;
//int main(){
//	int n=7;
//	int &r=n;
//	cout<<r;
//	r=4;
//	cout<<r;
//	cout<<n;
//	n=5;
//	cout<<r;
//	return 0;
//}

//��������ʱһ��Ҫ�����ʼ����ĳ������ 
//��ʼ��������һֱ���øñ��������������ñ�ı��� 
//����ֻ�����ñ������������ó����ͱ��ʽ 

//#include<iostream>
//using namespace std;
//int main(){
//	double a=4,b=5;
//	double &r1=a;
//	double &r2=r1;//r2Ҳ����a
//	r2=10;
//	cout<<a<<endl;
//	r1=b;//r1��û������b������ʱ��һ���յģ�
//	cout<<a<<endl; 
//}

//#include<iostream>
//using namespace std;
//void swap(int &a,int &b){
//	int temp;
//	temp=a;
//	a=b;
//	b=temp;
//}
//int main(){
//	int a,b;
//	cin>>a>>b;
//	cout<<a<<" "<<b<<endl;
//	swap(a,b);
//	cout<<"Aftering changing:"<<endl;
//	cout<<a<<" "<<b;
//}

//������Ϊ�����ķ���ֵ
//#include<iostream>
//using namespace std;
//int n=4;
//int &SetValue() {return n;}
//int main(){
//	SetValue()=40;
//	cout<<n;
//	return 0;
//} 
//����ͨ��������ȥ�޸�����������
int n=100;
const int &r=n;
r=200;//�������
n=300;//��ȷ 

/*const T &��T &�����ֲ�ͬ������ */ 
/*T &���͵����û�T���͵ı�������������ʼ��const T &���͵�����*/






























 
