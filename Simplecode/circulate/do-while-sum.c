#include "stdio.h"
void main()//do-whileѭ��
{
    int i=1,n,sum=0;//����ǵó�ʼ��X�nX
    scanf("%d",&n);
    do//do-whileѭ������ִ�к��жϣ���ִ�д�������һ��
    {
    	sum+=i;
    	i++;
    }while(i<=n);//���������������
    printf("sum( %d ) = %d",n,sum);
}