/****************************************************************************
* @filename: showchar1.c
* @brief:   I/0处理程序.
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-12-10 14:33:22
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-12-10 15:40:25
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>
#include <stdlib.h>

void display(char cr, int lines, int width);

int main(void)
{
    int ch;
    int rows, cols;

    printf("Enter a character and two integers: \n");
    while((ch = getchar()) != '\n')
    {
        if(scanf("%d %d",&rows,&cols) != 2)
            break;

        display(ch,rows,cols);

        while(getchar() != '\n') {
            continue;
            /* code */
        }

        printf(" Enter another character and two integers; \n");
        printf(" Enter a newline to quit \n");
        /* code */
    }

    printf("Bye \n");
    system("PAUSE");

    return 0;
}

/**
 * [display： 打印子程序]
 * @nebulabhm
 * @DateTime  2015-12-10T14:47:01+0800
 * @param     cr                       要打印的字符
 * @param     lines                 要打印的行数
 * @param     width                要打印的列数
 */
void display(char cr, int lines, int width)
{
    int row, col;

    for (row = 1; row <= lines; row++)
    {
        for (col = 1; col <= lines/*row*/; col++)
        {
            putchar(cr);
            /* code */
        }
        putchar('\n');  // 结束本行，开始新的一行
        /* code */
    }

}
