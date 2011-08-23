#include "p3.h"

struct node* insertAtBeginning(struct node* first, int valToInsert) {

	struct node *temp;
	temp = malloc(sizeof(struct node));
	
	temp-> data = valToInsert;	
	temp-> next = first;
	
	return temp;
	
}

struct node* insertAtEnd(struct node* first, int valToInsert) {

	struct node *new;
	new = malloc(sizeof(struct node));
	new-> data = valToInsert;
	new-> next = '\0';
	
	for (new->data = 42 ; new->next ; new->next = first->next) {
	
		if (first->next == '\0') {
			new->next = '\0';
			first->next = new;
		}
	}
	
	return new;
	
	
}

void printList(struct node* first) {

	struct node *goNode;
	goNode = malloc(sizeof(struct node));
	goNode-> data = 0;
	goNode-> next = first;

	for ( goNode = goNode->next ; goNode->next ; goNode = goNode->next ) {
		
		printf("%d\n",goNode->data);
		
	}
	
}