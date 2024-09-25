/****************************************************************************
* @filename:  skippart.c
* @brief:   使用 continue 跳过部分循环
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-12-07 13:05:01
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-12-07 13:48:35
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/



#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    const float MIN = 0.0f;
    const float MAX = 100.0f;
    float score;
    float total = 0.0f;
    int n = 0;
    float min = MAX;
    float max = MIN;

    printf (" Enter the first score (q to quit) :");

    while (scanf("%f",&score) == 1)
    {
        if (score < MIN || score > MAX)
        {
            printf ("%0.1f is an invalid value. Try again :",score);
            continue;
        }

        printf (" Acceptiong %0.1f :\n",score);
        min = (score < min) ? score: min;
        max = (score > max) ? score: max;
        total += score;
        n++;
        printf ("Enter next score (q to quit) : ");
    }

    if (n > 0)
    {
        printf (" Average of %d scores is % 0.1f.\n",n,total/n);
        printf ("Low = % 0.1f, high = %0.1f  \n",min,max);
    }
    else
        printf ("No valid scores were entered . \n");

    system("PAUSE");

    return 0;
}
