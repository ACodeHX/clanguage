#include "stdio.h"
void main()//forѭ��
{
    int i=1,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)//for(���ʽ;���ʽ;ѭ����)
    {
    sum+=i;	
    }
    printf("sum( %d ) = %d",n,sum);
}