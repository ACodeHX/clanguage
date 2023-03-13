/* Note:Your choice is C IDE */
#include "stdio.h"//while求阶乘
void main()
{
    int i=1,n,q=1;
    printf("求n的阶乘\n");
    printf("输入n:");
    scanf("%d",&n);
    while(i<=n)
    {
    	q*=i;
    	i++;
    }
    printf("%d! = %d",n,q);
}