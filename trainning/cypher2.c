/****************************************************************************
* @filename: cypher2.c
* @brief:   改变输入，只留非字母字符
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-27 13:14:18
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-27 13:20:43
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>
#include <ctype.h> // 为 isalpha（）提供原型

int main (void)
{
    char ch;

    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch)) //如果是一个字母
            putchar (ch+1); // 则改变它
        else //否则
            putchar (ch); // 原样打印它
    }

    putchar(ch); // 打印换行字符

    system("PAUSE");

    return 0;
}
