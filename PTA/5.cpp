#include<stdio.h>
int main()
{
    int i,j,k,s,t,l,n,res;
    char a;
    int str[30]={1,7,17,31};
    for(i=3;i<30;i++)
    {
        str[i]=str[i-1]+6+(i-1)*4;   //按规律给数组赋值
    }
    scanf("%d %c",&n,&a);
    for(k=0;k<30;k++)
    {
        if(n<str[k]) break;   //n与数组的值比较
        res=n-str[k];    //计算没用掉的符号数
    }
    t=k;l=k;   //t,l供接下来打印图形用
    for(i=0;i<k;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(j=0;j<2*t-1;j++)
        {
            printf("%c",a);
        }
        t--;
        printf("\n");
    }
    for(i=0,t=l-2;i<k-1;i++,t--)
    {
        for(j=0;j<t;j++)
        {
            printf(" ");
        }
        for(j=0;j<2*(i+1)+1;j++)
        {
            printf("%c",a);
        }
        printf("\n");
    }
    printf("%d\n",res);
}
