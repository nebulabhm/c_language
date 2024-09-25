/****************************************************************************
* @filename:   electric.c
* @brief:   计算用电帐目
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-27 14:06:23
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-27 14:37:47
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

#define RATE1 0.12589  //  第一个 360 kWh：  每 kWh $0.12589
#define RATE2 0.17901 //  下一个 320 kWh：  每 kWh $0.17901
#define RATE3 0.20971 //  超过 680 kWh；  每 kWh $0.20971
#define BREAK1 360.0 //  费率的第一个分界点
#define BREAK2 680.0 //  费率的第二个分界点
#define BASE1 (RATE1 * BREAK1) // 用电 360 kWh 的费用
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1))) // 用电 680 kWh 的费用

int main (void)
{
    double kwh; // 用电的千瓦小时数
    double bill; // 费用

    printf ("Please enter the kwh used . \n");
    scanf ("%lf",&kwh); // %lf  是 double 类型的说明符

    if (kwh <= BREAK1)
        bill = RATE1 * kwh;
    else if (kwh <= BREAK2) //  用电量在 360 kWh 和 680 kWh 之间时
        bill = BASE1 + (RATE2 * (kwh - BREAK1));
    else
        bill = BASE2 + (RATE3 * (kwh - BREAK2)); // 用电超过 680 kWh 时

    printf ("The charge for %.1f kwh is $%1.2f  \n",kwh,bill);
    system("PAUSE");

    return 0;
}
