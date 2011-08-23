// Austin Davis-Richardson
// harekrishna@gmail.com

#include <stdio.h>
#define arrayLength 11

void bubbleSwap(int *a,int *b)
{
		int temp=*a;
		*a=*b;
		*b=temp;		
}

int main(void) {
	int myArray[arrayLength],n;
	float avg,sum;
	printf("Enter in %d integers:\n",arrayLength);
	
	for (n=0;n<arrayLength;n++)
		scanf("%d",&myArray[n]);
	//bubbleSort borrowed from class examples:
	int i,j;
	for (i=0;i<n;i++)
		for (j=n-1;j>i;j--)
			if (myArray[j] < myArray[j-1])
				bubbleSwap(&myArray[j],&myArray[j-1]);
	
	for (n=0;n<arrayLength;n++)
		sum = sum + myArray[n];
	avg=sum/arrayLength;

	
	printf("Average = %g\n",avg);
	printf("Median = %d\n",myArray[5]);
}

