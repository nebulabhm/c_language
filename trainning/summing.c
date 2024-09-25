/****************************************************************************
* @filename: summing.c
* @brief:   对用户输入的整数求和
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-25 11:54:54
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-25 12:04:12
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

int main (void)
{
    long num;
    long sum = 0L; /*  把 sum 初始化为零 */
    int status;

    printf ("Please enter an integer to be summed .");
    printf (" q to quit: ");
    status = scanf("%ld",&num);

    while (status == 1) /* == 的意思是等于 */
    {
        sum = sum + num;
        printf ("Please tnter next integer (q to quit): ");
        status = scanf ("%ld",&num);
    }

    printf ("those integers sum to %ld . \n",sum);

    getchar();
    getchar();

    return 0;
}
