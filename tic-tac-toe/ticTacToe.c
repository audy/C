// Austin Davis-Richardson
// harekrishna@gmail.com

#include <stdio.h>
#include <string.h>


void info() {
	printf("\n T | I | C \n---+---+---");
	printf("\n O | A |   \tby Austin Davis-Richardson\n---+---+---\t Player: 'x' \t CPU: 'o'");
	printf("\n E |   | C \n\n");
}

void init(char cell[]) {
	int i;
	for (i=0;i<9;i++) { cell[i] = ' '; }
}

void gameBoard (char cell[]) {
	printf("\n %c | %c | %c \n---+---+---", cell[0],cell[1],cell[2]);
	printf("\n %c | %c | %c \n---+---+---", cell[3], cell[4], cell[5]);
	printf("\n %c | %c | %c \n\n", cell[6],cell[7],cell[8]);


}

char checkWinner(char cell[]) {
	int i,taken;
	int winScenarios[24] = {0,1,2,3,4,5,6,7,8,0,3,6,1,4,7,2,5,8,2,4,6,0,4,8}; // winning combos grouped into 3's.  Horizontal, vertical, and then diagonal.	
	// Check horizontal, vertical and diagonal.
	
	for (i=0;i<24;i=i+3) {
		if ((cell[winScenarios[i]]==cell[winScenarios[i+1]]) &&
			(cell[winScenarios[i]]==cell[winScenarios[i+2]]) && 
			(cell[winScenarios[i]]!=' ')) { return cell[winScenarios[i]]; }		
	}
	
	
	// Nobody's won.  Has there been a draw?
	
	for (i=0,taken=0;i<9;i++) {
		if (cell[i] != ' ') { taken++; }
		if (taken == 9) { return 'd'; } // draw = "catscratch" in tic-tac-toe jargon.  It looks like a cat's scratch apparently.
	}
	
	// Well I guess you should keep playing then, shouldn't you?
	
	return ' ';

}

void printWinner(char cell[]) {
	if (checkWinner(cell)=='d') { printf("Cat Scratch!\n"); }
	if (checkWinner(cell)=='o') { printf("You LOSE!\n"); }
	if (checkWinner(cell)=='x') { printf("Cheater.\n"); }
}

int checkMove(char cell[], int *move) {
	if (cell[*move]=='o' || cell[*move]=='x' || 0>*move || *move>9) {
		return 1;
	}
	return 0;
}

void userMove(char cell[]) {
	int umv;
	printf("Enter move (1-9): ");
	scanf("%d",&umv); umv--; // remove 1 from the user's input since arrays start at zero and people start at 1.

	if (checkMove(cell,&umv)) { printf("Invalid move!\n"); userMove(cell); }

	else {
		cell[umv]='x';
	}
}

void copyArray(char *a2, char *a1) {
	int i;
	for (i=0;i<9;i++) {
		a2[i]=a1[i];	
	}
	
}
void computerMove(char cell[]) {
	int i,j;
	int score=0; int bestScore=0; int bestMove=0; int moved=0;
	char arrayBackup[9];
	copyArray(arrayBackup,cell);
	
	// first, check to make sure there aren't any 1-move wins.
	
	for (i=0;i<9;i++) {
		if (cell[i]!=' ') { continue; }
		cell[i]='x';
		if (checkWinner(cell)=='x') { cell[i]=' '; bestMove=i; bestScore=100; }
		else { cell[i]=' '; }
		
	}
	
	// if not, do some hard thinkin...
		
	for(i=0;i<9;i++) {
		if (cell[i]!=' ') { continue; } // Howdy, Ma'am.  Is this seat taken?
		for (j=0;j<9;j++) {
			if (cell[j]!=' ') { continue; }
			copyArray(cell,arrayBackup);
			cell[i]='x'; cell[j]='x';
			if (checkWinner(cell)=='x') { 
				score++; // count how many wins cell[i] can get.
				if (score>bestScore) { bestMove=i; bestScore=score;}	// may the best cell[i] win!
			}
		}
		copyArray(cell,arrayBackup); cell[bestMove] = 'o';
	}
	printf("Computer's move: %d\n",bestMove);

}

int main(void) {
	int i; char cell[9] = {'1','2','3','4','5','6','7','8','9'};
	info(cell);
	
	gameBoard(cell);
	
	init(cell);
	
	for (i=0;i<9;i++) {
		userMove(cell);
		gameBoard(cell);
		if (checkWinner(cell) != ' ') { printWinner(cell); break; }
		
		computerMove(cell);
		gameBoard(cell);
		if (checkWinner(cell) != ' ') { printWinner(cell); break; }
		
	}
	return 0;
}


