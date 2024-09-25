/*
* @Author: nebulabhm760
* @Date:   2015-11-17 12:46:43
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-20 12:11:22
*@printfout.c ----使用转换说明符
*/

#include <stdio.h>
#define PI 3.141593
int main(void) {
    int number =5;
    float expresso = 13.5;
    int cost       = 3100;

    printf("The %d CEOs drank %f cups of expresso.\n", number, expresso);
    printf("The value of pi is %f \n", PI);
    printf("Farewell thou art too dear for my possessing,\n");
    printf("%c%d\n",'$',2*cost);

    getchar();


    return 0;
}
