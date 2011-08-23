// Austin Davis-Richardson
// harekrishna@gmail.com

#ifndef P3_C
#define	P3_C
#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;
};

struct node* insertAtBeginning(struct node* first, int valToInsert);
struct node* insertAtEnd(struct node* first, int valToInsert);
int findValue(struct node* first, int valToFind);
struct node* deleteValue(struct node* first, int valToDelete);

void printList(struct node* first);

#endif
