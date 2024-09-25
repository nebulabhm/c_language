/* Note:Your choice is C IDE */
#include "stdio.h"
int output[160] = {0};
int check_input(char input);

main()
{
    int input, space_num, j, i = 0;
    
    space_num = 0;
    while ((input = getchar()) != EOF)
    {
    	
    	if (input != '\n')
    	{
    		if (input == ' ')
    			space_num = 1;
    		output[i] = input;
    		++i;
    	}
    	else if (input != ' ')
    	{
    		output[i] = input;
    		++i;
    	}
    }
    ++i;
    output[i] = '\0';
    /* for (j = 0; j<i; j++) */
    i = 0;
    while (*(output + i) != '\0'){
    	printf("%1c", output[i]);
    	++i;
    	}    
}

int check_input(char input)
{
	int len;
	if (input != '\n')
	{
		if (input == ' ')
			space_num = 1;
		output[i] = input;
		++i;
	}
	else if (input != ' ')
	{
		output[i] = input;
		++i;
	}	