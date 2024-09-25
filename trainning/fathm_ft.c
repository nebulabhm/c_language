// fathm_ft.c	--把两个fathomes换算成英尺

#include <stdio.h>

int main(void)
{
        int feet, fathoms;

        fathoms = 2;
        feet = 6*fathoms;
        printf("Ghere are %d feet in %d fathoms!\n", feet, fathoms);
        printf("Yes, I said %d feet!\n", 6*fathoms);
        printf("\a");
        getchar();
        return 0;
}
