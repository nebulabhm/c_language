/*
* @Author: nebulabhm760
* @Date:   2015-11-17 15:17:57
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-17 15:20:19
*/

// floats.c --- 一些浮点数的组合
#include <stdio.h>

int main (void)
{
    const double RENT = 3852.99; // 以 const 方法定义的常量

    printf ("*%f*\n",RENT);
    printf ("*%e*\n",RENT);
    printf ("*%4.2f* \n",RENT);
    printf ("*%3.1f* \n",RENT);
    printf ("*%10.3f* \n",RENT);
    printf ("*%10.3e*\n",RENT);
    printf ("*%+4.2f* \n",RENT);
    printf ("*%010.2f* \n",RENT);

    getchar();

    return 0;
}
