/*
* @Author: nebulabhm760
* @Date:   2015-11-17 16:12:57
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-18 15:45:03
*/

/* floatcnv.c --- 不匹配的浮点数转换 */
#include <stdio.h>

int main (void)
{
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;

    printf ("%.le %.le %.le %.le\n",n1,n2,n3,n4);
    printf ("%ld %ld\n",n3,n4);
    printf ("%ld %ld %ld %ld\n",n1,n2,n3,n4);

    getchar();

    return 0;
}
