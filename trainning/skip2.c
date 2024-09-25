/****************************************************************************
 * @filename: skip2.c
* @brief:   跳过输入的头两个整数
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-19 14:30:49
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-19 14:33:14
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

int main(void)
{
    int n;

    printf("Please enter three integers: \n");
    scanf("%*d %*d %d",&n);
    printf("the last integer was %d \n",n);

    getchar();
    getchar();

    return 0;
}
