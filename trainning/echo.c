/****************************************************************************
* @filename: echo.c
* @brief:   重复输入(行缓冲方式)
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-12-09 15:09:13
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-12-09 16:16:30
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

int main(void)
{
    char ch;

    while((ch = getchar()) != '#') {
        putchar(ch);
        /* code */
    }

    return 0;
}
