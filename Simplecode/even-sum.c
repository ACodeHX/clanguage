#include "stdio.h"
void main()//���ֵ�ż����
{
	int i,n,Sum=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
		   Sum+=i;
		}
	}
	printf("%d���ڵ�ż����%d\n",n,Sum);
    
}