/****************************************************************************
* @filename:  animals.c
* @brief:   使用 switch 语句
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-12-07 14:07:34
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-12-16 14:16:55
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>
#include <ctype.h>

int main (void)
{
    char ch;

    printf ("Give me a l etter of the alphabet,and I will give ");
    printf (" an animal name\nbeginning  with that letter \n");
    printf (" Please type in a letter : type # to end my act .\n");

    while ((ch = getchar()) != '#')
    {
        if ('\n' == ch)
            continue;

        if (islower(ch)) // 只识别小写字母
            switch (ch)
            {
            case 'a':
                printf ("argali,a wild sheep of Asia  \n");
                break;

            case 'b':
                printf ("babirusa,a wild pig of Malay  \n");
                break;

            case 'c':
                printf (" coati,racoonli ke mammal \n");
                break;

            case 'd':
                printf ("desman,aquatic,molelike critter  \n");
                break;

            case 'e':
                printf (" echidna,the spiny anteater  \n");
                break;

            case 'f':
                printf (" fisher,brownish marten \n");
                break;

            default:
                printf (" That's a stumper \n");
            } // switch 语句结束
        else
            printf (" I recognize only lowercase letters  \n");

        while (getchar() != '\n')
            continue; // 跳过输入行的剩余部分

        printf (" Please type another letter of a # \n");
    } // while 循环结束

    printf ("bye \n");

    return 0;
}
