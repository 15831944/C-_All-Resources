/*const*/
//1.定义常量 const double PI=3.14;
//2.定义常量指针：不可通过常量指针修改其指向的内容，但其指向的内容是可以修改的
int n,m;
const int *p=&n;
*p=5;//编译出错
n=4;//ok
p=&m;//ok,常量指针的指向可以变化
//不可把常量指针赋值给非常量指针，反过来可以
const int *p1,int *p2;
p1=p2;//ok
p2=p1;//error
p2=(int *)p1;//ok,强制类型转换
//总结：常量指针所指向的内容尽量不要修改
//函数参数为常量指针时，可避免函数内部不小心改变参数指针所指地方的内容
void MyPrintf(const char *p){
	strcpy(p,"this");//不能给一个指针常量赋值 
	printf("%s",p);//ok
} 
//3.定义引用：不能通过常引用修改其引用的变量
int n;
const int &r=n;
r=5;//error
n=4;//ok




 
 
