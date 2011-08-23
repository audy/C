// Austin Davis-Richardson
// harekrishna@gmail.com

#include <stdio.h>
#include "p2.h"
/*
int getTheArea(struct rectangle r) {
	
}

struct point getTheCenter(struct rectangle r) {
	
}

struct rectangle shiftTheRectangle(struct rectangle r, int x, int y) {
	
}
*/
int isItInYou(struct rectangle r, struct point p) {
	// Gatorade?
	
	if (
		(p.x > r.upper_left.x) &&
		(p.y < r.upper_left.y) &&
		(p.x < r.lower_right.x) &&
		(p.y > r.lower_right.y)
		) { return 1; }
	
	else return 0;
	
}

int main(void) {
	
	struct rectangle r;
	r.upper_left.x = 1;
	r.upper_left.y = 1;
	r.lower_right.x = 3;
	r.lower_right.y = 3;
	
	struct point p;
	p.x = 2;
	p.y = 2;
	
	printf("Is it in you?: %d\n",isItInYou(r,p));

	return 0;
}
