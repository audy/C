#include <stdio.h>

int main(void)
{
	float n1,n2;
	int operation;
	printf("Enter first number: \t");
	scanf("%f",&n1);
	printf("Enter second number: \t");
	scanf("%f",&n2);
	printf("1. Add\t\t (%g + %g)\n",n1,n2);
	printf("2. Subtract\t (%g - %g)\n",n1,n2);
	printf("3. Multiply\t (%g x %g)\n",n1,n2);
	printf("4. Divide\t (%g / %g)\n",n1,n2);
	printf("Choose (1-4): ");
	scanf("%d",&operation);
		switch (operation) {
			case 1: printf("%g + %g = %g\n",n1,n2,n1+n2); break;
			case 2: printf("%g - %g = %g\n",n1,n2,n1-n2); break;
			case 3: printf("%g x %g = %g\n",n1,n2,n1*n2); break;
			case 4: {
				if (n2 == 0) { printf("ERROR: divide by zero!\n"); break; }
				else { printf("%g / %g = %g\n",n1,n2,n1/n2); break; }
			}
			default: printf("Illegal Option\n");
		}

	return 0;
}


