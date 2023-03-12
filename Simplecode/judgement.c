#include "stdio.h"
void main()/*第三个代码，判断正负数 */
{
   int i;
   printf("请输入一个整数:"); 
   scanf("%d",&i);
   if(i>0)
   {
   	  printf("\n%d 是正数!",i);
   }
   else if(i==0)
   {
   	  printf("\n%d 是零!",i);
   }
   else
   {
   	  printf("\n%d 是负数!",i);
   }
   
}