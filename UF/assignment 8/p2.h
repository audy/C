// Austin Davis-Richardson
// harekrishna@gmail.com

#ifndef P2_C
#define	P2_C

typedef struct {
	float imag, real; 
} ComplexNum;

ComplexNum add(ComplexNum c1, ComplexNum c2);
ComplexNum subtract(ComplexNum c1, ComplexNum c2);
ComplexNum multiply(ComplexNum c1, ComplexNum c2);
ComplexNum divide(ComplexNum c1, ComplexNum c2);
ComplexNum getConjugate(ComplexNum c1);
float getNorm(ComplexNum c1);

#endif