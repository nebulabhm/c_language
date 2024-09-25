/****************************************************************************
* @filename:  rows2.c
* @brief:   使内部循环依赎于外部循环的嵌套循环
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-27 10:24:23
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-27 10:25:57
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/



#include <stdio.h>

int main (void)
{
    const int ROWS = 6;
    const int CHARS = 6;
    int row;
    char ch;

    for (row = 0; row < ROWS; row++)
    {
        for (ch = ('A' + row);ch < ('A'+CHARS); ch++)
            printf ("%c",ch);
        printf ("\n");
    }

    getchar();

    return 0;
}
