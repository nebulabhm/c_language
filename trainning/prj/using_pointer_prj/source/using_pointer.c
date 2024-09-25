/* Program 7.1 A simple program using pointers */
#include <stdio.h>


int main(void)
{
	int number = 0;
	int *pointer = NULL;
	number = 10;
	printf("\nnumber's address: %p", &number);
	printf("\nnumber's value: %d\n\n", number);

	pointer = &number;

	printf("\nponter's address: %p", &pointer);
	printf("\npointer's size: %d bytes", sizeof(pointer));

	printf("\npointer's value: %p", pointer);
	printf("\nvalue pointed to: %d\n", *pointer);

	return 0;



}
