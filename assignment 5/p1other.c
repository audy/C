/*
 Austin Davis-Richardson
 Do whatever you want with me code; I don't care.  
 
 Write a program that reads in 11 integers from the user and puts them 
 into an array in the order entered by the user.  The program will then send this 
 array to a FUNCTION which calculates and prints the mean and median.  The mean 
 is the sum of the numbers divided by 11.  The median is the midpoint value (half of 
 the numbers are above it, and half are below it).  To calculate the median, the 
 array must be sorted.  You may want to consider the quicksort function defined in 
 chapter 9 of the course textbook.

*/

#include <stdio.h>
#define arrayLength 11

// I didn't invent bubbleSort, but I could have.  I just didn't feel like it.
// You could have made an assignment for us to invent a sorting algorith.
// But, like me, you just didn't feel like it.
// I got this off of the class examples webpage:

int bubbleSwap(int *a,int *b) {
	int temp=*a;
	*a=*b;
	*b=temp;	
}

int bubbleSort(int *sort_array[], int *n) {
	int i,j;
	for (i=0;i<*n;i++)
		for (j=*n-1;j>i;j--)
			if (*sort_array[j] < *sort_array[j-1])
				bubbleSwap(sort_array[j],sort_array[j-1]);
}

// Everything below this line is completely "de novo."

float arrayAverage(int *array[], int *l) {
	float sum = 0;
	int n;
	for (n=0;n<*l;n++)
		sum = sum + *array[n];
	n=*l;
	return sum/n;
	
}

int main(void) {
	int myArray[arrayLength],n;
	int length = arrayLength;
	int array_pointer = &myArray;
	int length_pointer = &length;
	printf("Enter in %d integers:\n",length);
	
	for (n=0;n<length;n++)
		scanf("%d",&myArray[n]);
	
	bubbleSort(&myArray,&length);
	
	printf("Average = %g\n",arrayAverage(array_pointer,length_pointer));
	printf("Median = %d\n",array_pointer);
}


