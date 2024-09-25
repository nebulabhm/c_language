/****************************************************************************
* @filename: when.c
* @brief:   何时退出一个循环
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-25 13:59:04
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-25 14:01:18
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

int main (void)
{
    int n = 5;

    while (n < 7) //  第 7 行
    {
        printf (" n = %d \n",n);
        n++; // 第 10 行
        printf ("Now n = %d\n",n); // 第 11 行
    }

    printf ("The loop has finished . \n");

    getchar();

    return 0;
}
