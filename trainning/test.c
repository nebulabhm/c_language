/****************************************************************************
* @filename: flename
* @brief:   This is a brief description.
* @detail: This is the detail description.
* @Author: nebula
* @Date:   2015-11-16 15:27:45
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-12-17 12:10:33
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    int call_back = 0;
    char str_[20] ;

    call_back =  printf("Maximum xxx value on this system is %f.\n",FLT_EPSILON);
    scanf("%10c",str_);
    printf("The call_back of printf() is %d.\n",sizeof call_back);
    printf("The input string is %s.\n",str_);
    printf("%-10d %-10d %-10d \n",12,234,1222);
    printf("%-10d %-10d %-10d \n",4,5,23);

    getchar();
    getchar();

    return 0;
}
