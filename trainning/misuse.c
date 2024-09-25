/****************************************************************************
* @filename: misuse.c
* @brief:   不正确地使用函数例子
* @detail: This is the detail description.
* @Author: nebula
* @Create Date:   2015-12-17 13:47:05
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-12-17 14:07:17
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

int imax(int,int);     // 旧式的函数声明

int main(void)
{
    printf("The maximum of %d and %d is %d \n", 3, 5, imax(3,5) );
    printf("The maximum of %d and %d is %d \n", 3, 5, imax(3.0, 5.0));

    return 0;
}

/**
 * [求两个数中的较大的]
 * @Author: nebula
 * @Date:   2015-12-17
 * @Time:   2015-12-17T13:51:06+0800
 * @param   n                        [比较的数值m]
 * @param   m                        [比较的数值m]
 * @return                           [两个数值中的较大的一个]
 */
int imax(n, m)
int n, m;
{
    int max;

    if (n > m)
    {
        max = n;
    }
    else
        max = m;

    return max;
}
