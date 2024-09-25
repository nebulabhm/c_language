/****************************************************************************
* @filename: cmpflt.c
* @brief:   浮点数比较
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-25 14:31:25
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-25 14:34:14
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/



#include <stdio.h>
#include <math.h>

int main (void)
{
    const double ANSWER = 3.14159;
    double response;

    printf ("What is the value of pi?\n");
    scanf ("%lf",&response);

    while (fabs(response - ANSWER) > 0.0001)
    {
        printf ("Try again! \n");
        scanf ("%lf",&response);
    }

    printf ("Close enough \n");

    getchar();
    getchar();

    return 0;
}
