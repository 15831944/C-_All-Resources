#include <stdio.h>
//int main()
//{
//	int a;
//	//a = 1 && 5;  // ����Ϊ�棬0Ϊ��
//	a = 1 && 'd'; // �ַ���������ASC�룬Ҳ��һ������
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
//	int n = sizeof(a); // ��������������ֽ���
//	//int n = sizeof(a[0]); // ���Լ��������е�һ��Ԫ�ص��ֽ���
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
	printf("������ѧ�ţ���������ѧ�ɼ������ĳɼ�,Ӣ��ɼ�\n");
	scanf("%d %s %d %d %d",&s1.nNum,s1.sName,&s1.nMath,
		&s1.nChin,&s1.nEngl);
	printf("ѧ�ţ�%d,������%s,��ѧ�ɼ���%d\n",s1.nNum,
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
		// ��i��ѧ�����ܷ������ 
		int sum = s[i].nMath+s[i].nEngl+s[i].nChin;
		if(sum>iMax){
			iMax = sum; pos = i; 
		}
	}
	printf("����ܷ֣�%d\n",iMax);
	printf("��ѧ����ѧ�ţ�%d,������%s,��ѧ�ɼ���%d\n",
		s[pos].nNum,s[pos].sName,s[pos].nMath);
}
*/

