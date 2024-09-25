/*
* @Author: nebulabhm760
* @Date:   2015-11-17 15:22:29
* @Last Modified by:   nebulabhm760
* @Last Modified time: 2015-11-17 15:34:52
*/

/* flags.c ---  一些格式标志的使用示例 */
#include <stdio.h>

int main (void)
{

printf ("%x %X %#x \n",31,31,31);
printf ("**%d**% d**% d**\n",42,42,-42);
printf ("**%5d**%5.3d**%05d**%05.3d**\n",6,6,6,6);

getchar();

return 0;

}
