/****************************************************************************
* @filename: file_eof.c
* @brief:   打开一个文件并显示其内容
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-12-10 13:50:32
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-12-10 14:02:47
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>
#include <stdlib.h> //   为了使用 exit（）

int main(void)
{
    int ch;
    FILE *fp;
    char fname[50]; // 用于存放文件名

    printf("Enter the name of the file :");
    scanf("%s",fname);

    fp = fopen(fname,"r");   // 打开文件以供读取
    if (fp == NULL)
    {
        printf("Fail to open file. bye \n");
        exit(1);    // 终止程序
    }

    while((ch = getc(fp)) != EOF)    // getch(fp) 从打开的文件中获取一个字符
    {
        putchar(ch);
        /* code */
    }

    fclose(fp); // 关闭文件

    return 0;
}
