/*
* @Author: nebulabhm760
* @Date:   2015-11-16 12:49:51
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-16 13:31:37
* @praise2.c-------sizeof与strlen（）的区别
*/

#include <stdio.h>
#include <string.h>     //提供strlen（）函数的原型

#define PRAISE "What a super marvelous name !"

int main(void) {
    char name[40];

    printf("What's your name?\n");
    scanf("%s",name);

    printf("Hello, %s. %s\n",name,PRAISE);
    printf("Your name of %d letters occupies %d memory cells.\n",
        strlen(name),sizeof name);
    printf("The phrase of praise has %d letters",strlen(PRAISE));
    printf(" and occupies %d memory cells.\n",sizeof PRAISE);

    getchar();
    getchar();

    return 0;
}
