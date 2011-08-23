/* 
 AUSTIN DAVIS-RICHARDSON 
 GNU GENERAL PUBLIC LICENSE
*/

#include <stdio.h>
int main(void)
{
	int bucks,cents,thousands,hundreds,fifties,twenties,tens,dollars,quarters,dimes,nickels,pennies;
	printf("Please enter in a dollar amount (i.e. $1234.56): "); scanf("$%d.%d",&bucks,&cents);
	
	thousands = bucks/1000;
	hundreds = (bucks - thousands*1000)/100;
	fifties = (bucks - thousands*1000 - hundreds*100)/50;
	twenties = (bucks - thousands*1000 - hundreds*100 - fifties*50)/20;
	tens = (bucks - thousands*1000 - hundreds*100 - fifties*50 - twenties*20)/10;
	dollars = (bucks - thousands*1000 - hundreds*100 - fifties*50 - twenties*20 - tens*10);
	quarters = cents/25;
	dimes = (cents - quarters*25)/10;
	nickels = (cents - quarters*25 - dimes*10)/5;
	pennies = (cents - quarters*25 - dimes*10 - nickels*5);
	
	printf("\n%d Thousand",thousands); if (thousands>1 || thousands==0) { printf("s"); }
	printf("\n%d Hundred",hundreds); if (hundreds>1 || hundreds==0) { printf("s"); }
	printf("\n%d Fift",fifties); if (fifties>1 || fifties==0) { printf("ies"); } else { printf("y"); }
	printf("\n%d Twent",twenties); if (twenties>1 || twenties==0) { printf("ies"); } else { printf("y"); }
	printf("\n%d Ten",tens); if (tens>1 || tens==0) { printf("s"); }
	printf("\n%d Dollar",dollars); if (dollars>1 || dollars==0) { printf("s"); }
	
	printf("\n%d Quarter",quarters); if (quarters>1 || quarters==0) { printf("s"); }
	printf("\n%d Dime",dimes); if (dimes>1 || dimes==0) { printf("s"); }
	printf("\n%d Nickel",nickels); if (nickels>1 || nickels==0) { printf("s"); }
	printf("\n%d Penn",pennies); if (pennies>1 || pennies==0) { printf("ies\n"); } else { printf("y\n"); }	
	
	return 0;
	
}


