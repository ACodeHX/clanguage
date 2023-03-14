#include "stdio.h"//whileÇó½×³Ë
void main()
{
    int i=1,n,q=1;
    printf("ÇónµÄ½×³Ë\n");
    printf("ÊäÈën:");
    scanf("%d",&n);
    while(i<=n)
    {
    	q*=i;
    	i++;
    }
    printf("%d! = %d",n,q);
}
