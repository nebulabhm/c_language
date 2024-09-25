/****************************************************************************
* @filename: paint.c
* @brief:   使用条件运算符
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-12-07 12:55:35
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-12-07 12:59:16
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/



#include <stdio.h>

#define COVERAGE 200 /* 每罐油漆可喷平方英尺数 */

int main (void)
{
    int sq_feet;
    int cans;

    printf ("Enter number of square feet to be painted :  \n");

    while (scanf("%d",&sq_feet) == 1)
    {
        cans = sq_feet / COVERAGE;
        cans += ((sq_feet % COVERAGE == 0)) ? 0:1;//  输入除常量的余数=0 则cans+0 否则+1
        printf ("You need %d %s of paint \n",cans, cans == 1? "can":"cans");
        printf ("Enter next value(q to quit) :\n");
    }

    return 0;
}
