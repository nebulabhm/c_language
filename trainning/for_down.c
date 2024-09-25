/****************************************************************************
* @filename: for_down.c
* @brief:   This is a brief description.
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-26 12:35:52
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-26 12:37:06
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/



#include <stdio.h>

int main (void)
{
    int secs;

    for (secs = 5; secs > 0; secs --)
        printf ("%d seconds!\n",secs);
    printf ("We have ignition\n");

    getchar();

    return 0;
}
