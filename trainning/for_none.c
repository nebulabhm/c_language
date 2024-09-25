/****************************************************************************
* @filename:  for_none.c
* @brief:   This is a brief description.
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-26 14:02:59
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-26 14:03:57
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/



#include <stdio.h>

int main (void)
{
    int ans,n;
    ans = 2;

    for (n = 3; ans <= 25;)
        ans = ans * n;
    printf ("n = %d ; ans = %d \n",n,ans);

    getchar();

    return 0;
}
