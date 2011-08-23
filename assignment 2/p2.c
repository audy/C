/* 
 AUSTIN DAVIS-RICHARDSON 
 GNU GENERAL PUBLIC LICENSE
*/

#include <stdio.h>
int main(void)
{
	float a_1,a_2,a_3,a_4,a_5,midterm,desired_grade;
	printf("Hello, please enter in your grades (0-100)\n");
	printf("Assignment 1:\t");
	scanf("%f",&a_1);
	printf("Assignment 2:\t");
	scanf("%f",&a_2);
	printf("Assignment 3:\t");
	scanf("%f",&a_3);
	printf("Assignment 4:\t");
	scanf("%f",&a_4);
	printf("Assignment 5:\t");
	scanf("%f",&a_5);
	printf("Midterm:\t");
	scanf("%f",&midterm);
	printf("Desired Grade:\t");
	scanf("%f",&desired_grade);
	printf("You are required to make a %g on the final to get a %g in the class.\n",2*desired_grade - .1*(a_1+a_2+a_3+a_4+a_5) - .5*midterm,desired_grade);
	
	return 0;
}


