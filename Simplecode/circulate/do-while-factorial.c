/* Note:Your choice is C IDE */
#include "stdio.h"//do-while求阶乘
void main()
{
    int i=1,n,q=1;
    printf("求n的阶乘\n");
    printf("输入n:");
    scanf("%d",&n);
    do
    {
    	i++;
    	q*=i;
    }while(i<n);
    printf("%d! = %d",n,q);
}