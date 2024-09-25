/****************************************************************************
* @filename: for_13s.c
* @brief:   This is a brief description.
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-26 13:37:21
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-26 13:38:49
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/



#include <stdio.h>

int main (void)
{
    int n;

    for (n = 2; n < 60; n = n + 13) /*以 13 计数 */
        printf ("%d \n",n);

    getchar();

    return 0;
}
