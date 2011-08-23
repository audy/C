// Austin Davis-Richardson
// harekrishna@gmail.com


#include "p2.h"

#include <math.h>

ComplexNum add(ComplexNum c1, ComplexNum c2) {
	
	ComplexNum c3;
	
	c3.imag = c1.imag + c2.imag;
	c3.real = c1.real + c2.real;
	return c3;
}

ComplexNum subtract(ComplexNum c1, ComplexNum c2) {

	ComplexNum c3;
	c3.imag = c1.imag - c2.imag;
	c3.real = c1.real - c2.real;
	return c3;

}

ComplexNum multiply(ComplexNum c1, ComplexNum c2) {
	
	ComplexNum c3;
	c3.real = (c1.real*c2.real) - (c1.imag*c2.imag);
	c3.imag = (c1.real*c2.imag) + (c1.imag*c2.real);
	return c3;
	
}

ComplexNum divide(ComplexNum c1, ComplexNum c2) {

	ComplexNum c3;
	
	c3.real = (c1.real*c2.real + c1.imag*c2.imag)/(c2.real*c2.real + c2.imag*c2.imag);
	c3.imag = (c1.imag*c2.real - c1.real*c2.imag)/(c2.real*c2.real + c2.imag*c2.imag);
	
	return c3;
	
}

ComplexNum getConjugate(ComplexNum c1) {
	
	ComplexNum c3;
	
	c3.imag = -1*c1.imag;
	c3.real = c1.real;
	
	return c3;
	
}

float getNorm(ComplexNum c1) {
	
	float answer;
	
	answer = sqrt(c1.real*c1.real + c1.imag*c1.imag);
	
	return answer;
	
}



