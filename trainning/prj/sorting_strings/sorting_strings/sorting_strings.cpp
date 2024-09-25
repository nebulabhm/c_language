/* Program 7.14 Sorting strings */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define BUFFER_LEN 100
#define NUM_P	   100

int main(void)
{
	char buffer[BUFFER_LEN];
	char *pS[NUM_P] = { NULL };
	char *pTemp = NULL;
	int i = 0;
	bool sorted = false;
	int last_string = 0;

	printf("\nEnter successive lines, pressing Enter at the"
		" end of each line. \nJust press enter to end. \n\n");
	while ((*fgets(buffer, BUFFER_LEN, stdin) != '\n') && (i < NUM_P))
	{
		pS[i] = (char*)malloc(strlen(buffer) + 1);
		if (pS[i] == NULL)
		{
			printf("Memory allocation failed. Program terminated.\n");
			return 1;
		}
		strcpy(pS[i++], buffer);
	}
	last_string = i;

	while (!sorted)
	{
		sorted = true;
		for(i=0;i<last_string-1;i++)
			if (strcmp(pS[i], pS[i + 1]) > 0)
			{
				sorted = true;
				pTemp = pS[i];
				pS[i] = pS[i + 1];
				pS[i + 1] = pTemp;
			}
	}

	printf("\nYour input sorted in order is:\n\n");
	for (i = 0; i < last_string; i++)
	{
		printf("%s\n", pS[i]);
		free(pS[i]);
		pS[i] = NULL;
	}
	return 0;
}