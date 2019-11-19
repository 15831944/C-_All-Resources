#include <stdio.h>
//int main()
//{
//	int a;
//	//a = 1 && 5;  // 非零为真，0为假
//	a = 1 && 'd'; // 字符本质上是ASC码，也是一个整数
//	printf("%d",a);
//	getchar();
//}
//#define N 5
//int main()
//{
//	int a[N] = {76,87,98,78,65};
//	int nMax = a[0];
//	int nPos = 0;
//	int i=0;
//	for(i=0;i<N;i++){
//		if(a[i]>nMax){
//			nMax = a[i];
//			nPos = i;
//		}
//	}
//	printf("%d at %d\n",nMax,nPos);
//}

//#define N 10
//int findMax(int * a,int nSize){
//	int nMax = a[0];
//	int nPos = 0;
//	int i=0;
//	for(i=0;i<nSize;i++){
//		if(a[i]>nMax){
//			nMax = a[i];
//			nPos = i;
//		}
//	}
//	return nMax;
//	
//	/*int nMax = *a;
//	int i;
//	for(i=0;i<nSize;i++){
//		if (*(a)>nMax){
//			nMax = *(a);
//		}
//		a++;
//	}
//	return nMax;*/
//}
//int main()
//{
//	int a[] = {56,78,98,87,56};
//	int n = sizeof(a); // 计算整个数组的字节数
//	//int n = sizeof(a[0]); // 可以计算数组中的一个元素的字节数
//	int nSize = sizeof(a)/sizeof(a[0]);
//	int nMax = findMax(a,nSize);
//	printf("%d\n",nMax);
//}
/* 
#include <string.h>
typedef struct Stu{
	int nNum;
	char sName[20];
	int nMath;
	int nChin;
	int nEngl;
} stu;
//typedef struct Stu stu;
int main(){
	//stu s1 = {1001,"zhangsan",90,87,78};
	stu s1;
	//s1.nNum = 1001;
	//strcpy(s1.sName,"zhangsan");
	//s1.nMath = 90;
	printf("请输入学号，姓名，数学成绩，语文成绩,英语成绩\n");
	scanf("%d %s %d %d %d",&s1.nNum,s1.sName,&s1.nMath,
		&s1.nChin,&s1.nEngl);
	printf("学号：%d,姓名：%s,数学成绩：%d\n",s1.nNum,
		s1.sName,s1.nMath);
}
*/
/*
#include <string.h>
#include <stdio.h>
typedef struct Stu{
	int nNum;
	char sName[20];
	int nMath;
	int nChin;
	int nEngl;
	int nSum;
} stu;
typedef struct Stu stu;
int main(){
	stu s[5] = {{1,"a",45,65,87},{2,"b",56,87,98},
				{3,"c",98,76,76},{4,"d",87,45,76},
				{5,"e",98,56,75}};
	int iMax = 0,pos = 0;
	int i;
	for(i=0;i<5;i++){
		// 第i个学生的总分求出来 
		int sum = s[i].nMath+s[i].nEngl+s[i].nChin;
		if(sum>iMax){
			iMax = sum; pos = i; 
		}
	}
	printf("最高总分：%d\n",iMax);
	printf("该学生的学号：%d,姓名：%s,数学成绩：%d\n",
		s[pos].nNum,s[pos].sName,s[pos].nMath);
}
*/

