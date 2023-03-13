#include "stdio.h"
void main()//while求和
{
    int i=0,n,sum=0; //初始化
    scanf("%d",&n);  
    while(i<=n)
    {
    	sum+=i;
    	i++;
    }
    printf("sum( %d ) = %d",n,sum);
}