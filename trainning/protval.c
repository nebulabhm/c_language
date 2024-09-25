/****************************************************************************
 * @filename: protval.c
* @brief:   This is a brief description.
* @detail: This is the detail description.
* @Author: nebulabhm760
* @Date:   2015-11-18 15:56:22
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-18 15:58:42
* @Version: A001
* @Edit History:
*   No.             Author              Date                desc
 ****************************************************************************/
#include <stdio.h>

int main (void)
{
    int bph2o = 212;
    int rv;

    rv = printf ("%d F is water's boiling point. \n",bph2o);
    printf ("The printf() Function printfed %d characters.\n", rv);

    getchar();

    return 0;
}
