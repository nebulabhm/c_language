/* Copy input to output and replace multiple space with just one space */
#include "stdio.h"
main()
{
    int input, space_num, j, i = 0;
    int output[100] = {0};
    
    space_num = 0;
    while ((input = getchar()) != EOF)
    {
    	if (!space_num)
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