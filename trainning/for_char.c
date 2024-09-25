/****************************************************************************
* @filename:  for_char.c
* @brief:   This is a brief description.
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-26 13:49:18
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-26 13:50:30
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/



#include <stdio.h>

int main (void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
        printf (" The ASCII value for %c is %d \n",ch,ch);

    getchar();

    return 0;
}
