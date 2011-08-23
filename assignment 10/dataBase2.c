// Austin Davis-Richardson
// harekrishna@gmail.com

#include "dataBase.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
	char firstName[50];
	char lastName[50];
	int salary;
	int account;
	char division[50];
	struct node *next;
};

static struct node *first = NULL;

int main (void) {
	char ch;

	loadFile("database.txt");

	return 0;

}

void loadFile(const char *fileName) {

	int i,j; char myString[256], anotherString[256];
	char *p;
	
	FILE *fp = fopen(fileName,"r");
	
	if (!fp) {
		printf("ERROR: Unable to open file %s\n",fileName);
		exit(1);
	}

	struct node *temp = malloc(sizeof(struct node));	
	first = temp;	
	
	fgets(myString,256,fp);
	
	while (p = strchr(myString,34))
		strcpy(p, p+1);
	
	strcpy(temp->division, "hi");
	
	puts(first->division);
	
	fclose(fp);
	
	
	
	
	
}

void saveFile(const char *fileName);
void findRecord(int field, const char *data);
void removeRecord(int field, const char *data);
void insertRecord(const char *fn, const char *ln, int salary, int accounts, const char *division);
void sortDataBase(int field);



