/****************************************************************************
 * @filename: bottles.c
* @brief:   减量运算符.
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-24 12:31:20
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-24 12:37:11
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>
#define MAX 100

int main(void)
{
    int count = MAX + 1;

    while(--count > 0)
    {
        printf("%d bottles of spring water on the wall"
            " %d bottles of spring water \n",count,count);
        printf("take one down and pass it around,\n");
        printf("%d bottles of spring water\n\n",count-1);
    }

    getchar();
    getchar();

    return 0;
}
