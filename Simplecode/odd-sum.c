#include "stdio.h"
void main()//���ֵ�������
{
	int i,n,Sum=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2==1)
		{
		   Sum+=i;
		}
	}
	printf("%d���ڵ�������%d\n",n,Sum);
    
}