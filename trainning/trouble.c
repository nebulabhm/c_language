/****************************************************************************
* @filename:trouble.c
* @brief:   误用 = 将导致无限循环.
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-25 15:05:30
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-25 15:09:55
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L;
    int  status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit)");
    status = scanf("%ld",&num);

    while(status = 1)
    {
        sum = num + sum;
        printf("Please enter next integer (q to quit):");
        status = scanf("%ld",&num);
    }

    printf("Those integers sum to %ld. \n",sum);

    getchar();

    return 0;
}
