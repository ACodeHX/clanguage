/* Note:Your choice is C IDE */
#include "stdio.h"
void main()
{      /**第二个C语言代码,数据类型的储存大小，可以使用sizeof(type)查看数据类型。
      （The second C code, the storage size of the data type, can be viewed using sizeof(type).）
*/
   
    printf("int 储存大小：%lu\n",sizeof(int));          //整形的数据类型的储存大小。
    
    printf("各数据类型的大小：\nint:%lu\nfloat:%lu\n",sizeof(int),sizeof(float));//整形和浮点的数据类型的储存大小。
    
    printf("double:%lu\n",sizeof(double));//双精度浮点的数据类型的储存大小。
    
    printf("long:%lu\nlong int:%lu\n",sizeof(long),sizeof(long int));//长整型的数据类型的储存大小。
    
    printf("short:%lu\n",sizeof(short));//短整型的数据类型的储存大小。
    
    printf("char:%lu",sizeof(char));//字符串的数据类型的储存大小。
}
