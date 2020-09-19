#include<stdio.h>

struct date{
	   int month;
	   int day;
	   int year;
	   };

struct account {
	int number;
	char name[100];
	int acct_no;
	float mobile_no;
	char street[100];
	char city[100];
	char acct_type;
	float oldbalance;
	float newbalance;
	float payment;
	struct date lastpayment;
  }customer;
  int tl,sl,ts;

 
int checkbalance(float old, float pay)
{
    return (old-pay);
}

int getaccounttype(float old, float pay)
 {
     int result;
     if(pay>0)
        result = (pay > old)? 0 : 1;
     else
        result = (old > 0)? 1 : -1;
    printf("\n%d",result);
    return result;
 }

   void input()
	{
	  FILE *fp=fopen("Record.dat","rb");
	  fseek (fp,0,SEEK_END);
	  tl=ftell(fp);
	  sl=sizeof(customer);
	  ts=tl/sl;
	  fseek(fp,(ts-1)*sl,SEEK_SET);
	  fread(&customer,sizeof(customer),1,fp);
	  printf("\nCustomer no:%d\n",++customer.number);
	  fclose(fp);
	  printf("         Account number:");
	  scanf("%d",&customer.acct_no);
	  printf("\n       Name:");
	  scanf("%s",customer.name);
	  printf("\n       mobile no:");
	  scanf("%f",&customer.mobile_no);
	  printf("         Street:");
	  scanf("%s",customer.street);
	  printf("         City:");
	  scanf("%s",customer.city);
	  printf("         Previous balance:");
	  scanf("%f",&customer.oldbalance);
	  printf("         Current payment:");
	  scanf("%f",&customer.payment);
	  printf("         Payment date(mm/dd/yyyy):");
	  scanf("%d/%d/%d",&customer.lastpayment.month,&customer.lastpayment.day,&customer.lastpayment.year);
	  
	  char ch;
	  float balance;
	   do{
		printf("\nCheck Balance?");
		ch=getche();
	 }while(ch!='Y' && ch!='N');
	 switch(ch){
	      case 'Y':
		    balance = checkbalance(customer.oldbalance,customer.payment);
		    printf("\nCurrent Balance:%f\n",balance);
		    break;
          case 'N':
	        break;
	 }
	
	int result;
        do{
		printf("\nCheck Account Type?");
		ch=getche();
	 }while(ch!='Y' && ch!='N');
	 switch(ch){
	      case 'Y':
           	 result = getaccounttype(customer.oldbalance, customer.payment);
          	 printf("\nRESULT:%d\n",result);
            	 break;
              case 'N':
            	 break;
	 }
	 return;
   }


   void writefile()
   {
	  FILE *fp;
	  fp=fopen("Record.dat","ab");
	  fwrite(&customer,sizeof(customer),1,fp);
	  fclose(fp);
	  return;
   }

   void search()
   {
	 char ch;
	 char nam[100];
	 int n,i,m=1;
	 FILE *fp;
	 fp=fopen("Record.dat","rb");

	 do{
		printf("\nEnter your choice:");
		ch=getche();
	 }while(ch!='1' && ch!='2');

	 switch(ch){
	      case '1':
		    fseek(fp,0,SEEK_END);
		    tl=ftell(fp);
		    sl=sizeof(customer);
		    ts=tl/sl;
		    do{
			printf("\nChoose customer number:");
			scanf("%d",&n);
			if(n<=0 || n>ts)
			printf("\nEnter valid number\n");
			else{
			    fseek(fp,(n-1)*sl,SEEK_SET);
			    fread(&customer,sl,1,fp);
			    output();
			}
			printf("\n\nAgain?(y/n)");
			ch=getche();
		    }while(ch=='y');
		    fclose(fp);
		    break;
	      case '2':
		    fseek(fp,0,SEEK_END);
		    tl=ftell(fp);
		    sl=sizeof(customer);
		    ts=tl/sl;
		    fseek(fp,(ts-1)*sl,SEEK_SET);
		    fread(&customer,sizeof(customer),1,fp);
		    n=customer.number;

		    do{
			printf("\nEnter the name:");
			scanf("%s",nam);
			fseek(fp,0,SEEK_SET);
			for(i=1;i<=n;i++)
			{
			     fread(&customer,sizeof(customer),1,fp);
			     if(strcmp(customer.name,nam)==0)
			     {
				output();
				m=0;
				break;
			     }
			}
			if(m!=0)
			printf("\n\nDoesn't exist\n");
			printf("\nAnother?(y/n)");
			ch=getche();
		    }while(ch=='y');
		    fclose(fp);
	      }
	      return;
	 }



   void output()
	 {
	   printf("\n\n    Customer no    :%d\n",customer.number);
	   printf("    Name 	   :%s\n",customer.name);
	   printf("    Mobile no      :%.f\n",customer.mobile_no);
	   printf("    Account number :%d\n",customer.acct_no);
	   printf("    Street         :%s\n",customer.street);
	   printf("    City           :%s\n",customer.city);
	   printf("    Old balance    :%.2f\n",customer.oldbalance);
	   printf("    Current payment:%.2f\n",customer.payment);
	   printf("    New balance    :%.2f\n",customer.newbalance);
	   printf("    Payment date   :%d/%d/%d\n\n",customer.lastpayment.month,customer.lastpayment.day,customer.lastpayment.year);
	   printf("    Account status :");

	   switch(customer.acct_type)
	      {
	      case 'I':
		 printf("INSUFFICIENT BALANCE\n\n");
		 break;
	      case 'S':
		 printf("SUFFICIENT BALANCE\n\n");
		 break;
	      case 'N':
		 printf("NEGATIVE BALANCE\n\n");
		 break;
	      default:
		 printf("ERROR\\n\n");
	      }
	      return;
	   }















