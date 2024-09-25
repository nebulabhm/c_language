/****************************************************************************
* @filename:  cypher1.c
* @brief:   改变输入，只保留其中的空格
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-27 12:45:54
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-27 13:00:01
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

#define SPACE " " /* SPACE 相当于  "引号-空格-引号 " */

int main (void)
{
    char ch;

    while ((ch = getchar()) != '\n') /* 当一行末结束时 */
    {
        if (ch == SPACE) /* 空格不变 */
            putchar(ch); /* 不改变这个字符 */
        else
            putchar(ch + 1); /* 改变其他字符 */
    }

    putchar(ch);    // 打印换行字符

    system("PAUSE");

    return 0;
}
