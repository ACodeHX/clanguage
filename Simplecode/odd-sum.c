#include "stdio.h"
void main()//数字的奇数和
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
	printf("%d以内的奇数和%d\n",n,Sum);
    
}