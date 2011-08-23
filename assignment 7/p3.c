#include <stdio.h>
#include <string.h>
#include "p3.h"

int main(void) {

	char s[] = "-10.05e10";
	puts(s);
	printf("output = %g\n",stof(s));
		
}