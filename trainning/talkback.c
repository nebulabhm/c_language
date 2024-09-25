/*
* @Author: nebulabhm760
* @Date:   2015-11-16 10:15:14
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-16 10:41:59
* @talkback.c-----一个能为你提供一些信息的对话程序
*/

#include <stdio.h>
#include<string.h>  //提供 strlen() 的函数原型
#define DENSITY 62.4    //人的密度（单位是：英镑/每立方英寸）

int main(void)
{
    float weight,volume;    //定义重量和容量的浮点变量
     int size,letters;  //定义字母letters整数变量
     char name[40]; //定义字符数组

     printf("Hi! What's Your first name?\n");
     scanf("%s",name);  //读取字符串，赋值给数组变量name

    printf("%s, what's your weight in pounds?\n", name);
    scanf("%f",&weight);    //读取浮点数，赋值给浮点变量

    size = sizeof name;
    letters = strlen(name); //用strlen（）函数读取字符数组的长度
    volume = weight / DENSITY;

    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also, your firtst name has %d letters,\n",letters);
    printf("and we have %d bytes to store it in.\n",size);

    getchar();
    getchar();
    getchar();

    return 0;
}
