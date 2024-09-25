/****************************************************************************
 * @filename: add_one.c
* @brief:   增量：前缀和后缀.
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-24 10:30:10
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-12-24 08:57:19
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

int main(void)
{
    int ultra = 0, super = 0;

    while(super < 15)
    {
        super++;
        ++ultra;
        printf("super =  %d, ultra = %d\n",super,ultra);
    }

    getchar();
    getchar();

    return 0;
}
