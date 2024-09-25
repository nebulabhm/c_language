/****************************************************************************
* @filename: recur.c
* @brief:   递归举例
* @detail: This is the detail description.
* @Author: nebula
* @Create Date:   2015-12-17 15:13:10
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-12-17 15:15:48
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

void up_and_down(int);

int main(void)
{
    up_and_down(1);

    return 0;
}

void up_and_down(int n)
{
    printf("Level %d : n location %p \n", n,&n);
    if (n < 4)
    {
        up_and_down(n+1);
    }

    printf("LEVEL %d : n location %p \n", n,&n);
}
