/* Note:Your choice is C IDE */
#include "stdio.h"//do-while��׳�
void main()
{
    int i=1,n,q=1;
    printf("��n�Ľ׳�\n");
    printf("����n:");
    scanf("%d",&n);
    do
    {
    	i++;
    	q*=i;
    }while(i<n);
    printf("%d! = %d",n,q);
}