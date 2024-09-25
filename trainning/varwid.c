/****************************************************************************
 * @filename: varwid.c
* @brief:   使用可变宽的输出字段
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-19 14:18:33
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-19 14:22:56
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

int main(void)
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("What field width?\n");
    scanf("%d",&width);
    printf("The number is: %*d: \n", width, number);
    printf("Now enter a width and a precision: \n");
    scanf("%d %d",&width, &precision);
    printf("weight = %*.*f\n", width, precision, weight);

    getchar();
    getchar();

    return 0;
}
