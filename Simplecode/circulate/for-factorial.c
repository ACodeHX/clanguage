#include "stdio.h"
void main()//����for��׳�
{
    int i,n,q=1;
    printf("��n�Ľ׳�\n");
    printf("����n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	q*=i;
    }
    printf("%d! = %d",n,q);
}