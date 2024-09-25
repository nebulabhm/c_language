/****************************************************************************
* @filename: menu.c
* @brief:   编制一个可选择的菜单
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-12-16 12:47:40
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-12-16 16:07:22
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

char get_choice(void);
void count(void);

int main(void)
{
    char choice;

    while ((choice = get_choice()) != 'q')
    {
        switch (choice)
        {
        case 'a':
            printf("Buy low, sell high \n");
            break;

        case 'b':
            putchar('\a');
            break;

        case 'c':
            break;

        default:
            printf("Program error! \n");
            break;
        }
    }

    getchar();

    return 0;
}

/**
 * [从键盘获取输入字符，并将第一个字符返回]
 * @Author: nebula
 * @Date:   2015-12-16
 * @Time:   2015-12-16T12:54:55+0800
 * @return                           [获取输入的第一个字符]
 */
char get_choice(void)
{
    char get_c;
    get_c = getchar();  // 读取第一个字符

    /**  跳过剩余的字符 */
    while(getchar() != '\n')
     {
       continue ;
    }

    return get_c;
}
