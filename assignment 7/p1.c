#include <stdio.h>
#include "p1.h"

int main(void) {

	MY_ASSERT(5 > 3,"This is the message");
	MY_ASSERT(5 < 3,"This is the message");

	return 0;
}