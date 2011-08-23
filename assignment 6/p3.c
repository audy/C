// Austin Davis-Richardson
// harekrishna@gmail.com

#include <stdio.h>

int my_strcmp(char *s1, char *s2) {
	do {
		if (*s1==*s2) { continue; }
		else return *s1-*s2;
	} while (*s1++ && *s2++);

}

/*
 
 Unequal length strings?
 
*/

int main(void) {
	char s1[] = "Rats parade a rap star";
	//char s2[] = "Rats parade a rap star"; // 0
	//char s2[] = "Rats parade a rap stap"; // +2
	//char s2[] = "Rats parade a rap stat"; // -2
	char s2[] = "Hi!"; // 10

	
	printf("my function returned a: %d\n",my_strcmp(s1,s2));
	printf("the real function return a: %d\n",strcmp(s1,s2));

	return 0;
	
}