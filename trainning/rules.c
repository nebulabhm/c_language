/****************************************************************************
 * @filename: rules.c
* @brief:    优先级规则的检验
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-23 13:31:53
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-23 13:34:03
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

int main(void)
{
    int top, score;
    top = score = -(2+5)*6 + (4+3*(2+3));

    printf("top = %d \n",top);

    getch();

    return 0;
}
