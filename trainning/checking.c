/****************************************************************************
* @filename: checking.c
* @brief:   输入确认
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-12-10 15:42:21
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-12-16 12:26:49
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>
#include <stdlib.h>

enum bool  {false, true};

int get_int(void);  // 确认输入一个整数
_Bool  bad_limits(int begin, int end, int low, int high);
double sum_squares(int a, int b);

int main(void)
{
    const int MIN = -1000;
    const int MAX = +1000;

    double answer;
    int start;
    int stop;

    printf(" This porgram computes the sum of the squares of "
           " integers in a  range. \nThe lower bound should not "
           " be less than -1000 and \nthe upper bound should not "
           " both limits to quit): \nlower limit:");

    start = get_int();
    printf("upper limit :");
    stop = get_int();
    while (start != 0 && stop != 0)
    {
        if (bad_limits(start, stop, MIN, MAX))
        {
            printf(" Please try again \n");
            /* code */
        }
        else
        {
            answer = sum_squares(start, stop);
            printf("The sum of the squares of the integers ");
            printf("from %d to %d is %g \n", start, stop, answer );
        }
        printf("Enter the limits (enter 0 to both limits to quit):\n");
        printf(" lower limit :");
        stop = get_int();
        /* code */
    }

    printf(" Done \n");
    system("PAUSE");

    return 0;
}

/**
 * [get_int 获得数据输入]
 * @AuthorHTL
 * @DateTime  2015-12-14T15:40:10+0800
 * @return                             [输入的数据]
 */
int get_int(void)
{
    int input;
    char ch;

    /** 只有输入一个参数，则退出循环 */
    while (scanf("%d", &input) != 1)
    {
        /** 输入换行符为获取字符结束标志 */
        while ((ch = getchar()) != '\n')
        {
            putchar(ch);
        }

        printf(" is not an integer \nPlease enter an ");
        printf(" integer value, such as 25, -178, or 3");
    }

    return input;
}

/**
 * [sum_squares 求整数的平方和 ]
 * @AuthorHTL   nebulabhm
 * @DateTime  2015-12-14T13:57:00+0800
 * @param     a                        平方和的下限
 * @param     b                        平方和的上限
 * @return                                  平方和
*/

double sum_squares(int a, int b)
{
    double total = 0;
    int i;

    for ( i = a; i < b; i++)
    {
        total += i * i;
        /* code */
    }

    return total;
}

/**
 * [bad_limits 判断上限与下限是否超出规定范围]
 * @Author : nebula
 * @Date
 * @DateTime  2015-12-14T15:35:09+0800
 * @param     begin                    [下限]
 * @param     end                      [上限]
 * @param     low                      [最小值]
 * @param     high                     [最大值]
 * @return       not_good           [是否为有效值]
 */

_Bool bad_limits(int begin, int end, int low, int high)
{
    _Bool not_good = false;

    if (begin > end)
    {
        printf("%d isn't smaller than %d.\n", begin, end );
        not_good = true;
        /* code */
    }

    if (begin > high || end > high)
    {
        printf("Values must be %d or less \n", high );
        not_good = true;
        /* code */
    }

    return not_good;
}
