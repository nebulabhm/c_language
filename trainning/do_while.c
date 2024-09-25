/****************************************************************************
* @filename:  do_while.c
* @brief:   退出条件循环
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-26 15:56:15
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-26 16:07:39
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/


#include <stdio.h>

int main (void)
{
    const int secret_code = 13;
    int code_entered;

    do
    {
        printf ("To enter the triskaidekaphobia therapy club,  \n");
        printf (" please enter the secret code number : ");
        scanf ("%d", &code_entered);
    } while (code_entered != secret_code);

    printf (" Congratulations! You are cured  \n");

    getchar();
    getchar();

    return 0;
}
