/****************************************************************************
 * @filename: addemup.c
* @brief:   4种类型的语句.
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-24 14:25:42
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-24 14:27:42
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

int main(void)
{
    int count,sum;

    count = 0;
    sum = 0;

    while(count++<20) {
        sum = sum + count;
    }

    printf("sum = %d \n",sum);

    getchar();

    return 0;
}