// 选择排序算法 
/*
4 3 1 2 5
5 3 1 2 4
  4 1 2 3
    3 2 1
      2 1

*/ 
/*
int main(){
	int a[5] = {4,3,1,2,5};
	int i;
	printf("排序之前\n");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<4;i++){
	// 从第i位到最后一位找最大值，和第i位的值交换
	    int k=i,iMax=a[i],j;
		for(j=i;j<5;j++){
			if(a[j]>iMax){
				iMax = a[j]; k=j;
			}
		}
		int t;
		t = a[k]; a[k] = a[i]; a[i] = t;
	}
	printf("排序之后\n");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
*/
/*
#include <string.h>
#include <stdio.h>
typedef struct Stu{
	int nNum;
	char sName[20];
	int nMath;
	int nChin;
	int nEngl;
	int nSum;
} stu;
typedef struct Stu stu;
int main(){
	stu s[5] = {{1,"a",45,65,87},{2,"b",56,87,98},
				{3,"c",98,76,76},{4,"d",87,45,76},
				{5,"e",98,56,75}};
	int i;
	for(i=0;i<5;i++){
		s[i].nSum = s[i].nMath + s[i].nEngl + s[i].nChin;
	}
	printf("排序之前\n");
	for(i=0;i<5;i++){
		printf("学号：%d,姓名：%s,数学：%d,英语：%d,中文：%d,总分: %d\n",
		s[i].nNum,s[i].sName,s[i].nMath,s[i].nEngl,s[i].nChin,s[i].nSum);
	}
	for(i=0;i<4;i++){
	// 从第i位到最后一位找最大值，和第i位的值交换
	    int k=i,j;
		for(j=i;j<5;j++){
			if(s[j].nSum>s[k].nSum){
				k=j;
			}
		}
		stu t;
		t = s[k]; s[k] = s[i]; s[i] = t;
	}
	printf("排序之后\n");
	for(i=0;i<5;i++){
		printf("学号：%d,姓名：%s,数学：%d,英语：%d,中文：%d,总分: %d\n",
		s[i].nNum,s[i].sName,s[i].nMath,s[i].nEngl,s[i].nChin,s[i].nSum);
	}
	
}
*/
/*
学生管理系统，添加 浏览 查找 删除， 统计，排序。
学生信息该如何存储？ 学生结构体，学生结构体数组。
模块化的设计，每个功能做成函数。
字符菜单
1 添加
2 浏览
3 查找
4 修改  
5 删除
7 统计
8 排序
0 退出 

删除的功能，将删除的元素的学号设置为-1，用-1代表该学生信息已经无效。 
1）输入要删除学生的学号
2）根据学号查找该学生的位置 => pos
if (没找到)
	提示没有该学生，退出、
else 
	g_s[pos].num = -1;
	
浏览功能：对于遇到学号为-1的元素，就不能再显示该元素了。

添加功能: 对于学号为-1的位置，也可以成为存放新元素的位置。 

统计功能：将每个同学的总分计算出来，放入nSum字段。统计输出一共有多少个
有效的学生。 

排序功能：可以根据不同的字段对学生进行排序（从低到高）。
1） 根据学号
2） 根据语文成绩排序
3）根据英语成绩排序
4） 根据数学成绩排序
5） 根据总分排序 

*/

#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
typedef struct Stu{
	int nNum;
	char sName[20];
	int nMath;
	int nChin;
	int nEngl;
	int nSum;
} stu;
typedef struct Stu stu;
#define SIZE 5
stu g_s[SIZE]; 
stu g_copy[SIZE]; 


// 根据学号进行查找，找到返回其位置 ，如果没有找到 ，返回-1 
int serchByNum(int n)
{
	int i=0;
	while(i<SIZE && g_s[i].nNum!=0){
		if(g_s[i].nNum==n){
			return i;
		}
		i++;
	}
	return -1;
}
void findByNum(){
	int n;
	printf("请输入要查找学生的学号：\n");
	scanf("%d",&n);
	int i = serchByNum(n);
	if(i!=-1){
		printf("找到了，该学生的信息如下：\n");
		printf("%d %s %d %d %d\n",g_s[i].nNum,g_s[i].sName,g_s[i].nMath,g_s[i].nChin,g_s[i].nEngl);
	}
	else
		printf("查无此人\n");
}
void findByName(){
	char name[128];
	printf("请输入要查找学生的姓名：\n");
	scanf("%s",name);
	int i=0;
	int bFind = 0;
	while(i<SIZE && g_s[i].nNum!=0){
		if(strcmp(g_s[i].sName,name)==0){
			bFind = 1;
			printf("找到了，该学生的信息如下：\n");
			printf("%d %s %d %d %d\n",g_s[i].nNum,g_s[i].sName,g_s[i].nMath,g_s[i].nChin,g_s[i].nEngl);
		}
		i++;
	}
	if (bFind == 0){
		printf("查无此人\n");	
	}
}
void find(){
	printf("\t 1 按学号查找\n");
	printf("\t 2 按姓名查找\n");
	int n;
	scanf("%d",&n);
	if(n==1)
		findByNum();
	if(n==2)
		findByName();
	else
		printf("请按照菜单的要求输入\n");
}
void modify(){
	int n;
	printf("请输入要修改学生的学号：\n");
	scanf("%d",&n);
	int i = serchByNum(n);
	if(i!=-1){
			printf("找到了，该学生的信息如下：\n");
			printf("%d %s %d %d %d\n",g_s[i].nNum,g_s[i].sName,g_s[i].nMath,g_s[i].nChin,g_s[i].nEngl);
			printf("请输入姓名 数学 语文 英语：\n");
			scanf("%s %d %d %d",g_s[i].sName,&g_s[i].nMath,&g_s[i].nChin,&g_s[i].nEngl);
			return;
	}
	else
		printf("查无此人\n");
}
 
