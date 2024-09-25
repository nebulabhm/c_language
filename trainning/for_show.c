/****************************************************************************
* @filename:  for_show.c
* @brief:   This is a brief description.
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-26 14:24:43
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-26 14:26:12
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

int main (void)
{
    int num = 0;

    for (printf ("Keep entering numbers \n");num != 6;)
        scanf ("%d",&num);
    printf ("That's the one I want\n");

    getchar();
    getchar();

    return 0;
}
