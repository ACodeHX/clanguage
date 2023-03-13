#include "stdio.h"
void main()//for循环
{
    int i=1,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)//for(表达式;表达式;循环体)
    {
    sum+=i;	
    }
    printf("sum( %d ) = %d",n,sum);
}