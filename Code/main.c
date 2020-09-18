#include <stdio.h>
#include <stdlib.h>
#include "sum.h"					/* Add include file*/

int main()
	{
    	printf("Hello world!\n");

		int my_sum = sum(10, 20);					/* Add function call */
		printf("Sum = %d", my_sum);
    	
		return 0;
	}
