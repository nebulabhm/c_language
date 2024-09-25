/****************************************************************************
 * @filename: convert.c
* @brief:   自动类型转换
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-24 15:32:30
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-24 15:36:27
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

int main(void)
{
    char ch;
    int i;
    float fl;

    fl = i = ch = 'C';
    printf("ch = %c, i = %d, fl = %2.2f \n",ch,i,fl);

    ch = ch + 1;
    i = fl + 2*ch;
    fl = 2.0 * ch + i;
    printf("ch = %c, i = %d, fl = %2.2f \n",ch,i,fl);

    ch = 5212205.17;
    printf("Now ch = %c \n",ch);

    getchar();

    return 0;
}
