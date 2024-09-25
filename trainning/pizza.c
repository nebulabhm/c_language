/*
* @Author: nebulabhm760
* @Date:   2015-11-16 14:43:32
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-16 14:49:04
* @pizza.c-------使用定义常量
*/

#include <stdio.h>

#define PI 3.1459

int main(void) {
    float area, circum, radius;

    printf("What is the radius of your pizza?\n");
    scanf("%f",&radius);

    area = PI*radius*radius;
    circum = PI*radius*2.0;

    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f. area = %1.2f\n", circum, area);

    getchar();
    getchar();

    return 0;
}
