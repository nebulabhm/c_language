/****************************************************************************
* @filename:  vowels.c
* @brief:   使用多重标签
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-12-08 15:41:53
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-12-08 15:47:13
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

int main (void)
{
    char ch;
    int a_ct, e_ct, i_ct, o_ct, u_ct;
    a_ct = e_ct = i_ct = o_ct = u_ct = 0;

    printf (" Enter some text: enter # to quit  \n");

    while ((ch = getchar()) != '#')
    {
        switch(ch)
        {
            case 'a':
            case 'A':
                a_ct++;
                break;
            case 'e':
            case 'E':
                e_ct++;
                break;
            case 'i':
            case 'I':
                i_ct++;
                break;
            case 'o':
            case 'O':
                o_ct++;
                break;
            case 'u':
            case 'U':
                u_ct++;
                break;
            default :
                break;
        } // switch 语句结束
    } // while 循环结束

    printf (" number of vowels : A E I O U  \n");
    printf (" %4d %4d %4d %4d %4d\n",a_ct, e_ct, i_ct, o_ct, u_ct);

    return 0;
}
