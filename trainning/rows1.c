/****************************************************************************
* @filename: rows1.c
* @brief:   使用嵌套循环
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-26 16:20:37
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-26 16:22:18
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/



#include <stdio.h>

#define ROWS 6
#define CHARS 10

int main (void)
{
    int row;
    char ch;

    for (row = 0; row < ROWS; row++) /*  第 10 行 */
    {
        for (ch = 'A'; ch < ('A'+CHARS);ch++) /* 第 12 行 */
            printf ("%c",ch);
        printf ("\n");
    }

    getchar();

    return 0;
}
