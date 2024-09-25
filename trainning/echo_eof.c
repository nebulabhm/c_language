/****************************************************************************
* @filename: echo_eof.c
* @brief:   重复输入，知道文件的结尾
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-12-10 12:19:04
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-12-10 12:21:36
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

int main(void)
{
    int ch;

    while((ch = getchar()) != EOF) {
        putchar(ch);
    }

    return 0;
}
