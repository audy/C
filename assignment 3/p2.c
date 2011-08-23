#include <stdio.h>  int main(void)
{
	int a,b,c;
	printf("Enter in the lengths of the sides of your triangle (i.e. 3 4 5): ");
	scanf("%d %d %d",&a,&b,&c);
	
	if ((a+b>c) && (a+c>b) && (b+c>a)) {
		printf("Lengths form a triangle.\n");
	}
	else {
		printf("ERROR: Lengths do not form a triangle.\n");
		return 0;
	}
	
	printf("Triangle is ");
	
	if (!((a==b) && (b==c) && (a==c))) {
		printf("not ");
	}
	
	printf("equilateral.\n");
	printf("Triangle is ");
	
	if (!(((a == b) || (b == c) || (a == c)) && !((a==b) && (b==c) && (a==c)))) {
		printf("not ");
	}
	
	printf("isosceles.\n");
	printf("Triangle is ");
	
	if ((!(a*a + b*b == c*c) && !(a*a + c*c == b*b) && !(b*b + c*c == a*a))) {
		printf("not ");
	}
	
	printf("right-angled.\n");
	
	return 0;
}