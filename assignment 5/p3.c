#include "stdio.h"

void get_Rational(int *num,int *den) {
	
	printf("%d/%d\n",*num,*den);
		
}

int main(void) {
	int a,b,*num,*den;
	
	printf("Enter in a rational number such as 1/89: ");
	
	scanf("%d/%d",&a,&b);
	
	get_Rational(&a,&b);

}

