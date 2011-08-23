/* 
 AUSTIN DAVIS-RICHARDSON 
 GNU GENERAL PUBLIC LICENSE
*/

#include <stdio.h>
int main(void)
{
	int a,b;
	printf("Please enter 2 integers separated by a space: ");
	scanf("%d%d",&a,&b);
	printf("%d x %d = %d\n",a,b,a*b);
	printf("%d + %d = %d\n",a, b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	if (a%2 == 0) printf("%d is even\n",a); else printf("%d is odd\n",a);
	if (b%2 == 0) printf("%d is even\n",b); else printf("%d is odd\n",b);
	return 0;
}