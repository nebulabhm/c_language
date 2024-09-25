/* Program 7.6 Different types of Arrays */
#include <stdio.h>
#include <string.h>


int main(void)
{
	long multiple[] = {15L, 25L, 35L, 45L};

	long *p = multiple;
	printf("\nThe address of the first array element : %p", p);

	for (int i = 0; i < sizeof(multiple) / sizeof(multiple[0]); i++)
		printf("\nmultiple[%d] = %d * (p + %d) = %d &multiple[%d] = %p p + %d = %p",
			i, multiple[i], i, *(p + i), i, &multiple[i], i, p + i);
	printf("\n Type long occupies: %d bytes\n", sizeof(long));

	/*	p = multiple;
	printf("\nThe address obtained from the array name: %p\n", p);
	*/
	return 0;
}