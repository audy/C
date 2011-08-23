// Austin Davis-Richardson
// harekrishna@gmail.com

#include "p3.h"

int main(void) {
		
	int hello;
	struct node *myNode;
	
	
	//testing insertAtBeginning:
	
	myNode = malloc(sizeof(struct node));
	myNode->data = 12;

	insertAtBeginning(myNode,5);
	
	//insertAtEnd(myNode,21);
	
	//insertAtBeginning(myNode,5);
	
	printList(myNode);
	
}