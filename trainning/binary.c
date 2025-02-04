/****************************************************************************
* @filename:  binary.c
* @brief:   以二进制形式输出整数
* @detail: This is the detail description.
* @Author: nebula
* @Create Date:   2015-12-22 14:45:57
* @Last Modified by:   nebula
* @Last Modified time: 2015-12-22 14:48:37
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

void to_binary (unsigned  long n);

int main (void)
{
    unsigned  long number;

    printf (" Enter an integer (q to quit) :  \n");

    while ( scanf ("%ul", &number) == 1)
    {
        printf (" Binary equivalent : ");
        to_binary(number);
        putchar('\n');
        printf (" Enter an integer (q to quit) :  \n");
    }

    printf (" Done \n");

    return 0;
}

void to_binary (unsigned  long n) /*  递归函数  */
{
    int r;

    r = n % 2;
    if (n >= 2)
        to_binary(n / 2);
    putchar('0' + r);

    return;
}
