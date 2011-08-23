/* 
 AUSTIN DAVIS-RICHARDSON 
 GNU GENERAL PUBLIC LICENSE
*/

#include <stdio.h>
int main(void)
{
	float nom_a,nom_b,den_a,den_b;
	printf("Enter 2 fractions separated by a space (e.g: 1/2 3/9):  ");
	scanf("%g/%g %g/%g",&nom_a,&den_a,&nom_b,&den_b);
	printf("You entered %g/%g and %g/%g\n",nom_a,den_a,nom_b,den_b);
	printf("The product of %g/%g and %g/%g is: %g/%g\n",nom_a,den_a,nom_b,den_b,nom_a*nom_b,den_a*den_b);
	printf("The sum of %g/%g and %g/%g is: %g/%g \n",nom_a,den_a,nom_b,den_b,nom_a*den_b + nom_b*den_a,den_a*den_b);
	printf("%g/%g = %g\n",nom_a,den_a,nom_a/den_a);
	printf("%g/%g = %g\n",nom_b,den_b,nom_b/den_b);
	return 0;
}


