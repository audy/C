// Austin Davis-Richardson
// harekrishna@gmail.com

#include <stdio.h>

void functionForProb2() {
	static i = 1;
	printf("I've been called %d time",i++); if (i-1!=1) { printf("s"); } printf(".\n");
}

int main(void) {
	int in,n;
	printf("Enter an integer: "); scanf("%d",&in);
	for (n=0;n<in;n++)
		functionForProb2();
	return 0;
}