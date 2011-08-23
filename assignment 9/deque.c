// Austin Davis-Richarsdon
// harekrisnha@gmail.com

#include <stdlib.h>
#include "deque.h"

static int head=0, tail=-1, length=0, *myDeque;

static int checkEmpty(int v) {
	if (!myDeque) return -1;
		else return v;
}

static int grow() {
	int i,j,newTail;
	
	int *newDeque = malloc(sizeof(int)*(length+1));
	
	for (i = head, j=length+1;i <= tail; i++, j++)
		newDeque[j]=myDeque[i];

	free(myDeque);
	myDeque = newDeque;

	newTail = length+tail-head+1;	
	tail = newTail;
	head = length + 1; 
	length = 2 * (length + 1);
	
}

void addToFront(int v) {
	if (head == 0) 
		grow();
	head--;
	myDeque[head] = v;
}

void addToBack(int v) {
	if (tail == length - 1)
		grow();
	tail++;
	myDeque[tail] = v;
}

int removeFromFront() {	
	if (!myDeque) return -1;
	int a=myDeque[head];
	head++;
	return a;
}

int removeFromBack() {
	if (!myDeque) return -1;
	int a=myDeque[tail];
	tail--;
	return a;
}

int checkFront() {
	return checkEmpty(head);
}

int checkBack() {
	return checkEmpty(tail);

}


