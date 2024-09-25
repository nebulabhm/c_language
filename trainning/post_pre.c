/****************************************************************************
 * @filename: post_pre.c
* @brief:   后缀和前缀.
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-24 12:20:05
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-24 12:23:05
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

int main(void)
{
    int a = 1, b = 1;
    int aplus,plusb;

    aplus = a++;    //后缀
    plusb = ++b;    //前缀

    printf("a aplus b plusb \n");
    printf("%d %5d %5d %5d \n",a,aplus,b,plusb);

    getchar();
    getchar();

    return 0;
}
