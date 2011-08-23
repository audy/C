#ifndef LIFE_H
#define LIFE_H

#define SYMBOL 'O'

#define ROWS 35
#define COLS 70

#define TRUE 1
#define FALSE 0

// patterns

void glidergun (char cell[][COLS]) {

	cell[0][24]=SYMBOL;
	cell[1][24]=SYMBOL;
	cell[1][22]=SYMBOL;	
	cell[2][12]=SYMBOL;
	cell[2][13]=SYMBOL;
	cell[2][20]=SYMBOL;
	cell[2][21]=SYMBOL;
	cell[2][34]=SYMBOL;
	cell[2][35]=SYMBOL;
	cell[3][11]=SYMBOL;
	cell[3][15]=SYMBOL;
	cell[3][20]=SYMBOL;
	cell[3][21]=SYMBOL;
	cell[3][34]=SYMBOL;
	cell[3][35]=SYMBOL;
	cell[4][0]=SYMBOL;
	cell[4][1]=SYMBOL;
	cell[4][10]=SYMBOL;
	cell[4][16]=SYMBOL;
	cell[4][20]=SYMBOL;
	cell[4][21]=SYMBOL;
	cell[5][0]=SYMBOL;
	cell[5][1]=SYMBOL;
	cell[5][10]=SYMBOL;
	cell[5][14]=SYMBOL;
	cell[5][16]=SYMBOL;
	cell[5][17]=SYMBOL;
	cell[5][22]=SYMBOL;
	cell[5][24]=SYMBOL;
	cell[6][10]=SYMBOL;
	cell[6][16]=SYMBOL;
	cell[6][24]=SYMBOL;
	cell[7][11]=SYMBOL;
	cell[7][15]=SYMBOL;
	cell[8][12]=SYMBOL;
	cell[8][13]=SYMBOL;

}

void tencell (char cell[][COLS]) {
	int j;
	for (j = 30; j < 40; j++) {
		cell[12][j] = SYMBOL;
	}
}

void glider (char cell[][COLS]) {
	int srow = ROWS/3;
	int col = COLS/2;
	char symbol = SYMBOL;
	cell[srow][col] = symbol;
	cell[srow+1][col+1] = symbol;
	cell[srow+2][col+1] = symbol;
	cell[srow+2][col] = symbol;
	cell[srow+2][col-1] = symbol;
}

void exploder (char cell[][COLS]) {
	int i;
	int srow = ROWS/2  - 2;
	int col = COLS/2 - 2;
	char symbol = SYMBOL;
	cell[srow][col+2] = symbol;
	cell[srow+4][col+2] = symbol;
	for (i = 0; i < 5; i++) {
		cell[srow + i][col] = symbol;
		cell[srow + i][col+4] = symbol;
	}
}

void spaceship (char cell[][COLS]) {
	int srow = ROWS/2 - 3;
	int col = COLS/2 - 3;
	int i;
	char symbol = SYMBOL;
	for (i = 0; i < 4; i++) {
		cell[srow][col+i] = symbol;
	}
	cell[srow+1][col-1] = symbol;
	cell[srow+1][col+3] = symbol;
	cell[srow+2][col+3] = symbol;
	cell[srow+3][col-1] = symbol;
	cell[srow+3][col+2] = symbol;
}

void configure (char cell[][COLS]) {
	
	void (*pattern)(char cell[][COLS]);
	
	// choose the tencell pattern..
	// to test with other patterns replace tencell below
	// with the appropriate function name
	
	pattern = &glidergun;
	
	pattern (cell);
}


#endif