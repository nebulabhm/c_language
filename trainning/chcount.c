/****************************************************************************
* @filename:   chcount.c
* @brief:   使用逻辑与运算符
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-12-04 12:05:28
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-12-04 12:24:39
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/



#include <stdio.h>
#include <stdlib.h> /*  为了使用  system("PAUSE"); 功能 */

#define PERIOD '.'

int main (void)
{
    int ch;
    int charcount = 0;

    while ((ch = getchar()) != PERIOD)
    {
        if (ch != '"' && ch != '\'')
            charcount++;
    }

    printf ("Ther are %d non-quote characters \n",charcount);
    system("PAUSE");

    return 0;
}
