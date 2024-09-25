/*
* @Author: nebulabhm760
* @Date:   2015-11-16 12:22:01
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-16 12:26:40
* @praisel.c-----------使用不同类型的字符串
*/

#include <stdio.h>
#define PRAISE "What a super marvelous name!"   //使用预处理器定义了字符变量

int main(void) {
    char name[40];

    printf("What's your name?\n");
    scanf("%s", name);

    printf("Hello,%s. %s\n",name,PRAISE);

    getchar();
    getchar();
    getchar();

    return 0;
}