//void find(){
//	int n;
//	printf("请输入要查找学生的学号：\n");
//	scanf("%d",&n);
//	int i=0;
//	while(i<SIZE && g_s[i].nNum!=0){
//		if(g_s[i].nNum==n){
//			printf("找到了，该学生的信息如下：\n");
//			printf("%d %s %d %d %d\n",g_s[i].nNum,g_s[i].sName,g_s[i].nMath,g_s[i].nChin,g_s[i].nEngl);
//			return;
//		}
//		i++;
//	}
//	printf("查无此人\n");
//}


//void modify(){
//	int n;
//	printf("请输入要查找学生的学号：\n");
//	scanf("%d",&n);
//	int i=0;
//	while(i<SIZE && g_s[i].nNum!=0){
//		if(g_s[i].nNum==n){
//			printf("找到了，该学生的信息如下：\n");
//			printf("%d %s %d %d %d\n",g_s[i].nNum,g_s[i].sName,g_s[i].nMath,g_s[i].nChin,g_s[i].nEngl);
//			printf("请输入姓名 数学 语文 英语：\n");
//			scanf("%s %d %d %d",g_s[i].sName,&g_s[i].nMath,&g_s[i].nChin,&g_s[i].nEngl);
//			return;
//		}
//		i++;
//	}
//	printf("查无此人\n");
//}

void browse( ){
	 printf("学生列表信息如下：\n");
     int i=0;
     printf("\t学号 \t姓名 \t数学 \t语文 \t英语  \t总分\n"); 
	 while(i<SIZE && g_s[i].nNum!=0){
	 	if(g_s[i].nNum>0)
			printf("\t%d \t%s \t%d \t%d \t%d \t%d\n",
			g_s[i].nNum,g_s[i].sName,g_s[i].nMath,g_s[i].nChin,g_s[i].nEngl,g_s[i].nSum);
		i++;
	 }
}
//考虑数组空间全部存满的情况
void input( ){
	char c;
	do{
		int i=0;
		// 找到一个可以存放学生信息的元素 
		while(i<SIZE && g_s[i].nNum>0){
			i++;
		}
		if(i>=SIZE){
			printf("空间已经满了，不能再放了！\n");
			return;
		}
		printf("请输入学号 姓名 数学 语文 英语\n");		
		scanf("%d %s %d %d %d",&g_s[i].nNum,g_s[i].sName,&g_s[i].nMath,&g_s[i].nChin,&g_s[i].nEngl);
		printf("是否继续录入学生信息？(N for exit)");		
		//scanf("%c",&c);
		fflush(stdin);
		scanf("%c",&c);
	}while(c!='N' && c!='n'); 
}
void deleteStu(){
	int n;
	printf("请输入要删除的学号：");
	scanf("%d",&n);
	int pos = serchByNum(n);
	if(-1==pos){
		printf("没有该学生\n");
		system("pause");
		return;
	}
	else{
		printf("确实要删除学号为%d 的学生吗？（Y）",g_s[pos].nNum);
		char c;
		fflush(stdin);
		scanf("%c",&c);
		if(c=='Y' || c=='y'){
			g_s[pos].nNum = -1;
			printf("删除成功！");
			system("pause");	
		}			
	}
}
// 计算有效学生的数量，内部函数 
int getCount(){
	int i=0;
	int count = 0;
	while(i<SIZE && g_s[i].nNum!=0){
		if(g_s[i].nNum>0){
			count++;
		}
		i++;
	}
	return count;	
}

void statstic(){
	int i=0;
	int count = 0;
	while(i<SIZE && g_s[i].nNum!=0){
		if(g_s[i].nNum>0){
			g_s[i].nSum = g_s[i].nChin + g_s[i].nEngl + g_s[i].nMath;
			count++;
		}
		i++;
	}
	printf("学生总数为 %d\n",count);
}
// 选择排序算法 

//void sortByNum(){
//	int n = getCount();
//	int i;
//	for(i=0;i<n;i++){
//	// 从第i位到最后一位找最大值，和第i位的值交换
//	    int k=i,j;
//		for(j=i+1;j<n;j++){
//			if(g_s[j].nNum>g_s[k].nNum){
//				k=j;
//			}
//		}
//		stu t;
//		t = g_s[k]; g_s[k] = g_s[i]; g_s[i] = t;
//	}	
//}

