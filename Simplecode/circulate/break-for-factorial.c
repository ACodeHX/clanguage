#include "stdio.h"
void main()//����break-for��׳�
{
    int i,n,q=1;
    printf("��n�Ľ׳�\n");
    printf("����n:");
    scanf("%d",&n);
    for(i=1;;i++)
    {
    	if(i>n)
    	break;
    	q*=i;
    }
    printf("%d! = %d",n,q);
}