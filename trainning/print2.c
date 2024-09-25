/*
* @Author: nebulabhm760
* @Date:   2015-11-12 13:26:54
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-13 13:09:36
* print2.c--------printf()的更多属性
*/

#include <stdio.h>

int main(void) {
    unsigned int un = 3000000000;  /*int为32位*/
    short end = 200;/*short为16位的系统*/
    long big = 65537;
    long long verybig = 12345678908642;

    printf("un=%u and not %d\n", un,un);
    printf("end=%hd and not %d\n", end,end);
    printf("big=%ld and not %hd\n", big,big);
    printf("verybig=%lld and not %ld\n", verybig,verybig);

    getchar();
    return 0;
}
