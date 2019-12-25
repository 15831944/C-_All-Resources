#include<iostream.h>
#include"stack.h"
#include <iomanip.h>
#include <stdio.h>

Point g_round[8] = {0,0,0};//����Ľṹ�壬������STACK��CPP
void SetRound(Point cur)//��������λ�õ����п���λ�õ����꣬���丳��g_round[8]
{
	Point round[] = 
	{
		cur.x-2,cur.y+1,0,cur.x-1,cur.y+2,0,
		cur.x+1,cur.y+2,0,cur.x+2,cur.y+1,0,
		cur.x+2,cur.y-1,0,cur.x+1,cur.y-2,0,
		cur.x-1,cur.y-2,0,cur.x-2,cur.y-1,0
	};
	for(int i=0;i<8;i++)
	{
		g_round[i].x = round[i].x;
		g_round[i].y = round[i].y;
	}
}
bool GetRound(int i,Point &pt)//������λ����Χ���а˸�λ�����긳��ָ�����pt�����ж��������
{
	pt.x = g_round[i-1].x;
	pt.y = g_round[i-1].y;
	if(pt.x<0 || pt.y<0 || pt.x>7 || pt.y>7)//�ж��������
		return false;
	else 
		return true;
}

void main()
{
	int s=1;
	char yn;
	printf( "===============��̤���̵ĳ������===============\n");
	
	while(s)
	{
		int order[8][8] = {0};     //��ʼ��
		int count = 0;             //����������¼���ǵڼ�����
		
		Point begin;
		printf("���������������ϵĳ�ʼλ��x��y��\n");
		printf("[���� 1��x��8 �� 1��y��8 �����磺4 7] :");
	    scanf ("%d%d",&begin.x,&begin.y);
			
		begin.from = 0;
		while(begin.x>8 || begin.x<1 || begin.y>8 || begin.y<1)
		{
			printf("��������!������������......");
			printf("���������������ϵĳ�ʼλ��x��y��");
		    printf("[���� 1��x��8 �� 1��y��8 �����磺4 7] :");
		    scanf ("%d%d",&begin.x,&begin.y);
			
			
			
		}
		begin.x--;    //ʵ���±���0~7��
		begin.y--;
		
		Stack horseVisit;
		Point cur,next;
		Initstack(horseVisit);
		Push(horseVisit,begin);       //��λ�ý�ջ
		order[begin.x][begin.y] = ++count;        //��������1
		
		while(count<64)
		{                            //����63������߷�
			GetTop(horseVisit,cur);
			SetRound(cur);
			
			bool flag = false;
			for(int i=cur.from+1;i<=8;i++)
			{       //������ʱ������ȹ���ѡ����һ�����õ���λ��
				if(GetRound(i,next) && order[next.x][next.y]==0)
				{        //����λ��δ��ʹ�ã����ջ����������1
					flag = true;
					order[next.x][next.y] = ++count;
					
					Pop(horseVisit,cur);
					cur.from = i;
					Push(horseVisit,cur);
					
					next.from = 0;
					Push(horseVisit,next);
					break;
				}
			}
			if(!flag)
			{   //�����ǰλ����Χû��·��������ջ��ֱ���˵����������λ�õ�����
				int j=0,p;
				if(begin.x==2 && begin.y==6) p=4;
				else p=5;
				while(j<p && GetDeep(horseVisit)>1)
				{
					Pop(horseVisit,cur);
					order[cur.x][cur.y] = 0;
					count--;
					j++;
				}
			}
		}
		DestroyStack(horseVisit);     //��ɺ�����ջ
		printf("���̱�ʾ:\n");
		printf("  1   2   3   4   5   6   7   8\n");
		printf("�����Щ��Щ��Щ��Щ��Щ��Щ��Щ���\n");
		for(int i=0;i<8;i++)
		{            //���order���飬��������ֵΪ·��
       
		
			for(int j=0;j<8;j++)
			{
		    printf("��%2d",order[i][j]); 
           
			}  
        	printf("��");
			    printf("\n");
         	if(i==7)printf("�����ة��ة��ة��ة��ة��ة��ة���\n");
			else printf ("�����੤�੤�੤�੤�੤�੤�੤��\n");
		}
		printf("���Ƿ���Ҫ�������иó���y--������n--�˳���:");
	    scanf ("%d",&yn);
			
	
		if(yn=='y'||yn=='Y')  s=1;
		else  
		{
			s=0;
			printf("===================ллʹ�ã�===================");
		}
	}
}