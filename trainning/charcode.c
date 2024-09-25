/*
* @Author: nebulabhm760
* @Date:   2015-11-13 13:40:35
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-13 13:45:05
* charcode.c-----显示一个字符的编码值
*/

#include <stdio.h>

int main(void) {
    char ch;

    printf("Please enter a character.\n");
    scanf("%c",&ch);
    printf("The code for %c is %d.",ch,ch);

    return 0;
}
