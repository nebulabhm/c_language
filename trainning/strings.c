/*
* @Author: nebulabhm760
* @Date:   2015-11-17 15:36:25
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-17 15:37:38
*/

// strngs.c  -- 字符串的格式化
#include <stdio.h>
#define BLURB "Authentic imitation"

int main (void)
{

    printf ("/%2s/\n",BLURB);
    printf ("/%24s/\n",BLURB);
    printf ("/%24.5s/\n",BLURB);
    printf ("/%-24.5s/\n",BLURB);

    getchar();

    return 0;

}
