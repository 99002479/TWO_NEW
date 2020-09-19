#include <stdio.h>
#include <stdlib.h>
#include "sum.h"					/* Add include file*/
#include "test_sum.h"				/* Add include file*/

void main()
	{
	  int i,n;
	  char ch;

	  printf("   PAYMENT SYSTEM:\n\n");
	  printf("\n1:    ADD ACOOUNT\n");
	  printf("2:    SEARCH CUSTOMER\n");
	  printf("3:    EXIT\n");

	  do{
	       printf("\nOPTION:");
	       ch=getche();
	  }while(ch<='0' || ch>'3');

	  switch(ch){
		case '1':

			printf("\nHOW MANY ACCOUNTS?");
			scanf("%d",&n);
			for(i=0;i<n;i++){
				input();
				if(customer.payment>0)
					customer.acct_type=(customer.payment > customer.oldbalance)? 'I': 'S';
				else
					customer.acct_type=(customer.oldbalance>0)?'S' : 'N';
				customer.newbalance=customer.oldbalance - customer.payment;
				writefile();
			}
			main();
		case '2':

			printf("SEARCH BY?\n");
			printf("\n1 --- Search by customer number\n");
			printf("2 --- Search by customer name\n");
			search();
			ch=getche();
			main();
		case '3':
			exit(1);
	  }
 }





