#include "stdio.h"//do-whileÇó½×³Ë
void main()
{
    int i=1,n,q=1;
    printf("ÇónµÄ½×³Ë\n");
    printf("ÊäÈën:");
    scanf("%d",&n);
    do
    {
    	i++;
    	q*=i;
    }while(i<n);
    printf("%d! = %d",n,q);
}
