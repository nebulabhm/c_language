/*
* @Author: nebulabhm760
* @Date:   2015-11-17 15:46:03
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-17 15:48:06
*/

/* intconv.c  --- 一些不匹配的整数转换 */
#include <stdio.h>

#define PAGES 336
#define WORDS 65618

int main (void)
{
    short num = PAGES;
    short mnum = -PAGES;

    printf ("num as short and unsigned short : %hd %hu  \n",num,num);
    printf ("-num as short and unsinged short : %hd % hu \n",mnum,mnum);
    printf ("num as int and char: %d %c \n",num,num);
    printf ("WORDS as int,short,and char: %d %hd %c\n",WORDS,WORDS,WORDS);

    getchar();

    return 0;
}
