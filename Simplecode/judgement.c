#include "stdio.h"
void main()/*���������룬�ж������� */
{
   int i;
   printf("������һ������:"); 
   scanf("%d",&i);
   if(i>0)
   {
   	  printf("\n%d ������!",i);
   }
   else if(i==0)
   {
   	  printf("\n%d ����!",i);
   }
   else
   {
   	  printf("\n%d �Ǹ���!",i);
   }
   
}