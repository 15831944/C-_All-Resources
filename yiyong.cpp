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

//定义引用时一定要将其初始化成某个变量 
//初始化后，它就一直引用该变量，不会再引用别的变量 
//引用只能引用变量，不能引用常量和表达式 

//#include<iostream>
//using namespace std;
//int main(){
//	double a=4,b=5;
//	double &r1=a;
//	double &r2=r1;//r2也引用a
//	r2=10;
//	cout<<a<<endl;
//	r1=b;//r1并没有引用b（引用时从一而终的）
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

//引用作为函数的返回值
//#include<iostream>
//using namespace std;
//int n=4;
//int &SetValue() {return n;}
//int main(){
//	SetValue()=40;
//	cout<<n;
//	return 0;
//} 
//不能通过常引用去修改其引用内容
int n=100;
const int &r=n;
r=200;//编译出错
n=300;//正确 

/*const T &和T &是两种不同的类型 */ 
/*T &类型的引用或T类型的变量可以用来初始化const T &类型的引用*/






























 
