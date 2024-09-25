/****************************************************************************
* @filename: for_geo.c
* @brief:   This is a brief description.
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-26 13:56:30
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-26 13:57:41
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

int main (void)
{
    double debt;

    for (debt = 100.0; debt < 150.0; debt = debt * 1.1)
        printf ("your debt is now $%.2f \n",debt);

    getchar();

    return 0;
}
