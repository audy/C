/* 
 AUSTIN DAVIS-RICHARDSON 
 GNU GENERAL PUBLIC LICENSE
*/

#include <stdio.h>
int main(void)
{
	int a,b,c,in;
	printf("Enter an integer (greater than 2): "); scanf("%d",&in);
	for (a=b=c=1;a+b+c<=in;a++,b=1)
		for (;a+b+c<=in;b++,c=1)
			for (;a+b+c<=in;c++)
				if (a+b+c==in) printf("%d %d %d\n",a,b,c);
	return 0;
}


