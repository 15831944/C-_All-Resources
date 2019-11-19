/*
指针和链表
int * p;
int a;
p = &a;
*p = 5;
1) 动态内存分配
动态内存分配必须使用指针
优势：可以灵活处理数据数量可变的情况
void * malloc(int)
void *  // void 类型的指针
其他类型的指针可以直接对他赋值 
int * p;
p = (int *) malloc(sizeof(int));
int size = 10;
p = (int *) malloc(sizeof(int)*size); 
*(p+i) == p[i]
注意：
动态申请的内存不会自动释放，需要程序
显式的释放
free(p);
2)链表
是一种线性的数据结构，逻辑上和数组
差不多
优势：节点的数量可变，插入和删除的操作
效率高于数组 

//int main(){
//	int a = 3;
//	int b = 4;
//	int c = 5;
//	node * head;
//	head = (node *)malloc(sizeof(node));
//	head->data = a;
//	head->pNext = NULL;
//	node * p2 = (node *)malloc(sizeof(node));
//	p2->data = b;
//	p2->pNext = NULL;
//	head->pNext = p2;
//	node * p3 = (node *)malloc(sizeof(node));
//	p3->data = c;
//	p3->pNext = NULL;
//	p2->pNext = p3;
//	
//	//如何查看链表中的数据（遍历链表） 
//	node * p = head;
//	while(p!=NULL){
//		printf("%d ",p->data);
//		p = p->pNext;
//	}
//	free(p3);
//	free(p2);
//	free(head);	
//}


学生成绩管理系统，以链表为结构完成该系统 
*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
typedef struct Stu{
	int nNum;
	char sName[20];
	int nMath;
	int nChin;
	int nEngl;
	int nSum;
} stu;

//typedef stu T;
typedef stu T;
struct Node{
	T data;
	Node * pNext;
};
typedef struct Node node;

struct Link{
	Node * head;
	Node * tail;
};
typedef struct Link link;

link g_sLink;

//内部函数 
void initLink(){
	g_sLink.head = NULL;
	g_sLink.tail = NULL;
} 

node * serchByNum(int no){
	node * p = g_sLink.head;
	while(p!=NULL){
		if (p->data.nNum==no){
			break;
		}
		p = p->pNext;
	}
	return p;
}

void browse(){
	node * p = g_sLink.head;
	printf("\t学号 \t姓名 \t数学 \t语文 \t英语  \t总分\n");
	while(p!=NULL){
		stu s = p->data;
		printf("\t%d \t%s \t%d \t%d \t%d \t%d\n",
			s.nNum,s.sName,s.nMath,s.nChin,s.nEngl,s.nSum);
		p = p->pNext;
	}	
}
// 将s数据添加到链表的末尾 
bool addNode( T s ){
	node * p = (node *)malloc(sizeof(node));
	p->data = s;
	p->pNext = NULL;	 
	if(g_sLink.head==NULL){
		// 处理链表为空的情况 
		g_sLink.head = p;
		g_sLink.tail = p;	
	}else{
		// 链表不为空，正常情况 
		g_sLink.tail->pNext = p;
		g_sLink.tail = p;
	}
}

//  在p所指向节点的前面，插入一个节点 
bool insertNode(node *p, T s){
	
}

void input(){
	char c;
	do{
		stu s;
		printf("请输入学号 姓名 数学 语文 英语\n");		
		scanf("%d %s %d %d %d",&s.nNum,s.sName,&s.nMath,&s.nChin,&s.nEngl);
		s.nSum = s.nMath + s.nChin + s.nEngl;
		node * p = serchByNum(s.nNum); 
		if(p!=NULL){
			printf("已有该学号的学生，学号不能重复\n");
		}
		else
			addNode(s);
		printf("是否继续录入学生信息？(N for exit)");
		fflush(stdin);
		scanf("%c",&c);
	}while(c!='N' && c!='n'); 	
}

// 内部函数，删除p所指向的节点 
// 一般情况下，删除需要找到p节点前面的节点 q   q->next = p->next;  free(p);
// 1 找到q , q->next = p->next;  free(p);
// 特殊的情况 
// 2 删除是头节点 p == head   head = head->next; free(p);
// 3 要删除的是尾节点 tail  p==tail   tail = q; q->next = p->next;  free(p); 
bool deletNode(node *p){
	if(p==NULL)
		return 0;	
	//删除的是头节点  
	if(p==g_sLink.head){
		g_sLink.head = g_sLink.head->pNext;
		// 处理链表中刚好只有一个节点的情况 
		if(g_sLink.tail==p){
			g_sLink.tail = NULL;	
		}
		free(p);
		return 1;
	}	
	// 处理一般的情况 
	node * q = g_sLink.head;
	while(q!=NULL){
		if (q->pNext == p)
			break;
		q = q->pNext;
	}
	if(q!=NULL){
		q->pNext = p->pNext;
		// p刚好是尾节点	
		if(p==g_sLink.tail){
		   g_sLink.tail = q;
		}
		free(p);
		return 1;
	}else{
		return 0;
	}
}

bool deletNode2(node *p){
	node * q = NULL;
	node * p1 = g_sLink.head;
	while(p1!=NULL && p1!=p){
		q = p1;
		p1 = p1->pNext;
	}
	// 找到并且有效 
	if(p1!=NULL && p1==p){
		if(q==NULL){ // 删的是头节点 
			g_sLink.head = g_sLink.head->pNext;
			if(g_sLink.tail==p){ // 是头节点又恰好是尾节点 
				g_sLink.tail = NULL;
			}
		}
		else{ // 删的是其他节点 
			q->pNext = p->pNext;
			if(g_sLink.tail==p){ // 删的刚好是尾节点 
				g_sLink.tail = q;	
			}
		}
		free(p);
		return 1;	
	}
	else{
		 return 0;		
	}	
}



void deleteStu(){
	int n;
	printf("请输入要删除的学号：");
	scanf("%d",&n);
	node * p = serchByNum(n);
	if(p==NULL){
		printf("没有该学生\n");
		system("pause");
		return;
	}
	else{
		printf("确实要删除学号为%d 的学生吗？（Y）",p->data.nNum);
		char c;
		fflush(stdin);
		scanf("%c",&c);
		if(c=='Y' || c=='y'){
			///g_s[pos].nNum = -1;
			bool b = deletNode2(p);
			if (b==1)
				printf("删除成功！");
			else
				printf("删除失败！");
			system("pause");	
		}			
	}
}

void save(){
	FILE * pf = fopen("stu.data","wb");
	if(pf==NULL){
		printf("保存文件失败！\n");
		return; 
	}
	node * p = g_sLink.head;
	while(p!=NULL){
		fwrite(&(p->data),sizeof(p->data),1,pf);
		p = p->pNext;
	}	
	
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
	stu s;
	while(fread(&s,sizeof(s),1,pf)>0){		
		i++;
		addNode(s);
	}
	printf("读入数据成功，共有 %d 条学生信息\n",i);
	fclose(pf);
}

void modify(){
	int n;
	printf("请输入要修改学生的学号：\n");
	scanf("%d",&n);
	node * p = serchByNum(n);
	if(p!=NULL){
			printf("找到了，该学生的信息如下：\n");
			stu s = p->data;
			printf("%d %s %d %d %d\n",s.nNum,s.sName,s.nMath,s.nChin,s.nEngl);
			printf("请输入姓名 数学 语文 英语：\n");
			scanf("%s %d %d %d", p->data.sName,&(p->data.nMath),&(p->data.nChin),&(p->data.nEngl));
			return;
	}
	else
		printf("查无此人\n");
}

void findByNum(){
	int n;
	printf("请输入要查找学生的学号：\n");
	scanf("%d",&n);
	node * p = serchByNum(n);
	if(p!=NULL){
		printf("找到了，该学生的信息如下：\n");
		stu s = p->data;
		printf("%d %s %d %d %d\n",s.nNum,s.sName,s.nMath,s.nChin,s.nEngl);
	}
	else
		printf("查无此人\n");
}
void findByName(){
	char name[128];
	printf("请输入要查找学生的姓名：\n");
	scanf("%s",name);
	node * p = g_sLink.head;
	int bFind = 0;
	while(p!=NULL){
		if(strcmp(p->data.sName,name)==0){
			bFind = 1;
			printf("找到了，该学生的信息如下：\n");
			stu s = p->data;
			printf("%d %s %d %d %d\n",s.nNum,s.sName,s.nMath,s.nChin,s.nEngl);
		}
		p = p->pNext;
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

void statstic(){
	int count = 0;
	node * p = g_sLink.head;
	while(p!=NULL){	
		p->data.nSum = p->data.nChin + p->data.nEngl + p->data.nMath;
		count++;
		p = p->pNext;
	}
	printf("学生总数为 %d\n",count);	
}

// 按照总成绩从高到低进行排序 
void sortBySum(){
	node * p, *q;
	p = g_sLink.head;	
	while(p!=NULL){
		int nMax = p->data.nSum;
		node * pPos = p;
		q = p->pNext;		
		while(q!=NULL){
			if ( q->data.nSum < nMax){
				nMax = q->data.nSum;
				pPos = q;
			}
			q = q->pNext;			
		}
		if(pPos!=p){
			int temp;
			temp = p->data.nSum;
			p->data.nSum = pPos->data.nSum;
			pPos->data.nSum = temp;
		}		
		p = p->pNext;
	}
}

void sortStu(){
	node * p = g_sLink.head;
	while(p!=NULL){	
		p->data.nSum = p->data.nChin + p->data.nEngl + p->data.nMath;
		p = p->pNext;
	}
//	printf("\t1 按学号\n");
//	printf("\t2 按语文成绩\n");
//	printf("\t3 按数学成绩\n");
//	printf("\t4 按英语成绩\n");
	printf("\t5 按总成绩\n");
	printf("\t0 退出排序\n");
	int n;
	scanf("%d",&n);
	switch(n){
	//	case 1: sortByNum(); break;
//		case 2: sortByChin(); break;
//		case 3: sortByMath(); break;
//		case 4: sortByEng(); break;
		case 5: sortBySum(); break;	
		case 0: break;	
	}
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
	//memset(g_s,0,sizeof(g_s));	
	initLink();
	load();
	while(menu()){
			
	}
}
