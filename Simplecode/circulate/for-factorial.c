#include "stdio.h"
void main()//利用for求阶乘
{
    int i,n,q=1;
    printf("求n的阶乘\n");
    printf("输入n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	q*=i;
    }
    printf("%d! = %d",n,q);
}