// CGS3460 Summer, 2009
// Assignment 9 - Deque

#include "deque.h"
#include <stdio.h>

int main() {
	printf("checkFront: %d\n",checkFront());
	printf("checkBack: %d\n",checkBack());
	removeFromFront();
	addToFront(3);
	addToFront(2);
	printf("checkFront: %d\n",checkFront());
	printf("checkBack: %d\n",checkBack());
	addToBack(44);
	printf("checkFront: %d\n",checkFront());
	printf("checkBack: %d\n",checkBack());
	printf("Front: %d, Back: %d\n", checkFront(), checkBack() ); // 2 4
	addToFront(1);

	printf("Remove from back: %d\n", removeFromBack() );                    // 4
	
	printf("Queue: %d, %d, %d\n", removeFromFront(), removeFromFront(), removeFromFront()); // 1 2 3
	int i;
	for(i = 0; i < 1000;++i)
		addToFront(2*i+1);
	int sum = 0;
	for(i=0; i < 1000;++i)
		sum += removeFromFront();
	printf("Sum of numbers in queue: %d\n", sum );
}
