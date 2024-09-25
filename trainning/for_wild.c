/****************************************************************************
* @filename: for_ wild.c
* @brief:   This is a brief description.
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-26 13:59:29
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-26 14:00:14
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/



#include <stdio.h>

int main (void)
{
    int x;
    int y = 55;

    for (x = 1; y <= 75; y = (++x * 5) + 50)
        printf (" %10d %10d \n",x,y);

    getchar();

    return 0;
}