// ѡ�������㷨 
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
	printf("����֮ǰ\n");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<4;i++){
	// �ӵ�iλ�����һλ�����ֵ���͵�iλ��ֵ����
	    int k=i,iMax=a[i],j;
		for(j=i;j<5;j++){
			if(a[j]>iMax){
				iMax = a[j]; k=j;
			}
		}
		int t;
		t = a[k]; a[k] = a[i]; a[i] = t;
	}
	printf("����֮��\n");
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
	printf("����֮ǰ\n");
	for(i=0;i<5;i++){
		printf("ѧ�ţ�%d,������%s,��ѧ��%d,Ӣ�%d,���ģ�%d,�ܷ�: %d\n",
		s[i].nNum,s[i].sName,s[i].nMath,s[i].nEngl,s[i].nChin,s[i].nSum);
	}
	for(i=0;i<4;i++){
	// �ӵ�iλ�����һλ�����ֵ���͵�iλ��ֵ����
	    int k=i,j;
		for(j=i;j<5;j++){
			if(s[j].nSum>s[k].nSum){
				k=j;
			}
		}
		stu t;
		t = s[k]; s[k] = s[i]; s[i] = t;
	}
	printf("����֮��\n");
	for(i=0;i<5;i++){
		printf("ѧ�ţ�%d,������%s,��ѧ��%d,Ӣ�%d,���ģ�%d,�ܷ�: %d\n",
		s[i].nNum,s[i].sName,s[i].nMath,s[i].nEngl,s[i].nChin,s[i].nSum);
	}
	
}
*/
/*
ѧ������ϵͳ����� ��� ���� ɾ���� ͳ�ƣ�����
ѧ����Ϣ����δ洢�� ѧ���ṹ�壬ѧ���ṹ�����顣
ģ�黯����ƣ�ÿ���������ɺ�����
�ַ��˵�
1 ���
2 ���
3 ����
4 �޸�  
5 ɾ��
7 ͳ��
8 ����
0 �˳� 

ɾ���Ĺ��ܣ���ɾ����Ԫ�ص�ѧ������Ϊ-1����-1�����ѧ����Ϣ�Ѿ���Ч�� 
1������Ҫɾ��ѧ����ѧ��
2������ѧ�Ų��Ҹ�ѧ����λ�� => pos
if (û�ҵ�)
	��ʾû�и�ѧ�����˳���
else 
	g_s[pos].num = -1;
	
������ܣ���������ѧ��Ϊ-1��Ԫ�أ��Ͳ�������ʾ��Ԫ���ˡ�

��ӹ���: ����ѧ��Ϊ-1��λ�ã�Ҳ���Գ�Ϊ�����Ԫ�ص�λ�á� 

ͳ�ƹ��ܣ���ÿ��ͬѧ���ּܷ������������nSum�ֶΡ�ͳ�����һ���ж��ٸ�
��Ч��ѧ���� 

�����ܣ����Ը��ݲ�ͬ���ֶζ�ѧ���������򣨴ӵ͵��ߣ���
1�� ����ѧ��
2�� �������ĳɼ�����
3������Ӣ��ɼ�����
4�� ������ѧ�ɼ�����
5�� �����ܷ����� 

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


// ����ѧ�Ž��в��ң��ҵ�������λ�� �����û���ҵ� ������-1 
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
	printf("������Ҫ����ѧ����ѧ�ţ�\n");
	scanf("%d",&n);
	int i = serchByNum(n);
	if(i!=-1){
		printf("�ҵ��ˣ���ѧ������Ϣ���£�\n");
		printf("%d %s %d %d %d\n",g_s[i].nNum,g_s[i].sName,g_s[i].nMath,g_s[i].nChin,g_s[i].nEngl);
	}
	else
		printf("���޴���\n");
}
void findByName(){
	char name[128];
	printf("������Ҫ����ѧ����������\n");
	scanf("%s",name);
	int i=0;
	int bFind = 0;
	while(i<SIZE && g_s[i].nNum!=0){
		if(strcmp(g_s[i].sName,name)==0){
			bFind = 1;
			printf("�ҵ��ˣ���ѧ������Ϣ���£�\n");
			printf("%d %s %d %d %d\n",g_s[i].nNum,g_s[i].sName,g_s[i].nMath,g_s[i].nChin,g_s[i].nEngl);
		}
		i++;
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
void modify(){
	int n;
	printf("������Ҫ�޸�ѧ����ѧ�ţ�\n");
	scanf("%d",&n);
	int i = serchByNum(n);
	if(i!=-1){
			printf("�ҵ��ˣ���ѧ������Ϣ���£�\n");
			printf("%d %s %d %d %d\n",g_s[i].nNum,g_s[i].sName,g_s[i].nMath,g_s[i].nChin,g_s[i].nEngl);
			printf("���������� ��ѧ ���� Ӣ�\n");
			scanf("%s %d %d %d",g_s[i].sName,&g_s[i].nMath,&g_s[i].nChin,&g_s[i].nEngl);
			return;
	}
	else
		printf("���޴���\n");
}
 
//void find(){
//	int n;
//	printf("������Ҫ����ѧ����ѧ�ţ�\n");
//	scanf("%d",&n);
//	int i=0;
//	while(i<SIZE && g_s[i].nNum!=0){
//		if(g_s[i].nNum==n){
//			printf("�ҵ��ˣ���ѧ������Ϣ���£�\n");
//			printf("%d %s %d %d %d\n",g_s[i].nNum,g_s[i].sName,g_s[i].nMath,g_s[i].nChin,g_s[i].nEngl);
//			return;
//		}
//		i++;
//	}
//	printf("���޴���\n");
//}


//void modify(){
//	int n;
//	printf("������Ҫ����ѧ����ѧ�ţ�\n");
//	scanf("%d",&n);
//	int i=0;
//	while(i<SIZE && g_s[i].nNum!=0){
//		if(g_s[i].nNum==n){
//			printf("�ҵ��ˣ���ѧ������Ϣ���£�\n");
//			printf("%d %s %d %d %d\n",g_s[i].nNum,g_s[i].sName,g_s[i].nMath,g_s[i].nChin,g_s[i].nEngl);
//			printf("���������� ��ѧ ���� Ӣ�\n");
//			scanf("%s %d %d %d",g_s[i].sName,&g_s[i].nMath,&g_s[i].nChin,&g_s[i].nEngl);
//			return;
//		}
//		i++;
//	}
//	printf("���޴���\n");
//}

void browse( ){
	 printf("ѧ���б���Ϣ���£�\n");
     int i=0;
     printf("\tѧ�� \t���� \t��ѧ \t���� \tӢ��  \t�ܷ�\n"); 
	 while(i<SIZE && g_s[i].nNum!=0){
	 	if(g_s[i].nNum>0)
			printf("\t%d \t%s \t%d \t%d \t%d \t%d\n",
			g_s[i].nNum,g_s[i].sName,g_s[i].nMath,g_s[i].nChin,g_s[i].nEngl,g_s[i].nSum);
		i++;
	 }
}
//��������ռ�ȫ�����������
void input( ){
	char c;
	do{
		int i=0;
		// �ҵ�һ�����Դ��ѧ����Ϣ��Ԫ�� 
		while(i<SIZE && g_s[i].nNum>0){
			i++;
		}
		if(i>=SIZE){
			printf("�ռ��Ѿ����ˣ������ٷ��ˣ�\n");
			return;
		}
		printf("������ѧ�� ���� ��ѧ ���� Ӣ��\n");		
		scanf("%d %s %d %d %d",&g_s[i].nNum,g_s[i].sName,&g_s[i].nMath,&g_s[i].nChin,&g_s[i].nEngl);
		printf("�Ƿ����¼��ѧ����Ϣ��(N for exit)");		
		//scanf("%c",&c);
		fflush(stdin);
		scanf("%c",&c);
	}while(c!='N' && c!='n'); 
}
void deleteStu(){
	int n;
	printf("������Ҫɾ����ѧ�ţ�");
	scanf("%d",&n);
	int pos = serchByNum(n);
	if(-1==pos){
		printf("û�и�ѧ��\n");
		system("pause");
		return;
	}
	else{
		printf("ȷʵҪɾ��ѧ��Ϊ%d ��ѧ���𣿣�Y��",g_s[pos].nNum);
		char c;
		fflush(stdin);
		scanf("%c",&c);
		if(c=='Y' || c=='y'){
			g_s[pos].nNum = -1;
			printf("ɾ���ɹ���");
			system("pause");	
		}			
	}
}
// ������Чѧ�����������ڲ����� 
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
	printf("ѧ������Ϊ %d\n",count);
}
// ѡ�������㷨 

//void sortByNum(){
//	int n = getCount();
//	int i;
//	for(i=0;i<n;i++){
//	// �ӵ�iλ�����һλ�����ֵ���͵�iλ��ֵ����
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

// ����C����qsort���� 
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

// ����ɾ��ѧ��Ϊ-1����Ч����,�ڲ����ú��� ˼·1������������ 
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

// ����ɾ��ѧ��Ϊ-1����Ч����,�ڲ����ú��� ˼·2��ֱ����ԭ�����ϲ��� 
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
	printf("\t1 ��ѧ��\n");
	printf("\t2 �����ĳɼ�\n");
	printf("\t3 ����ѧ�ɼ�\n");
	printf("\t4 ��Ӣ��ɼ�\n");
	printf("\t5 ���ܳɼ�\n");
	printf("\t0 �˳�����\n");
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
		printf("�����ļ�ʧ�ܣ�\n");
		return; 
	}
	clearMinus();
	int n = getCount();
	fwrite(g_s,sizeof(stu),n,pf);
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
	while(fread(&g_s[i],sizeof(stu),1,pf)>0){
		i++;
	}
	printf("�������ݳɹ������� %d ��ѧ����Ϣ\n",i);
	fclose(pf);
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
	memset(g_s,0,sizeof(g_s));
	load();
	while(menu()){
			
	}
}
/*
���Դ洢�����������޵ġ�
��ν����
������̬����ѧ���ڵ㣬��̬�����ڴ棬�����������Ѷȴ�
��Ҫ����ָ��֪ʶ����������ݽṹ�� 
*/ 


