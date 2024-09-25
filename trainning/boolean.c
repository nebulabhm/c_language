/****************************************************************************
* @filename: boolean.c
* @brief:   使用 _Bool 变量  .
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-25 15:28:37
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-25 15:30:29
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/



#include <stdio.h>

int main (void)
{
    long num;
    long sum = 0L;
    _Bool  input_is_good;

    printf ("Please enter an integer to be summed .");
    printf (" ( q to quit):");
    input_is_good = (scanf("%ld",&num) == 1);

    while (input_is_good)
    {
        sum = sum + num;
        printf ("Please enter next integer(q to quit) :");
        input_is_good = (scanf("%ld",&num) == 1);
    }

    printf ("Those integers sum to %ld . \n",sum);

    getchar();
    getchar();
    getchar();

    return 0;
}
