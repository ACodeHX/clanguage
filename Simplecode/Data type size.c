/* Note:Your choice is C IDE */
#include "stdio.h"
void main()
{      /**�ڶ���C���Դ���,�������͵Ĵ����С������ʹ��sizeof(type)�鿴�������͡�
      ��The second C code, the storage size of the data type, can be viewed using sizeof(type).��
*/
   
    printf("int �����С��%lu\n",sizeof(int));          //���ε��������͵Ĵ����С��
    
    printf("���������͵Ĵ�С��\nint:%lu\nfloat:%lu\n",sizeof(int),sizeof(float));//���κ͸�����������͵Ĵ����С��
    
    printf("double:%lu\n",sizeof(double));//˫���ȸ�����������͵Ĵ����С��
    
    printf("long:%lu\nlong int:%lu\n",sizeof(long),sizeof(long int));//�����͵��������͵Ĵ����С��
    
    printf("short:%lu\n",sizeof(short));//�����͵��������͵Ĵ����С��
    
    printf("char:%lu",sizeof(char));//�ַ������������͵Ĵ����С��
    
   
}