/* Perform to gather statistic of the number of space, tab and return in input */
#include "stdio.h"
main()
{
	int temp, space_num, tab_num, return_num;
	
	space_num = 0;
	tab_num = 0;
	return_num = 0;
	while ((temp = getchar()) != EOF)
	{
		switch (temp)
		{
			case ' ':
				++space_num;
			break;
			
			case '	':
				++tab_num;
			break;
			
			case '\n':
				++return_num;
			break;
			
			default:
				break;
		}
	}
	printf("spacenum=%2d\ntabnum=%2d\nreturnnum=%2d", space_num, tab_num, return_num);
	getchar();    
}