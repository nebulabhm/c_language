/****************************************************************************
 * @filename: min_sec.c
* @brief:   把小时转换为分钟和秒.
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-23 16:02:24
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-26 08:09:27
* @Version: A001
* @Edit History:
*   No.             Author              Date                des
 ****************************************************************************/


#include <stdio.h>

int main(void)
{
    int min;
    long long sec;
    int hour;

    printf("Please input the hour you want to convert!\n");
    scanf("%d",&hour);
    printf("%d hour = %d minute or %lld second\n",60*hour,3600*hour);

    getchar();

    return 0;
}
