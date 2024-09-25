/****************************************************************************
 * @filename: wheat.c
* @brief:   指数增长
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-20 15:58:25
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-20 16:02:43
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

#define SQUARES 64 /* 棋盘上癿斱格数 */
#define CROP 1E15 /* 仌粒计美国小麦产量 */

int main (void)
{
    double current,total;
    int count = 1;

    printf ("square grains total ");
    printf ("Eraction of \n");
    printf (" added grain ");
    printf (" Us total \n");

    total = current = 1.0; //  开始是一粒
    printf ("%-4d %-13.2e %-12.2e %-12.2e\n", count,current,total,total /CROP);

    while ( count < SQUARES)
    {
        count = count + 1;
        current = 2.0 * current; /* 下个斱格癿粒数加倍 */
        total = total + current; /*  更新忖数 */

        printf ("%-4d %-13.2e %-12.2e %-12.2e\n",count,current,total,total/CROP);
    }

    printf (" That's all \n");

    getchar();

    return 0;
}
