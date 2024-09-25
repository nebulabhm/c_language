/****************************************************************************
* @filename: string_statistic.c
* @brief:   统计字符串中出现的字符数目
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-27 15:42:07
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-12-11 12:18:59
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
*   1              nebulabhm       2015/12/4        使用printf时，字符串中包含\n，
*                                                                            会导致EXE文件运行崩溃
 ****************************************************************************/


#include <stdio.h>

#define QUOTE '\"'   // 双引号
#define FULL_STOP '.'   // 句号

int main()

{
    char string_in[30];
    int num = 0;
    int i = 0, j = 0;

    printf("Please input a string you favorite.\n");

    do
    {
        string_in[i] = getchar();/* code */
    } while ( string_in[i++] != '\n');

    string_in[--i] = '\0';    // 添加字符串结束标志

    while ((string_in[j] != '.') && (string_in[j] != '\0') )
    {
        /* code */
        if (string_in[j++] != QUOTE)
        {
            /* code */
            num++;
        }
    }

    printf("The number of  char in \" %s \" are %d. \n", string_in, num);

    getchar();

    return 0;
}
