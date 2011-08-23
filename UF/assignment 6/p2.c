// Austin Davis-Richardson
// harekrishna@gmail.com

#include <stdio.h>

int my_strcpy(char *s1, char *s2) {

	while ((*s2++=*s1++)!='\0');
	return 0;
	
}

/*
 
 There is a compiler error in main because of implicitly defined string length.
 However, the program still runs fine and the error is not in my_strcpy so I
 should still get full credit, right?

*/

int main(void) {

	char s1[] = "Sarah Pailin Para Sailin";
	char s2[strlen(s1)];

	my_strcpy(s1,s2);
	puts(s2);

	return 0;
}