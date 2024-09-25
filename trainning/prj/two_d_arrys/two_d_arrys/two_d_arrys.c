/* Program 7.7 A Two-Dimensonal Arrays */
#include <stdio.h>


int main(void)
{
	char board[3][3] = {
		{'1', '2', '3'},
		{'4', '5', '6'},
		{'7', '8', '9'}
	};

	printf("value of baord[0][0]: %c\n", board[0][0]);
	printf("vaule of *board[0]: %c\n", *board[0]);
	printf("value of **board: %c\n", **board);
	printf("value of board: %p\n", board+1);
	printf("value of *board: %p\n", *board);
	printf("value of **board: %p\n", *board+1);

	return 0;
}