/****************************************************************************
* @filename: divisors.c
* @brief:   使用嵌奋 if 显示一个数的约数
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-27 14:57:52
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-27 15:20:52
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>
#include <stdbool.h>

int main ( void)
{
    // typedef int bool;
    unsigned long num; // 要检查的数
    unsigned long div; // 可能的约数
    bool  isPrime; // 素数的标志

    printf ("please enter an integer for analysis : ");
    printf ("enter q to quit \n");
    printf("The size of unsigned long is %d\n",sizeof num);

    while (scanf ("%lu",&num) == 1)
    {
        for (div = 2, isPrime = true; (div * div)<= num; div++)
        {
            if ( num % div == 0)
            {
                if ((div * div) != num)
                    printf ("%lu is divisible by %lu and %lu\n",num,div,num/div);
                else
                    printf ("%lu is divisible by %lu ",num,div);
                isPrime = false;
            }
        }

        if (isPrime)
            printf ("%lu  is prime \n",num);
        printf ("please enter an integer for analysis : ");
        printf (" enter q to quit \n");
    }

    printf ("Bye \n");

    getchar();

    return 0;
}
