// Austin Davis-Richardson
// harekrishna@gmail.com

#include <stdio.h>
#include "p2.h"

int main (void) {
	
	ComplexNum c1,c2,c3;
	
	c1.imag = 3;
	c1.real = 2;
	c2.imag = 4;
	c2.real = 5;
	
	printf("Complex Numbers:\n c1 = %gi + %g, c2 = %gi + %g\n\n",c1.imag,c1.real,c2.imag,c2.real);
	
	c3 = add(c1,c2);
	
	printf("Addition: %gi + %g\n",c3.imag,c3.real);
	
	c3 = subtract(c1,c2);
	
	printf("Subtraction: %gi + %g\n",c3.imag,c3.real);
	
	c3 = multiply(c1,c2);
	
	printf("Multiplication: %gi + %g\n",c3.imag,c3.real);
	
	c3 = divide(c1,c2);
	
	printf("Division: %gi + %g\n",c3.imag,c3.real);
	
	c3 = getConjugate(c1);
	printf("c1 Conjugate = %gi + %g\n",c3.imag,c3.real);
	c3 = getConjugate(c2);
	printf("c2 Conjugate = %gi + %g\n",c3.imag,c3.real);
	
	printf("c1 Modulus/Norm = %g\n",getNorm(c1));
	printf("c2 Modulus/norm = %g\n",getNorm(c2));

}
