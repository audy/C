/* 
 AUSTIN DAVIS-RICHARDSON 
 GNU GENERAL PUBLIC LICENSE
*/

#include <stdio.h>
int main(void)
{
	int in,x;
	printf("This program will calculate n! for 0 < n < 16.\nEnter an integer: "); scanf("%d",&in);
	printf("fact(%d) = ",in);
	for (x=in-1;x>0;x--)
		in = in*x;
	printf("%d\n",in);
	return 0;	
}

		 



