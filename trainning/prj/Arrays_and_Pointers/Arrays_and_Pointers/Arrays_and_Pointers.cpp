/* Program 7.4 Arrays and Pointers - A simple program */
#include <stdio.h>
#include <string.h>


int main(void)
{
	char multiple[] = "My string";

	char *p = &multiple[0];
	printf("\nThe address of the first array element : %p", p);

	for (int i = 0; i < strlen(multiple); i++)
		printf("\nmultiple[%d] = %c * (p + %d) = %c &multiple[%d] = %p p + %d = %p",
			i, multiple[i], i, *(p + i), i, &multiple[i], i, p + i);
	printf("\n");

/*	p = multiple;
	printf("\nThe address obtained from the array name: %p\n", p);
	*/
	return 0;
}