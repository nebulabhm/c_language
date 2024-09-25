/*
* @Author: nebulabhm760
* @Date:   2015-11-11 13:48:22
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-12-08 16:09:47
* @toobig.c --超出你系统上最大int值
*/

#include <stdio.h>

int main(void) {
    int i = 2147483647;
    unsigned int j = 4294967295;

    printf("%d %d %d \n", i ,i+1, i+2);
    printf("%u %u %u \n", j, j+1, j+2);

    getchar();
    return 0;
}
