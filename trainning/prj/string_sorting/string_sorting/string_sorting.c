/* Program 8.6 The functional approach to string sorting */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


bool str_in(char **);
void str_sort(const char *[], int);
void swap(void **p1, void **p2);
void str_out(char *[], int);

#define BUFFER_LEN 256
#define NUM_P 50

int main(void)
{
	char *pS[NUM_P];
	int count = 0;

	printf("\nEnter successive lines, pressing Enter at the end of"
		" each line. \nJust press Enter to end.\n");

	for (count = 0; count < NUM_P; count++)
		if (!str_in(&pS[count]))
			break;

	str_sort(pS, count);
	str_out(pS, count);
	return 0;
}

bool str_in(char **pString)
{
	char buffer[BUFFER_LEN];

	if (gets(buffer) == NULL)
	{
		printf("\nError reading string.\n");
		exit(1);
	}

	if (buffer[0] == '\0')
		return false;

	*pString = (char*)malloc(strlen(buffer) + 1);

	if (*pString == NULL)
	{
		printf("\nOut of memory.");
		exit(1);
	}

	strcpy(*pString, buffer);
	return true;
}

void str_sort(const char *p[], int n)
{
	char *pTemp = NULL;
	bool sorted = false;
	while (!sorted)
	{
		sorted = true;
		for(int i = 0; i< n-1;i++)
			if (strcmp(p[i], p[i + 1]) > 0)
			{
				sorted = false;
				swap(&p[i], &p[i + 1]);
			}
	}
}

void swap(void **p1, void **p2)
{
	void *pt = *p1;
	*p1 = *p2;
	*p2 = pt;
}

void str_out(char *p[], int n)
{
	printf("\nYour sortted in order is:\n\n");
	for (int i = 0; i < n; i++)
	{
		printf("%s\n", p[i]);
		free(p[i]);
		p[i] = NULL;
	}
	return;
}