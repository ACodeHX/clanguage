#include "stdio.h"
void main()//while���
{
    int i=0,n,sum=0; //��ʼ��
    scanf("%d",&n);  
    while(i<=n)
    {
    	sum+=i;
    	i++;
    }
    printf("sum( %d ) = %d",n,sum);
}