/****************************************************************************
* @filename: zeno.c
* @brief:   序列的和
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-26 15:15:57
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-26 15:49:52
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

int main (void)
{
    int t_ct; /*  项计数  */
    double time,x;
    int limit;

    printf (" Enter the number of terms you want :");
    scanf ("%d",&limit);

    for (time = 0, x = 1, t_ct = 1; t_ct <= limit; t_ct++, x *= 2.0)
    {
        time += 1.0/x;
        printf ("time = %f when terms = %d  \n",time, t_ct);
    }

    getchar();
    getchar();

    return 0;
}
