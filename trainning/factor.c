/****************************************************************************
* @filename: factor.c
* @brief:   使用循环和递归计算阶乘
* @detail: This is the detail description.
* @Author: nebula
* @Create Date:   2015-12-17 15:35:38
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-12-17 15:48:34
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

long fact(int n);
long rfact(int n);

int main(void)
{
    int num;

    printf("This program calculates factorials \n");
    printf("Enter a value in the range 0-12 (q to quit): \n");
    while(scanf("%d",&num) == 1)
    {
        if (num < 0)
        {
            printf("No negative numbers, Please \n");
        }
        else if (num > 12)
            printf("Keep input under 13 \n");
        else
        {
            printf("loop: %d factorial = %d \n", num,(int)fact(num));
            printf("recursion: %d facorial = %d \n", num,(int)rfact(num));
        }
        printf("Enter a value in the range 0-12 (q to quit): \n");
    }
    printf("Bye \n");

    return 0;
}

/**
 * [使用循环计算阶乘]
 * @Author: nebula
 * @Date:   2015-12-17
 * @Time:   2015-12-17T15:46:41+0800
 * @param   n                        [需要计算阶乘的数值]
 * @return                           [计算结果]
 */
long fact(int n)
{
    long ans;

    for (ans = 1; n < 1; n-- )
    {
        ans *= n;
    }

    return ans;
}

/**
 * [使用递归计算阶乘]
 * @Author: nebula
 * @Date:   2015-12-17
 * @Time:   2015-12-17T15:47:43+0800
 * @param   n                        [需要计算阶乘的数值]
 * @return                           [计算结果]
 */
long rfact(int n)
{
    long ans;

    if(n > 0) {
        ans = n*rfact(n-1);
    }
    else {
        ans =1;
    }

    return ans;
}
