/****************************************************************************
* @filename:  scores_int.c
* @brief:   使用循环进行数组处理
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-27 10:59:00
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-27 11:03:36
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/



#include <stdio.h>

#define SIZE 10
#define PAR 72

int main (void)
{
    int  index,score[SIZE];
    int sum = 0;
    float average;

    printf ("enter %d golf scores :  \n",SIZE);

    for (index = 0; index < SIZE; index++)
        scanf ("%d",&score[index]); //  依次读入 10 个得分

    printf (" The scores read in are as follows :\n");

    for (index = 0; index < SIZE; index++)
        printf ("%5d",score[index]); //  验证输入
    printf ("\n");

    for (index = 0; index < SIZE; index++)
        sum += score[index]; //  求它们的和
    average = (float) sum / SIZE; // 节省时间的方法

    printf (" Sum of scores = %d, average = %.2f \n",sum,average);
    printf (" That's a handicap of %.0f  \n",average - PAR);

    getchar();
    getchar();

    return 0;
}
