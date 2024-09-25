/****************************************************************************
 * @filename: pound.c
* @brief:   定义带有一个参数的函数
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-24 15:57:45
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-25 08:57:06
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

void pound(int n);  //ANSI风格的函数原型

int main(void)
{
    int times = 5;
    char ch = '!';  //ASCII码为33
    float f = 6.0;

    pound(times);   //int  参数
    pound(ch);  //char 参数自动转换为int类型
    pound((int)f);  //指派运算符把f强制转换为int类型

    getchar();

   return 0;
}

/**
 * @brief [brief description]
 * @details [long description]
 *
 * @param n int parameter
 */
void pound(int n)    //ANSI 风格的函数头
{
    while(n-- > 0) {
        printf("#");
        printf("\n");
    }
}
