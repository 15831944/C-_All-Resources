/*
ָ�������
int * p;
int a;
p = &a;
*p = 5;
1) ��̬�ڴ����
��̬�ڴ�������ʹ��ָ��
���ƣ������������������ɱ�����
void * malloc(int)
void *  // void ���͵�ָ��
�������͵�ָ�����ֱ�Ӷ�����ֵ 
int * p;
p = (int *) malloc(sizeof(int));
int size = 10;
p = (int *) malloc(sizeof(int)*size); 
*(p+i) == p[i]
ע�⣺
��̬������ڴ治���Զ��ͷţ���Ҫ����
��ʽ���ͷ�
free(p);
2)����
��һ�����Ե����ݽṹ���߼��Ϻ�����
���
���ƣ��ڵ�������ɱ䣬�����ɾ���Ĳ���
Ч�ʸ������� 

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
//	//��β鿴�����е����ݣ��������� 
//	node * p = head;
//	while(p!=NULL){
//		printf("%d ",p->data);
//		p = p->pNext;
//	}
//	free(p3);
//	free(p2);
//	free(head);	
//}


ѧ���ɼ�����ϵͳ��������Ϊ�ṹ��ɸ�ϵͳ 
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

//�ڲ����� 
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
	printf("\tѧ�� \t���� \t��ѧ \t���� \tӢ��  \t�ܷ�\n");
	while(p!=NULL){
		stu s = p->data;
		printf("\t%d \t%s \t%d \t%d \t%d \t%d\n",
			s.nNum,s.sName,s.nMath,s.nChin,s.nEngl,s.nSum);
		p = p->pNext;
	}	
}
// ��s������ӵ������ĩβ 
bool addNode( T s ){
	node * p = (node *)malloc(sizeof(node));
	p->data = s;
	p->pNext = NULL;	 
	if(g_sLink.head==NULL){
		// ��������Ϊ�յ���� 
		g_sLink.head = p;
		g_sLink.tail = p;	
	}else{
		// ����Ϊ�գ�������� 
		g_sLink.tail->pNext = p;
		g_sLink.tail = p;
	}
}

//  ��p��ָ��ڵ��ǰ�棬����һ���ڵ� 
bool insertNode(node *p, T s){
	
}

void input(){
	char c;
	do{
		stu s;
		printf("������ѧ�� ���� ��ѧ ���� Ӣ��\n");		
		scanf("%d %s %d %d %d",&s.nNum,s.sName,&s.nMath,&s.nChin,&s.nEngl);
		s.nSum = s.nMath + s.nChin + s.nEngl;
		node * p = serchByNum(s.nNum); 
		if(p!=NULL){
			printf("���и�ѧ�ŵ�ѧ����ѧ�Ų����ظ�\n");
		}
		else
			addNode(s);
		printf("�Ƿ����¼��ѧ����Ϣ��(N for exit)");
		fflush(stdin);
		scanf("%c",&c);
	}while(c!='N' && c!='n'); 	
}

// �ڲ�������ɾ��p��ָ��Ľڵ� 
// һ������£�ɾ����Ҫ�ҵ�p�ڵ�ǰ��Ľڵ� q   q->next = p->next;  free(p);
// 1 �ҵ�q , q->next = p->next;  free(p);
// �������� 
// 2 ɾ����ͷ�ڵ� p == head   head = head->next; free(p);
// 3 Ҫɾ������β�ڵ� tail  p==tail   tail = q; q->next = p->next;  free(p); 
bool deletNode(node *p){
	if(p==NULL)
		return 0;	
	//ɾ������ͷ�ڵ�  
	if(p==g_sLink.head){
		g_sLink.head = g_sLink.head->pNext;
		// ���������иպ�ֻ��һ���ڵ����� 
		if(g_sLink.tail==p){
			g_sLink.tail = NULL;	
		}
		free(p);
		return 1;
	}	
	// ����һ������ 
	node * q = g_sLink.head;
	while(q!=NULL){
		if (q->pNext == p)
			break;
		q = q->pNext;
	}
	if(q!=NULL){
		q->pNext = p->pNext;
		// p�պ���β�ڵ�	
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
	// �ҵ�������Ч 
	if(p1!=NULL && p1==p){
		if(q==NULL){ // ɾ����ͷ�ڵ� 
			g_sLink.head = g_sLink.head->pNext;
			if(g_sLink.tail==p){ // ��ͷ�ڵ���ǡ����β�ڵ� 
				g_sLink.tail = NULL;
			}
		}
		else{ // ɾ���������ڵ� 
			q->pNext = p->pNext;
			if(g_sLink.tail==p){ // ɾ�ĸպ���β�ڵ� 
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
	printf("������Ҫɾ����ѧ�ţ�");
	scanf("%d",&n);
	node * p = serchByNum(n);
	if(p==NULL){
		printf("û�и�ѧ��\n");
		system("pause");
		return;
	}
	else{
		printf("ȷʵҪɾ��ѧ��Ϊ%d ��ѧ���𣿣�Y��",p->data.nNum);
		char c;
		fflush(stdin);
		scanf("%c",&c);
		if(c=='Y' || c=='y'){
			///g_s[pos].nNum = -1;
			bool b = deletNode2(p);
			if (b==1)
				printf("ɾ���ɹ���");
			else
				printf("ɾ��ʧ�ܣ�");
			system("pause");	
		}			
	}
}

void save(){
	FILE * pf = fopen("stu.data","wb");
	if(pf==NULL){
		printf("�����ļ�ʧ�ܣ�\n");
		return; 
	}
	node * p = g_sLink.head;
	while(p!=NULL){
		fwrite(&(p->data),sizeof(p->data),1,pf);
		p = p->pNext;
	}	
	
	fclose(pf);
	printf("�����ļ��ɹ���\n");
}

void load(){
	FILE * pf = fopen("stu.data","rb");
	if(pf==NULL){
		printf("��ȡ�ļ�ʧ�ܣ�\n");
		return; 
	}
	int i = 0; 
	stu s;
	while(fread(&s,sizeof(s),1,pf)>0){		
		i++;
		addNode(s);
	}
	printf("�������ݳɹ������� %d ��ѧ����Ϣ\n",i);
	fclose(pf);
}

void modify(){
	int n;
	printf("������Ҫ�޸�ѧ����ѧ�ţ�\n");
	scanf("%d",&n);
	node * p = serchByNum(n);
	if(p!=NULL){
			printf("�ҵ��ˣ���ѧ������Ϣ���£�\n");
			stu s = p->data;
			printf("%d %s %d %d %d\n",s.nNum,s.sName,s.nMath,s.nChin,s.nEngl);
			printf("���������� ��ѧ ���� Ӣ�\n");
			scanf("%s %d %d %d", p->data.sName,&(p->data.nMath),&(p->data.nChin),&(p->data.nEngl));
			return;
	}
	else
		printf("���޴���\n");
}

void findByNum(){
	int n;
	printf("������Ҫ����ѧ����ѧ�ţ�\n");
	scanf("%d",&n);
	node * p = serchByNum(n);
	if(p!=NULL){
		printf("�ҵ��ˣ���ѧ������Ϣ���£�\n");
		stu s = p->data;
		printf("%d %s %d %d %d\n",s.nNum,s.sName,s.nMath,s.nChin,s.nEngl);
	}
	else
		printf("���޴���\n");
}
void findByName(){
	char name[128];
	printf("������Ҫ����ѧ����������\n");
	scanf("%s",name);
	node * p = g_sLink.head;
	int bFind = 0;
	while(p!=NULL){
		if(strcmp(p->data.sName,name)==0){
			bFind = 1;
			printf("�ҵ��ˣ���ѧ������Ϣ���£�\n");
			stu s = p->data;
			printf("%d %s %d %d %d\n",s.nNum,s.sName,s.nMath,s.nChin,s.nEngl);
		}
		p = p->pNext;
	}
	if (bFind == 0){
		printf("���޴���\n");	
	}
}

void find(){
	printf("\t 1 ��ѧ�Ų���\n");
	printf("\t 2 ����������\n");
	int n;
	scanf("%d",&n);
	if(n==1)
		findByNum();
	if(n==2)
		findByName();
	else
		printf("�밴�ղ˵���Ҫ������\n");
}

void statstic(){
	int count = 0;
	node * p = g_sLink.head;
	while(p!=NULL){	
		p->data.nSum = p->data.nChin + p->data.nEngl + p->data.nMath;
		count++;
		p = p->pNext;
	}
	printf("ѧ������Ϊ %d\n",count);	
}

// �����ܳɼ��Ӹߵ��ͽ������� 
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
//	printf("\t1 ��ѧ��\n");
//	printf("\t2 �����ĳɼ�\n");
//	printf("\t3 ����ѧ�ɼ�\n");
//	printf("\t4 ��Ӣ��ɼ�\n");
	printf("\t5 ���ܳɼ�\n");
	printf("\t0 �˳�����\n");
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
	printf("1 ���\n");
	printf("2 ���\n");
	printf("3 ����\n");
	printf("4 �޸�\n");
	printf("5 ɾ��\n");
	printf("6 ͳ��\n");
	printf("7 ����\n");
	printf("8 ����\n");	
	printf("0 �˳�\n");
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
