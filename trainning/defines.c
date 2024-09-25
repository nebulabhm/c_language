/*
* @Author: nebulabhm760
* @Date:   2015-11-16 14:58:57
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-17 12:30:07
* defines.c  --- 使用 linmit.h  和 float.h 中定以的常量
*/

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main (void)
{
    printf ("Some number linmits for this system:\n");
    printf ("Biggest int: %d \n",INT_MAX);
    printf ("Smallest signed long: %lld  \n", LLONG_MIN);
    printf ("One byte = %d bits on this system  \n",CHAR_BIT);
    printf ("Largest double: %e \n",DBL_MAX);
    printf ("Smallest normal float: %e  \n",FLT_MIN);
    printf ("Float precistion = %d digits  \n", FLT_DIG);
    printf ("Float epsilon = %e \n",FLT_EPSILON);

    getchar();

    return 0;
}
