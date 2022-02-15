/* write a c program to calculate and print the electricity bill of the given customers.the customer id , name amd unit consumed by the user should be taken  from the keyboard and display the total amount to pay to the coustomer . the chages are as follows :
 unit                                  chgarge/unit
 upto 199                                 @1.20 
 200 and above but less then 400          @1.50
 400 and above but less then 600          @1.60 
 600 and above                            @2.00
 
 if a bill exceed Rs400 then a surcharge of 15% will be charged and the minimum bill should be of Rs 100/- */
 
 
#include<stdio.h>
void main()
{
int c_id,unit;
char name[30];
float amt_crg,surcharge,net_amount;
printf(" Enter the Customer IDNO: ");
scanf("%d",&c_id);
printf(" Enter the Customer Name: ");
scanf("%s",&name);
printf(" Enter the unit consumed: ");
scanf("%d",&unit);
printf("unit consumed : %d \n",unit);
if (unit<200)
{
		amt_crg=(unit*1.20);
			
			printf("Amount charges @Rs 1.20 per unit: %2f",amt_crg);
}
else if ((unit>=200)&&(unit<400))
{
		amt_crg=(unit*1.50);
		if(amt_crg>=400)
		{
			surcharge=amt_crg*15/100;
			if(surcharge<100)
				(surcharge=100);
		}
		printf("Amount Charge @Rs 1.50 per unit: %.2f\n",amt_crg);
		printf("Surcharge Amount : %.2f \n",surcharge);
		printf("Net Amount Paid by the Customer : %.2f ",amt_crg+surcharge);
}
else
{
	printf("Amount Charge @Rs 1.50 per unit: %.2f ",amt_crg);
}
}
else if (unit>=400 && unit<=600)
{
	    amt_crg= (unit*1.80);
	          surcharge=amt_crg*15/100;
			  printf("Amount Charges @Rs 1.80 per unit : %.2f \n",amt_crg);
			  printf("Surcharge Amount : %.2f \n",surcharge);
			  printf("Net Amount Paid by the Customer : %.2f ",surcharge+amt_crg);
}
else if (unit>=600)
{
		amt_crg=(unit*2.0);
		surcharge=amt_crg*15/100;
		printf("Amount Charge @Rs 2.00 per unit : %.2f \n", amt_crg);
		printf("Surcharge Amount : %.2f \n ",surcharge);
		printf("Net Amount Paid by the Customer: %.2f ",surcharge+amt_crg);

}		