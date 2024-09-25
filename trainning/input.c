/****************************************************************************
 * @filename: input.c
* @brief:   什么情况下使用&.
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-19 11:11:54
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-19 12:48:54
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

int main(void)
{
    int age;
    float assets;
    char pet[30];

    printf("Enter your, age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets);  //此处需要使用&
    // scanf("%s", pet);   //对char 数组不需要使用&
    printf("%d $%.2e %s\n", age, assets, pet);

    getchar();
    getchar();

    return 0;
}
