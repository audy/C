// Austin Davis-Richardson
// harekrishna@gmail.com

#include <stdio.h>
#include "life.h"


void info () {

	printf("Game of Life\n"); printf("Written by Austin Davis-Richardson\n");

}

void init (char cell[][COLS]) {
	int i,j;
	for (i=0;i<ROWS;i++)
		for (j=0;j<COLS;j++)
			cell[i][j]=' ';

}

void display (char cell[][COLS]) {
	int i,j;
	system("clear");
	for(i=0;i<COLS+1;i++) { printf("_"); } printf("\n|");
	
	for (i=0;i<ROWS;i++) {
		for (j=0;j<COLS;j++) {
			printf("%c",cell[i][j]); } 
		printf("|\n|");
	}
	for(i=0;i<COLS;i++) { printf("_"); } printf("|\n");
	
}

int terminate(char cell[][COLS]) {
	
	// empty board == TRUE.
	
	int i,j,count;
	for (i=0;i<ROWS;i++)
		for (j=0;j<COLS;j++)
			if (cell[i][j]==SYMBOL) { count++; }
	
	if (count>0) { return 0; }
	return 1;
	
	// What about homeostasis?
	
}

void update (char cell[][COLS]) {
	int i,j,k,l; int neighbors=0;
	char newCell[ROWS][COLS];

	// copy existing cell into a new cell temporarily
	for (i=0;i<ROWS;i++)
		for (j=0;j<COLS;j++)
			newCell[i][j]=cell[i][j];
	
	// counts all the neighbors for each (i,j).
	for (i=0;i<ROWS;i++) {
		for (j=0;j<COLS;j++) {
			
			for (k=-1;k<2;k++) {
				for (l=-1;l<2;l++) {
					if ((ROWS<(i+k)) || ((i+k)<0) || (COLS<(j+l)) || ((j+l)<0)) { continue; } // not out of bounds
					if ((k==0) && (l==0)) { continue; } // yourself doesn't count
					if (cell[i+k][j+l]==SYMBOL) { neighbors++; } // count yer neighbors
				} 
			}
			
			//this isn't needed because these cells wouldn't be altered by the other 3 cases.
			//if ((neighbors==2) && (cell[i][j]==SYMBOL)) { newCell[i][j]=SYMBOL; } 
			
			if (neighbors==3) { newCell[i][j]=SYMBOL; }
			if (neighbors<2) { newCell[i][j]=' '; }
			if (neighbors>3) { newCell[i][j]=' '; }
			
			neighbors=0; // clear # of neighbors for next cell
		}
	}
	
	//copyCell(newCell,cell);
	for (i=0;i<ROWS;i++)
		for (j=0;j<COLS;j++)
			cell[i][j]=newCell[i][j];
}

int main (void) {
	int i,j;
	char cell[ROWS][COLS];
	info();
	init(cell);
	display(cell);
	configure(cell);
	display(cell);
	do {
		
		update(cell);
		display(cell);
		
		usleep(50000);
	} while (!terminate(cell));
}