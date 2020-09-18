#include <stdio.h>
#include <stdlib.h>
#include "sum.h"					/* Add include file*/
#include "test_sum.h"				/* Add include file*/
int main()
	{
    	printf("Hello world!\n");

		int my_sum = sum(10, 20);					/* Add function call */
		printf("Sum = %d", my_sum);

		/* Calling test main*/
    	test_main();								/* Add function call */

		return 0;
	}
