#include "stdio.h"
void main()//do-while循环
{
    int i=1,n,sum=0;//这里记得初始化X﹏X
    scanf("%d",&n);
    do//do-while循环是先执行后判断，；执行次数至少一次
    {
    	sum+=i;
    	i++;
    }while(i<=n);//如果不成立则跳出
    printf("sum( %d ) = %d",n,sum);
}