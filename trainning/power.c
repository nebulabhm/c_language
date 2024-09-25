/****************************************************************************
* @filename: power.c
* @brief:   计算数值的整数次幂
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-27 12:01:36
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-27 12:24:25
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

double power (double n, int p); // ANSI 原型

int main (void)
{
    double x,xpow;
    int exp;

    printf (" Enter a number and the positive integer power ");
    printf (" to which\nthe number will be raised . Enter q ");
    printf (" to quit \n ");

    while (scanf ("%lf %d",&x,&exp) == 2 )
    {
        xpow = power (x,exp); // 函数调用
        printf ("%.3g to the power %d is %.5g\n",x,exp,xpow);
        printf (" enter next pair of numbers or q to quit \n");
    }

    printf ("hope you enjoyed this power trip --- bye \n");

    getchar();

    return 0;
}

/**
 * @power：计算数值的整数次幂
 * @AuthorHTL
 * @DateTime  2015-11-27T12:03:48+0800
 * @param     n                        要计算的数值
 * @param     p                        幂指数
 * @return                                 n的p次幂
 */
double power (double n, int p)
{
    double pow = 1;
    int i;

    for (i = 1; i<= p; i++)
        pow *= n;

    return pow; //  返回 pow 的值
}
