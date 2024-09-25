/****************************************************************************
* @filename: lethead.c
* @brief:   驱动一个打印星号的函数
* @detail: This is the detail description.
* @Author: nebula
* @Date:   2015-12-17 11:00:04
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-12-17 13:08:26
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/

#include <stdio.h>
#define COL 8
#define ROW 10
#define SPACE ' '
#define NAME "CG-TECH, INC."
#define ADDRESS "No.16 BinHai Street"
#define PHONE_NUMBER "0411-82350560"

void print_star(void);  // 函数原型
void print_info(int num);
void print_blank(int num);
char get_first(void);
int asciitonum(char ch);

int main(void)
{
    char ch;
    int num;

    printf("Enter q to quit, otherwise print block of star! \n");

    while ((ch = get_first()) != 'q')
    {
        num = asciitonum(ch);

        print_star();
        print_info(num);
        print_star();
    }

    getchar();

    return 0;
}

/**
 * [打印星号块]
 * @Author: nebula
 * @Date:   2015-12-17
 * @Time:   2015-12-17T11:15:32+0800
 */
void print_star(void)
{
    int i;

    for ( i = 0; i < ROW; i++)
    {
        printf("*");
    }
    printf("\n");
}

/**
 * [打印输出信息]
 * @Author: nebula
 * @Date:   2015-12-17
 * @Time:   2015-12-17T12:21:21+0800
 * @param  num          [前面添加的空格数量]
 */
void print_info(int num)
{
    print_blank(num);
    printf("%s\n",NAME);
    print_blank(num);
    printf("%s\n",ADDRESS);
    print_blank(num);
    printf("%s\n",PHONE_NUMBER);
}

/**
 * [打印空格]
 * @Author: nebula
 * @Date:   2015-12-17
 * @Time:   2015-12-17T12:24:28+0800
 * @param   num                      [打印空格的数量]
 */
void print_blank(int num)
{
    int i;

    for (i = 0; i < num; i++)
    {
        printf("%c",SPACE );
    }
}

/**
 * [获取输入的第一个字符，并跳过剩余的字符]
 * @Author: nebula
 * @Date:   2015-12-17
 * @Time:   2015-12-17T12:34:43+0800
 * @return                           [获取的第一个字符]
 */
char get_first(void)
{
    int ch;

    ch = getchar();
    while (getchar() != '\n')
    {
        continue;
    }

    return ch;
}

/**
 * [[asciitonum ASCII码的数字转换为真正的数值]]
 * @Author: nebula
 * @Date:   2015-12-17
 * @Time:   2015-12-17T12:53:17+0800
 * @param   ch                       [输入的字符]
 * @return      num                   [返回对应的数值]
 */
int asciitonum(char ch)
{
    int num;
    switch (ch)
    {
    case '0':
        num = 0;
        break;

    case '1':
        num = 1;
        break;

    case '2':
        num = 2;
        break;

    case '3':
        num = 3;
        break;

    case '4':
        num = 4;
        break;

    case '5':
        num = 5;
        break;

    case '6':
        num = 6;
        break;

    case '7':
        num = 7;
        break;

    case '8':
        num = 8;
        break;

    case '9':
        num = 9;
        break;

    default:
        num = 0;
        break;
    }

    return num;
}
