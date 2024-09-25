/****************************************************************************
* @filename: colddays.c
* @brief:   求出温度低亍零度的天数的百分率
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-27 12:19:52
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-27 12:30:41
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/



#include <stdio.h>

int main (void)
{
    const int FREEZING = 0;
    float temperature;
    int cold_days = 0;
    int all_days = 0;

    printf ("Enter the list of daily low temperatures .  \n");
    printf ("Use Celsius, and enter q to quit . \n");

    while (scanf ("%f",&temperature)  == 1)
    {
        all_days++;
        if (temperature < FREEZING)
            cold_days++;
    }

    if (all_days != 0)
        printf ("%d days total; %.1f%% were below freezing . \n",
    all_days,100.0 * (float)cold_days / all_days);

    if (all_days == 0)
        printf ("NO data entered !\n");

    system("PAUSE");

    return 0;
}