// 利用C语言qsort函数 
int cmpNum(const void * p1,const void * p2){
	stu s1 = *(stu *)p1;
	stu s2 = *(stu *)p2;
	return s1.nNum > s2.nNum;
}
int cmpChin(const void * p1,const void * p2){
	stu s1 = *(stu *)p1;
	stu s2 = *(stu *)p2;
	return s1.nChin < s2.nChin;
}
void sortByNum(){
	int n = getCount();
	qsort(g_s,n,sizeof(stu),cmpNum);
	browse();
} 
void sortByChin(){
	int n = getCount();
	qsort(g_s,n,sizeof(stu),cmpChin);
	browse();
}
void sortByMath(){
	
}
void sortByEng(){
	
}
void sortBySum(){
	int i=0;
	while(i<SIZE && g_s[i].nNum!=0){
		if(g_s[i].nNum>0){
			g_s[i].nSum = g_s[i].nChin + g_s[i].nEngl + g_s[i].nMath;
		}
		i++;
	}
	
}

// 物理删除学号为-1的无效数据,内部调用函数 思路1：利用新数组 
//void clearMinus(){
//	memset(g_copy,0,sizeof(g_copy));
//	int i=0,j=0;
//	while(g_s[i].nNum!=0 && i<SIZE){
//		if(g_s[i].nNum>0){
//			g_copy[j] = g_s[i];
//			j++;
//		}
//		i++;
//	}
//	memcpy(g_s,g_copy,sizeof(g_s)); 
//}

// 物理删除学号为-1的无效数据,内部调用函数 思路2：直接在原数组上操作 
void clearMinus(){
	memset(g_copy,0,sizeof(g_copy));
	int i=0,j=0;
	while(g_s[i].nNum!=0 && i<SIZE){
		if(g_s[i].nNum>0){
			g_s[j] = g_s[i]; 
			j++;
		}
		i++;
	}
	memset(&g_s[j],0,sizeof(stu)*(SIZE-j));
}

 
void sortStu(){
	clearMinus();
	printf("\t1 按学号\n");
	printf("\t2 按语文成绩\n");
	printf("\t3 按数学成绩\n");
	printf("\t4 按英语成绩\n");
	printf("\t5 按总成绩\n");
	printf("\t0 退出排序\n");
	int n;
	scanf("%d",&n);
	switch(n){
		case 1: sortByNum(); break;
		case 2: sortByChin(); break;
		case 3: sortByMath(); break;
		case 4: sortByEng(); break;
		case 5: sortBySum(); break;	
		case 0: break;	
	}
}
void save(){
	FILE * pf = fopen("stu.data","wb");
	if(pf==NULL){
		printf("保存文件失败！\n");
		return; 
	}
	clearMinus();
	int n = getCount();
	fwrite(g_s,sizeof(stu),n,pf);
	fclose(pf);
	printf("保存文件成功！\n");
}
void load(){
	FILE * pf = fopen("stu.data","rb");
	if(pf==NULL){
		printf("读取文件失败！\n");
		return; 
	}
	int i = 0;
	while(fread(&g_s[i],sizeof(stu),1,pf)>0){
		i++;
	}
	printf("读入数据成功，共有 %d 条学生信息\n",i);
	fclose(pf);
}
int menu(){
	//system("pause");
	printf("1 浏览\n");
	printf("2 添加\n");
	printf("3 查找\n");
	printf("4 修改\n");
	printf("5 删除\n");
	printf("6 统计\n");
	printf("7 排序\n");
	printf("8 保存\n");	
	printf("0 退出\n");
	int n;
	scanf("%d",&n);
	switch(n){
		case 1: browse(); break;
		case 2: input(); break;
		case 3: find(); break;
		case 4: modify(); break;
		case 5: deleteStu(); break;
		case 6: statstic(); break;
		case 7: sortStu();break;
		case 8: save();break;
		//case 9: load();break;		
		case 0: break;
	}
	return n;
}

int main(){
	memset(g_s,0,sizeof(g_s));
	load();
	while(menu()){
			
	}
}
/*
可以存储的数据是有限的。
如何解决？
链表：动态申请学生节点，动态申请内存，构成链表。（难度大）
需要掌握指针知识点和链表数据结构。 
*/ 


