/****************************************************************************
 * @filename: sizeof.c
* @brief:   使用sizeof运算符
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-23 15:36:14
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-23 15:40:51
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

int main(void)
{
    int n = 0;
    size_t int_size;
    int_size = sizeof(int);

    printf("n=%d, nhas %hd bytes: all ints has %hd bytes.\n",n,sizeof n, int_size);

    getchar();

    return 0;
}
