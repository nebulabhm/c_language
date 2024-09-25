/****************************************************************************
* @filename: int_to_bin.c
* @brief:   十进制数转换为二进制数
* @detail: This is the detail description.
* @Author: nebula
* @Create Date:   2015-12-17 15:52:38
* @Last Modified by:   nebula
* @Last Modified time: 2015-12-22 14:48:06
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

/** 函数原型 */
void convert_prog(int num);
void  mod_2(int num);
char num_to_ascii(int num);
void clear_cache(void);

/** 全局变量 */
int bin_num[10] = {0};
char result[10] = {'a'};    // 用于存储用于显示输出的二进制数的ascii码
int counter = 0;

int main(void)
{
    int num;

    printf("Please input a interger (q to quit): \n");
    scanf("%d", &num);

    do
    {
        clear_cache();
        convert_prog(num);
        printf("The binary of %d is: 0x%s\n", num, result);
        printf("Please input a interger (q to quit): \n");
    } while (scanf("%d", &num) == 1);

    return 0;
}

/**
 * [将储存在数组中的二进制数转换为对应的ASCII码，并存储在字符数组中]
 * @Author: nebula
 * @Date:   2015-12-22
 * @Time:   2015-12-22T14:24:36+0800
 * @param   num                      [ 需要转换的十进制数]
 */
void convert_prog(int num)
{
    int i, count;

    mod_2(num);
    count = counter;

    for (i = 0; i < count; ++i)
    {
        result[i] = num_to_ascii(bin_num[--counter]);
    }

    return;
}

/**
 * [mod_2 使用递归算法计算十进制数对应的二进制数]
 * @Author: nebula
 * @Date:   2015-12-18
 * @Time:   2015-12-18T10:37:34+0800
 * @param   num                      [需要转换的十进制数]
 */
void  mod_2(int num)
{

    int tmp;


    bin_num[counter++]  = num % 2;
    tmp = num / 2;

    if (tmp >= 1)
    {
        mod_2(tmp);
    }

    return ;
}

/**
 * [num_to_ascii 数值转换为对应的ASCII码，限制为0-10]
 * @Author: nebula
 * @Date:   2015-12-17
 * @Time:   2015-12-17T12:53:17+0800
 * @param   num                       [输入的数值]
 * @return      ch                   [返回数值对应的字符]
 */
char num_to_ascii(int num)
{
    char ch;

    switch (num)
    {
    case 0:
        ch = '0';
        break;

    case 1:
        ch = '1';
        break;

    case 2:
        ch = '2';
        break;

    case 3:
        ch = '3';
        break;

    case 4:
        ch = '4';
        break;

    case 5:
        ch = '5';
        break;

    case 6:
        ch = '6';
        break;

    case 7:
        ch = '7';
        break;

    case 8:
        ch = '8';
        break;

    case 9:
        ch = '9';
        break;

    default:
        ch = '0';
        break;
    }

    return ch;
}

/**
 * [将全局变量重新初始化]
 * @Author: nebula
 * @Date:   2015-12-22
 * @Time:   2015-12-22T14:27:07+0800
 */
void clear_cache(void)
{
    counter = 0;
}
