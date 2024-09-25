/*
* @Author: nebulabhm760
* @Date:   2015-11-17 15:11:50
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-17 15:15:47
*@width.c -------字段宽度
*/

#include <stdio.h>
#define PAGES 931

int main(void) {
    printf("*%d*\n", PAGES);
    printf("*%2d*\n",PAGES);
    printf("*%10d*\n",PAGES);
    printf("*%-10d*\n",PAGES);

    getchar();

    return 0;
}
