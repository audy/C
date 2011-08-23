// Austin Davis-Richardson
// harekrishna@gmail.com

#include <stdio.h>
#include <stdlib.h>
#include "dataBase.h"

int main(void) {
	
	loadFile("database.txt");
	
	sortDataBase(1);
	insertRecord("Austin","Davis",1,2,"Hi!");
	
	saveFile(NULL);
	
	saveFile("savefile.txt");

	return 0;
}
