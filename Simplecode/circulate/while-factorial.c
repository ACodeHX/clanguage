/* Note:Your choice is C IDE */
#include "stdio.h"//while��׳�
void main()
{
    int i=1,n,q=1;
    printf("��n�Ľ׳�\n");
    printf("����n:");
    scanf("%d",&n);
    while(i<=n)
    {
    	q*=i;
    	i++;
    }
    printf("%d! = %d",n,q);
}