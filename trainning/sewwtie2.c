/****************************************************************************
* @filename: sewwtie2.c
* @brief:    一个使用 for  的计数循环.
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-25 15:56:02
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-25 15:57:24
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/



#include <stdio.h>

int main (void)
{
    const int NUMBER = 22;
    int count;

    for (count = 1; count <= NUMBER ; count++)
        printf (" Be my Valentine !\n");

    getchar();

    return 0;
}
