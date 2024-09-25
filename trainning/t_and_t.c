/****************************************************************************
* @filename:t_and_t.c
* @brief:   C 中的真和假
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-25 14:39:59
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-25 14:42:21
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/



#include <stdio.h>

int main (void)
{
    int true_val,false_val;

    true_val = (10 > 2); /*  一个真表达式的值 */
    false_val = (10 == 2); /*  一个假表达式的值 */
    printf ("true = %d; false = %d \n",true_val,false_val);

    getchar();

    return 0;
}
