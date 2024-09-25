/* Program 7.2 What's the pointer*/
#include <stdio.h>


int main(void)
{
	long num1 = 0L;
	long num2 = 0L;
	long *pnum = NULL;

	pnum = &num1;
	*pnum = 2;
	++num2;
	num2 += *pnum;

	pnum = &num2;
	++*pnum;

	printf("\nnum1 = %1d \nnum2 = %1d \n*pnum = %1d \n*pnum + num2 = %1d\n",
		num1, num2, *pnum, *pnum + num2);

	return 0;

}